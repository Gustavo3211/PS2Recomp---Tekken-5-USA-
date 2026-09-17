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

// Function: sub_004A00A0
// Address: 0x4a00a0 - 0x4a0120
void sub_004A00A0_0x4a00a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A00A0_0x4a00a0");
#endif

    switch (ctx->pc) {
        case 0x4a00bcu: goto label_4a00bc;
        default: break;
    }

    ctx->pc = 0x4a00a0u;

    // 0x4a00a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a00a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a00a4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a00a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a00ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a00b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a00b4: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A00B4u;
    SET_GPR_U32(ctx, 31, 0x4A00BCu);
    ctx->pc = 0x4A00B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A00B4u;
    // 0x4a00b8: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A00B4u, 0x4A00BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A00BCu;
label_4a00bc:
    // 0x4a00bc: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x4a00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x4a00c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a00c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a00c4: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4a00c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a00cc: 0x246384c0  addiu       $v1, $v1, -0x7B40
    ctx->pc = 0x4a00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935744));
    // 0x4a00d0: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x4a00d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a00d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a00d8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A00D8u;
    {
        const bool branch_taken_0x4a00d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00D8u;
        // 0x4a00dc: 0xa440014a  sh          $zero, 0x14A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 330), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00d8) {
            ctx->pc = 0x4A00F0u;
            goto label_4a00f0;
        }
    }
    ctx->pc = 0x4A00E0u;
    // 0x4a00e0: 0x12050007  beq         $s0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A00E0u;
    {
        const bool branch_taken_0x4a00e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00E0u;
        // 0x4a00e4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00e0) {
            ctx->pc = 0x4A0100u;
            goto label_4a0100;
        }
    }
    ctx->pc = 0x4A00E8u;
    // 0x4a00e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A00E8u;
    {
        const bool branch_taken_0x4a00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00E8u;
        // 0x4a00ec: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00e8) {
            ctx->pc = 0x4A0118u;
            goto label_4a0118;
        }
    }
    ctx->pc = 0x4A00F0u;
label_4a00f0:
    // 0x4a00f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a00f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A00F4u;
    {
        const bool branch_taken_0x4a00f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00F4u;
        // 0x4a00f8: 0xac430140  sw          $v1, 0x140($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00f4) {
            ctx->pc = 0x4A0110u;
            goto label_4a0110;
        }
    }
    ctx->pc = 0x4A00FCu;
    // 0x4a00fc: 0x0  nop
    ctx->pc = 0x4a00fcu;
    // NOP
label_4a0100:
    // 0x4a0100: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a0100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0104: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a0104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a0108: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x4a0108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x4a010c: 0xac620140  sw          $v0, 0x140($v1)
    ctx->pc = 0x4a010cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
label_4a0110:
    // 0x4a0110: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a0110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0114: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a0114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4a0118:
    // 0x4a0118: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0118u;
        // 0x4a011c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0120u;
}
