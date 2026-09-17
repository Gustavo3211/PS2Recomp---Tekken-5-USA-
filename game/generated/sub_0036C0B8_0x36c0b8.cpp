#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036C0B8
// Address: 0x36c0b8 - 0x36c138
void sub_0036C0B8_0x36c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C0B8_0x36c0b8");
#endif

    switch (ctx->pc) {
        case 0x36c0f0u: goto label_36c0f0;
        case 0x36c100u: goto label_36c100;
        default: break;
    }

    ctx->pc = 0x36c0b8u;

    // 0x36c0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c0c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36c0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c0c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36c0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c0cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c0d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x36c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x36c0d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x36c0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36c0d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C0D8u;
    {
        const bool branch_taken_0x36c0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c0d8) {
            ctx->pc = 0x36C0E8u;
            goto label_36c0e8;
        }
    }
    ctx->pc = 0x36C0E0u;
    // 0x36c0e0: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C0E0u;
    {
        const bool branch_taken_0x36c0e0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x36c0e0) {
            ctx->pc = 0x36C0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36C0E0u;
            // 0x36c0e4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36C0F4u;
            goto label_36c0f4;
        }
    }
    ctx->pc = 0x36C0E8u;
label_36c0e8:
    // 0x36c0e8: 0xc0a9e24  jal         func_2A7890
    ctx->pc = 0x36C0E8u;
    SET_GPR_U32(ctx, 31, 0x36C0F0u);
    ctx->pc = 0x36C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C0E8u;
    // 0x36c0ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7890u, 0x36C0E8u, 0x36C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C0F0u;
label_36c0f0:
    // 0x36c0f0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x36c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_36c0f4:
    // 0x36c0f4: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C0F4u;
    {
        const bool branch_taken_0x36c0f4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x36C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C0F4u;
        // 0x36c0f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c0f4) {
            ctx->pc = 0x36C11Cu;
            goto label_36c11c;
        }
    }
    ctx->pc = 0x36C0FCu;
    // 0x36c0fc: 0x0  nop
    ctx->pc = 0x36c0fcu;
    // NOP
label_36c100:
    // 0x36c100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36c100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36c104: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x36c104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x36c108: 0x0  nop
    ctx->pc = 0x36c108u;
    // NOP
    // 0x36c10c: 0x0  nop
    ctx->pc = 0x36c10cu;
    // NOP
    // 0x36c110: 0x0  nop
    ctx->pc = 0x36c110u;
    // NOP
    // 0x36c114: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C114u;
    {
        const bool branch_taken_0x36c114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C114u;
        // 0x36c118: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c114) {
            ctx->pc = 0x36C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c100;
        }
    }
    ctx->pc = 0x36C11Cu;
label_36c11c:
    // 0x36c11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c120: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x36c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36c124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c12c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C12Cu;
        // 0x36c130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C134u;
    // 0x36c134: 0x0  nop
    ctx->pc = 0x36c134u;
    // NOP
    ctx->pc = 0x36c138u;
}
