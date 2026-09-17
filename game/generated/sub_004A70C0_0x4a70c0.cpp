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

// Function: sub_004A70C0
// Address: 0x4a70c0 - 0x4a7150
void sub_004A70C0_0x4a70c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A70C0_0x4a70c0");
#endif

    switch (ctx->pc) {
        case 0x4a70fcu: goto label_4a70fc;
        case 0x4a7104u: goto label_4a7104;
        default: break;
    }

    ctx->pc = 0x4a70c0u;

    // 0x4a70c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a70c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a70c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a70c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a70c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a70cc: 0x2451d680  addiu       $s1, $v0, -0x2980
    ctx->pc = 0x4a70ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4a70d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a70d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a70d4: 0x26302250  addiu       $s0, $s1, 0x2250
    ctx->pc = 0x4a70d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8784));
    // 0x4a70d8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x4a70d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x72F8D0u));
    // 0x4a70dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a70dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a70e0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x4a70e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x72F8D0u));
    // 0x4a70e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4A70E4u;
    {
        const bool branch_taken_0x4a70e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70E4u;
        // 0x4a70e8: 0x28430020  slti        $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a70e4) {
            ctx->pc = 0x4A7138u;
            goto label_4a7138;
        }
    }
    ctx->pc = 0x4A70ECu;
    // 0x4a70ec: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A70ECu;
    {
        const bool branch_taken_0x4a70ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a70ec) {
            ctx->pc = 0x4A70F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A70ECu;
            // 0x4a70f0: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A710Cu;
            goto label_4a710c;
        }
    }
    ctx->pc = 0x4A70F4u;
    // 0x4a70f4: 0xc12383a  jal         func_48E0E8
    ctx->pc = 0x4A70F4u;
    SET_GPR_U32(ctx, 31, 0x4A70FCu);
    ctx->pc = 0x48E0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E0E8u, 0x4A70F4u, 0x4A70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A70FCu;
label_4a70fc:
    // 0x4a70fc: 0xc12384a  jal         func_48E128
    ctx->pc = 0x4A70FCu;
    SET_GPR_U32(ctx, 31, 0x4A7104u);
    ctx->pc = 0x48E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E128u, 0x4A70FCu, 0x4A7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7104u;
label_4a7104:
    // 0x4a7104: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x4a7104u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7108: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4a7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a710c:
    // 0x4a710c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4a710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4a7110: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A7110u;
    {
        const bool branch_taken_0x4a7110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7110u;
        // 0x4a7114: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7110) {
            ctx->pc = 0x4A7138u;
            goto label_4a7138;
        }
    }
    ctx->pc = 0x4A7118u;
    // 0x4a7118: 0x26222251  addiu       $v0, $s1, 0x2251
    ctx->pc = 0x4a7118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8785));
    // 0x4a711c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4a711cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7120: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a7120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a7124: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x4a7124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x4a7128: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A7128u;
    {
        const bool branch_taken_0x4a7128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7128u;
        // 0x4a712c: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7128) {
            ctx->pc = 0x4A7138u;
            goto label_4a7138;
        }
    }
    ctx->pc = 0x4A7130u;
    // 0x4a7130: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x4a7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x4a7134: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x4a7134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_4a7138:
    // 0x4a7138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a7138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a713c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a713cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a7140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a7140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a7144: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7144u;
        // 0x4a7148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A714Cu;
    // 0x4a714c: 0x0  nop
    ctx->pc = 0x4a714cu;
    // NOP
    ctx->pc = 0x4a7150u;
}
