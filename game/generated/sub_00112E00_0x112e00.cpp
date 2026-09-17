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

// Function: sub_00112E00
// Address: 0x112e00 - 0x112ed0
void sub_00112E00_0x112e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112E00_0x112e00");
#endif

    switch (ctx->pc) {
        case 0x112e24u: goto label_112e24;
        case 0x112e50u: goto label_112e50;
        case 0x112e8cu: goto label_112e8c;
        default: break;
    }

    ctx->pc = 0x112e00u;

    // 0x112e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112e04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x112e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x112e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112e0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x112e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x112e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x112e18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x112e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x112e1c: 0xc044a6e  jal         func_1129B8
    ctx->pc = 0x112E1Cu;
    SET_GPR_U32(ctx, 31, 0x112E24u);
    ctx->pc = 0x112E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E1Cu;
    // 0x112e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B8u, 0x112E1Cu, 0x112E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E24u;
label_112e24:
    // 0x112e24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e28: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x112e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x112e2c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x112e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x112e30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x112e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x112e34: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x112e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x112e38: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x112e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x112e3c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x112e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x112e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x112e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e44: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x112e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x112e48: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x112E48u;
    SET_GPR_U32(ctx, 31, 0x112E50u);
    ctx->pc = 0x112E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E48u;
    // 0x112e4c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x112E48u, 0x112E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E50u;
label_112e50:
    // 0x112e50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x112E50u;
    {
        const bool branch_taken_0x112e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e50) {
            ctx->pc = 0x112E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112E50u;
            // 0x112e54: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112E64u;
            goto label_112e64;
        }
    }
    ctx->pc = 0x112E58u;
    // 0x112e58: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x112e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x112e5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112E5Cu;
    {
        const bool branch_taken_0x112e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E5Cu;
        // 0x112e60: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e5c) {
            ctx->pc = 0x112E6Cu;
            goto label_112e6c;
        }
    }
    ctx->pc = 0x112E64u;
label_112e64:
    // 0x112e64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x112e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x112e68: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x112e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_112e6c:
    // 0x112e6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x112e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x112e70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x112e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e74: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x112e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x112e78: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x112e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x112e7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e84: 0xc04493c  jal         func_1124F0
    ctx->pc = 0x112E84u;
    SET_GPR_U32(ctx, 31, 0x112E8Cu);
    ctx->pc = 0x112E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E84u;
    // 0x112e88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124F0u, 0x112E84u, 0x112E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E8Cu;
label_112e8c:
    // 0x112e8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x112E8Cu;
    {
        const bool branch_taken_0x112e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E8Cu;
        // 0x112e90: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e8c) {
            ctx->pc = 0x112EB8u;
            goto label_112eb8;
        }
    }
    ctx->pc = 0x112E94u;
    // 0x112e94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x112e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e98: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x112e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x112e9c: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
    // 0x112ea0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x112ea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112ea4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x112ea8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112eb0: 0x80469da  j           func_11A768
    ctx->pc = 0x112EB0u;
    ctx->pc = 0x112EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EB0u;
    // 0x112eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A768u, 0x112EB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x112EB8u;
label_112eb8:
    // 0x112eb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x112eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112ebc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x112EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EC4u;
        // 0x112ec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112ECCu;
    // 0x112ecc: 0x0  nop
    ctx->pc = 0x112eccu;
    // NOP
    ctx->pc = 0x112ed0u;
}
