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

// Function: sub_0050AB48
// Address: 0x50ab48 - 0x50ac28
void sub_0050AB48_0x50ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AB48_0x50ab48");
#endif

    switch (ctx->pc) {
        case 0x50ab58u: goto label_50ab58;
        case 0x50ab68u: goto label_50ab68;
        case 0x50ab9cu: goto label_50ab9c;
        case 0x50abb0u: goto label_50abb0;
        case 0x50abd8u: goto label_50abd8;
        case 0x50ac00u: goto label_50ac00;
        default: break;
    }

    ctx->pc = 0x50ab48u;

    // 0x50ab48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50ab4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50ab50: 0xc14450e  jal         func_511438
    ctx->pc = 0x50AB50u;
    SET_GPR_U32(ctx, 31, 0x50AB58u);
    ctx->pc = 0x511438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511438u, 0x50AB50u, 0x50AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AB58u;
label_50ab58:
    // 0x50ab58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50ab58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ab5c: 0x814297c  j           func_50A5F0
    ctx->pc = 0x50AB5Cu;
    ctx->pc = 0x50AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AB5Cu;
    // 0x50ab60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A5F0u;
    sub_0050A5F0_0x50a5f0(rdram, ctx, runtime); return;
    ctx->pc = 0x50AB64u;
    // 0x50ab64: 0x0  nop
    ctx->pc = 0x50ab64u;
    // NOP
label_50ab68:
    // 0x50ab68: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50ab6c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50ab70: 0x24427dc0  addiu       $v0, $v0, 0x7DC0
    ctx->pc = 0x50ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32192));
    // 0x50ab74: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x50ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50ab78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50ab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50ab7c: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x50ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50ab80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50ab84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50ab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ab88: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x50ab88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x50ab8c: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x50ab8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x50ab90: 0xa4600016  sh          $zero, 0x16($v1)
    ctx->pc = 0x50ab90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x50ab94: 0xc14417a  jal         func_5105E8
    ctx->pc = 0x50AB94u;
    SET_GPR_U32(ctx, 31, 0x50AB9Cu);
    ctx->pc = 0x50AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AB94u;
    // 0x50ab98: 0xa4600012  sh          $zero, 0x12($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5105E8u, 0x50AB94u, 0x50AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AB9Cu;
label_50ab9c:
    // 0x50ab9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x50ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x50aba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aba4: 0x814417a  j           func_5105E8
    ctx->pc = 0x50ABA4u;
    ctx->pc = 0x50ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50ABA4u;
    // 0x50aba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    sub_005105E8_0x5105e8(rdram, ctx, runtime); return;
    ctx->pc = 0x50ABACu;
    // 0x50abac: 0x0  nop
    ctx->pc = 0x50abacu;
    // NOP
label_50abb0:
    // 0x50abb0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50abb4: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50abb8: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x50abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x50abbc: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x50abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50abc0: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x50abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50abc4: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x50abc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x50abc8: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x50abc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x50abcc: 0xa4600016  sh          $zero, 0x16($v1)
    ctx->pc = 0x50abccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x50abd0: 0x3e00008  jr          $ra
    ctx->pc = 0x50ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ABD0u;
        // 0x50abd4: 0xa4600012  sh          $zero, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50ABD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50ABD8u;
label_50abd8:
    // 0x50abd8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50abdc: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50abe0: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x50abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
    // 0x50abe4: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x50abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50abe8: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x50abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50abec: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x50abecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x50abf0: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x50abf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x50abf4: 0xa4600016  sh          $zero, 0x16($v1)
    ctx->pc = 0x50abf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x50abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x50ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ABF8u;
        // 0x50abfc: 0xa4600012  sh          $zero, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50AC00u;
label_50ac00:
    // 0x50ac00: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x50ac04: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50ac08: 0x24427fc0  addiu       $v0, $v0, 0x7FC0
    ctx->pc = 0x50ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32704));
    // 0x50ac0c: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x50ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50ac10: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x50ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50ac14: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x50ac14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x50ac18: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x50ac18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x50ac1c: 0xa4600016  sh          $zero, 0x16($v1)
    ctx->pc = 0x50ac1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x50ac20: 0x3e00008  jr          $ra
    ctx->pc = 0x50AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AC20u;
        // 0x50ac24: 0xa4600012  sh          $zero, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50AC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50AC28u;
}
