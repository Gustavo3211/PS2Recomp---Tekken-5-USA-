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

// Function: sub_00350C30
// Address: 0x350c30 - 0x350de8
void sub_00350C30_0x350c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350C30_0x350c30");
#endif

    switch (ctx->pc) {
        case 0x350c64u: goto label_350c64;
        case 0x350d00u: goto label_350d00;
        case 0x350d58u: goto label_350d58;
        case 0x350dc0u: goto label_350dc0;
        case 0x350dd0u: goto label_350dd0;
        default: break;
    }

    ctx->pc = 0x350c30u;

    // 0x350c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350c34: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x350c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x350c38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x350c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x350c3c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350c3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c40: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350c40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350c44: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x350c44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x350c48: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x350c48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x350c4c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x350c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x350c50: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x350c50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x350c54: 0xafc90014  sw          $t1, 0x14($fp)
    ctx->pc = 0x350c54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x350c58: 0xafca0018  sw          $t2, 0x18($fp)
    ctx->pc = 0x350c58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 10));
    // 0x350c5c: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x350C5Cu;
    SET_GPR_U32(ctx, 31, 0x350C64u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x350C5Cu, 0x350C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C64u;
label_350c64:
    // 0x350c64: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x350c64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x350c68: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x350c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x350c6c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x350c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x350c70: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x350c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350c74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350C74u;
    {
        const bool branch_taken_0x350c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350c74) {
            ctx->pc = 0x350C8Cu;
            goto label_350c8c;
        }
    }
    ctx->pc = 0x350C7Cu;
    // 0x350c7c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350c80: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x350c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x350c84: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x350C84u;
    {
        const bool branch_taken_0x350c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c84) {
            ctx->pc = 0x350D00u;
            goto label_350d00;
        }
    }
    ctx->pc = 0x350C8Cu;
label_350c8c:
    // 0x350c8c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350c90: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x350c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x350c94: 0x244220e0  addiu       $v0, $v0, 0x20E0
    ctx->pc = 0x350c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8416));
    // 0x350c98: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x350c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x350c9c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350ca0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350ca4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x350ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x350ca8: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350cac: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350cb0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x350cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x350cb4: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350cb8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350cbc: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x350cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x350cc0: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350cc4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350cc8: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x350cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x350ccc: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350cd0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x350cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350cd4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x350cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x350cd8: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350cdc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x350cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x350ce0: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x350ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x350ce4: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x350ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x350ce8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x350ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x350cec: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x350cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x350cf0: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x350cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x350cf4: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x350cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350cf8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x350CF8u;
    SET_GPR_U32(ctx, 31, 0x350D00u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x350CF8u, 0x350D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D00u;
label_350d00:
    // 0x350d00: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350d00u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d04: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x350d04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350d08: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x350d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x350d0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x350d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x350d10: 0x3e00008  jr          $ra
    ctx->pc = 0x350D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D18u;
    // 0x350d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350d1c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x350d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x350d20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x350d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x350d24: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x350d24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d28: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350d28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350d2c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x350d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x350d30: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x350d30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x350d34: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350d38: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350D38u;
    {
        const bool branch_taken_0x350d38 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x350d38) {
            ctx->pc = 0x350D50u;
            goto label_350d50;
        }
    }
    ctx->pc = 0x350D40u;
    // 0x350d40: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350d44: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x350d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x350d48: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x350D48u;
    {
        const bool branch_taken_0x350d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350d48) {
            ctx->pc = 0x350DD0u;
            goto label_350dd0;
        }
    }
    ctx->pc = 0x350D50u;
label_350d50:
    // 0x350d50: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x350D50u;
    SET_GPR_U32(ctx, 31, 0x350D58u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x350D50u, 0x350D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D58u;
label_350d58:
    // 0x350d58: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x350d58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x350d5c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x350d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350d60: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x350d60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x350d64: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x350d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350D68u;
    {
        const bool branch_taken_0x350d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350d68) {
            ctx->pc = 0x350D80u;
            goto label_350d80;
        }
    }
    ctx->pc = 0x350D70u;
    // 0x350d70: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x350d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x350d74: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x350d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x350d78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x350D78u;
    {
        const bool branch_taken_0x350d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350d78) {
            ctx->pc = 0x350DD0u;
            goto label_350dd0;
        }
    }
    ctx->pc = 0x350D80u;
label_350d80:
    // 0x350d80: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x350d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350d84: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x350d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x350d88: 0x244221cc  addiu       $v0, $v0, 0x21CC
    ctx->pc = 0x350d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8652));
    // 0x350d8c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x350d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x350d90: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x350d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350d94: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350d98: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x350d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x350d9c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x350d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350da0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350da4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x350da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x350da8: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x350da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x350dac: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x350dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x350db0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x350db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x350db4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x350db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350db8: 0xc0d4185  jal         func_350614
    ctx->pc = 0x350DB8u;
    SET_GPR_U32(ctx, 31, 0x350DC0u);
    ctx->pc = 0x350614u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350614u, 0x350DB8u, 0x350DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DC0u;
label_350dc0:
    // 0x350dc0: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x350dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x350dc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dc8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x350DC8u;
    SET_GPR_U32(ctx, 31, 0x350DD0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x350DC8u, 0x350DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DD0u;
label_350dd0:
    // 0x350dd0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350dd0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dd4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x350dd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350dd8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x350dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350ddc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x350ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x350de0: 0x3e00008  jr          $ra
    ctx->pc = 0x350DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350DE8u;
}
