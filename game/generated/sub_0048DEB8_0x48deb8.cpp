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

// Function: sub_0048DEB8
// Address: 0x48deb8 - 0x48dfa0
void sub_0048DEB8_0x48deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DEB8_0x48deb8");
#endif

    switch (ctx->pc) {
        case 0x48dec8u: goto label_48dec8;
        case 0x48df30u: goto label_48df30;
        case 0x48df50u: goto label_48df50;
        case 0x48df5cu: goto label_48df5c;
        case 0x48df68u: goto label_48df68;
        case 0x48df90u: goto label_48df90;
        default: break;
    }

    ctx->pc = 0x48deb8u;

    // 0x48deb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48deb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48debc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48dec0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x48DEC0u;
    SET_GPR_U32(ctx, 31, 0x48DEC8u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x48DEC0u, 0x48DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DEC8u;
label_48dec8:
    // 0x48dec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48dec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48decc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ded0: 0x8483001e  lh          $v1, 0x1E($a0)
    ctx->pc = 0x48ded0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x48ded4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x48DED4u;
    {
        const bool branch_taken_0x48ded4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DED4u;
        // 0x48ded8: 0x28650002  slti        $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ded4) {
            ctx->pc = 0x48DF10u;
            goto label_48df10;
        }
    }
    ctx->pc = 0x48DEDCu;
    // 0x48dedc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x48DEDCu;
    {
        const bool branch_taken_0x48dedc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dedc) {
            ctx->pc = 0x48DEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48DEDCu;
            // 0x48dee0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48DEF8u;
            goto label_48def8;
        }
    }
    ctx->pc = 0x48DEE4u;
    // 0x48dee4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48DEE4u;
    {
        const bool branch_taken_0x48dee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DEE4u;
        // 0x48dee8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dee4) {
            ctx->pc = 0x48DF08u;
            goto label_48df08;
        }
    }
    ctx->pc = 0x48DEECu;
    // 0x48deec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48DEECu;
    {
        const bool branch_taken_0x48deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48deec) {
            ctx->pc = 0x48DF28u;
            goto label_48df28;
        }
    }
    ctx->pc = 0x48DEF4u;
    // 0x48def4: 0x0  nop
    ctx->pc = 0x48def4u;
    // NOP
label_48def8:
    // 0x48def8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48DEF8u;
    {
        const bool branch_taken_0x48def8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DEF8u;
        // 0x48defc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48def8) {
            ctx->pc = 0x48DF20u;
            goto label_48df20;
        }
    }
    ctx->pc = 0x48DF00u;
    // 0x48df00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x48DF00u;
    {
        const bool branch_taken_0x48df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48df00) {
            ctx->pc = 0x48DF28u;
            goto label_48df28;
        }
    }
    ctx->pc = 0x48DF08u;
label_48df08:
    // 0x48df08: 0x8123562  j           func_48D588
    ctx->pc = 0x48DF08u;
    ctx->pc = 0x48DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF08u;
    // 0x48df0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D588u, 0x48DF08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48DF10u;
label_48df10:
    // 0x48df10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48df10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48df14: 0x812350a  j           func_48D428
    ctx->pc = 0x48DF14u;
    ctx->pc = 0x48DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF14u;
    // 0x48df18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D428u, 0x48DF14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48DF1Cu;
    // 0x48df1c: 0x0  nop
    ctx->pc = 0x48df1cu;
    // NOP
label_48df20:
    // 0x48df20: 0x812370e  j           func_48DC38
    ctx->pc = 0x48DF20u;
    ctx->pc = 0x48DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF20u;
    // 0x48df24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DC38u, 0x48DF20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48DF28u;
label_48df28:
    // 0x48df28: 0x3e00008  jr          $ra
    ctx->pc = 0x48DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DF28u;
        // 0x48df2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DF30u;
label_48df30:
    // 0x48df30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48df34: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x48df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x48df38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48df3c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x48df3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x48df40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48df44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48df48: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x48DF48u;
    SET_GPR_U32(ctx, 31, 0x48DF50u);
    ctx->pc = 0x48DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF48u;
    // 0x48df4c: 0x2610fa02  addiu       $s0, $s0, -0x5FE (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965762));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x48DF48u, 0x48DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DF50u;
label_48df50:
    // 0x48df50: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x48df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x48df54: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x48DF54u;
    SET_GPR_U32(ctx, 31, 0x48DF5Cu);
    ctx->pc = 0x48DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF54u;
    // 0x48df58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x48DF54u, 0x48DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DF5Cu;
label_48df5c:
    // 0x48df5c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x48df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x48df60: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x48DF60u;
    SET_GPR_U32(ctx, 31, 0x48DF68u);
    ctx->pc = 0x48DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF60u;
    // 0x48df64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x48DF60u, 0x48DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DF68u;
label_48df68:
    // 0x48df68: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x48df68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x48df6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48df6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48df70: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x48df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x48df74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48df74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48df78: 0x813e4a6  j           func_4F9298
    ctx->pc = 0x48DF78u;
    ctx->pc = 0x48DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF78u;
    // 0x48df7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    sub_004F9298_0x4f9298(rdram, ctx, runtime); return;
    ctx->pc = 0x48DF80u;
    // 0x48df80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48df84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48df88: 0xc123804  jal         func_48E010
    ctx->pc = 0x48DF88u;
    SET_GPR_U32(ctx, 31, 0x48DF90u);
    ctx->pc = 0x48E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E010u, 0x48DF88u, 0x48DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DF90u;
label_48df90:
    // 0x48df90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48df90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48df94: 0x81237e8  j           func_48DFA0
    ctx->pc = 0x48DF94u;
    ctx->pc = 0x48DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF94u;
    // 0x48df98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA0u;
    sub_0048DFA0_0x48dfa0(rdram, ctx, runtime); return;
    ctx->pc = 0x48DF9Cu;
    // 0x48df9c: 0x0  nop
    ctx->pc = 0x48df9cu;
    // NOP
    ctx->pc = 0x48dfa0u;
}
