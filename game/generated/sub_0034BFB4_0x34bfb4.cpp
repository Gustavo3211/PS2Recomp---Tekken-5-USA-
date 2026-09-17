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

// Function: sub_0034BFB4
// Address: 0x34bfb4 - 0x34c03c
void sub_0034BFB4_0x34bfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BFB4_0x34bfb4");
#endif

    switch (ctx->pc) {
        case 0x34bfb4u: goto label_34bfb4;
        case 0x34bfb8u: goto label_34bfb8;
        case 0x34bfbcu: goto label_34bfbc;
        case 0x34bfc0u: goto label_34bfc0;
        case 0x34bfc4u: goto label_34bfc4;
        case 0x34bfc8u: goto label_34bfc8;
        case 0x34bfccu: goto label_34bfcc;
        case 0x34bfd0u: goto label_34bfd0;
        case 0x34bfd4u: goto label_34bfd4;
        case 0x34bfd8u: goto label_34bfd8;
        case 0x34bfdcu: goto label_34bfdc;
        case 0x34bfe0u: goto label_34bfe0;
        case 0x34bfe4u: goto label_34bfe4;
        case 0x34bfe8u: goto label_34bfe8;
        case 0x34bfecu: goto label_34bfec;
        case 0x34bff0u: goto label_34bff0;
        case 0x34bff4u: goto label_34bff4;
        case 0x34bff8u: goto label_34bff8;
        case 0x34bffcu: goto label_34bffc;
        case 0x34c000u: goto label_34c000;
        case 0x34c004u: goto label_34c004;
        case 0x34c008u: goto label_34c008;
        case 0x34c00cu: goto label_34c00c;
        case 0x34c010u: goto label_34c010;
        case 0x34c014u: goto label_34c014;
        case 0x34c018u: goto label_34c018;
        case 0x34c01cu: goto label_34c01c;
        case 0x34c020u: goto label_34c020;
        case 0x34c024u: goto label_34c024;
        case 0x34c028u: goto label_34c028;
        case 0x34c02cu: goto label_34c02c;
        case 0x34c030u: goto label_34c030;
        case 0x34c034u: goto label_34c034;
        case 0x34c038u: goto label_34c038;
        default: break;
    }

    ctx->pc = 0x34bfb4u;

label_34bfb4:
    // 0x34bfb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bfb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34bfb8:
    // 0x34bfb8: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_34bfbc:
    // 0x34bfbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34bfc0:
    // 0x34bfc0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bfc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34bfc4:
    // 0x34bfc4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34bfc8:
    // 0x34bfc8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34bfcc:
    // 0x34bfcc: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34bfd0:
    // 0x34bfd0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34bfd4:
    // 0x34bfd4: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x34bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
label_34bfd8:
    // 0x34bfd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34bfdc:
    // 0x34bfdc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34bfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34bfe0:
    // 0x34bfe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34bfe4:
    if (ctx->pc == 0x34BFE4u) {
        ctx->pc = 0x34BFE8u;
        goto label_34bfe8;
    }
    ctx->pc = 0x34BFE0u;
    {
        const bool branch_taken_0x34bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bfe0) {
            ctx->pc = 0x34BFF8u;
            goto label_34bff8;
        }
    }
    ctx->pc = 0x34BFE8u;
label_34bfe8:
    // 0x34bfe8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x34bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_34bfec:
    // 0x34bfec: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34bff0:
    // 0x34bff0: 0x10000002  b           . + 4 + (0x2 << 2)
label_34bff4:
    if (ctx->pc == 0x34BFF4u) {
        ctx->pc = 0x34BFF8u;
        goto label_34bff8;
    }
    ctx->pc = 0x34BFF0u;
    {
        const bool branch_taken_0x34bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bff0) {
            ctx->pc = 0x34BFFCu;
            goto label_34bffc;
        }
    }
    ctx->pc = 0x34BFF8u;
label_34bff8:
    // 0x34bff8: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x34bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_34bffc:
    // 0x34bffc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c000:
    // 0x34c000: 0x2442ba50  addiu       $v0, $v0, -0x45B0
    ctx->pc = 0x34c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949456));
label_34c004:
    // 0x34c004: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c008:
    // 0x34c008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c00c:
    // 0x34c00c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c010:
    // 0x34c010: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c014:
    // 0x34c014: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34c014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c018:
    // 0x34c018: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34c018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c01c:
    // 0x34c01c: 0x40f809  jalr        $v0
label_34c020:
    if (ctx->pc == 0x34C020u) {
        ctx->pc = 0x34C024u;
        goto label_34c024;
    }
    ctx->pc = 0x34C01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C024u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C01Cu, 0x34C024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C024u;
label_34c024:
    // 0x34c024: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c024u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c028:
    // 0x34c028: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34c028u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34c02c:
    // 0x34c02c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34c02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34c030:
    // 0x34c030: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34c034:
    // 0x34c034: 0x3e00008  jr          $ra
label_34c038:
    if (ctx->pc == 0x34C038u) {
        ctx->pc = 0x34C03Cu;
        goto label_fallthrough_0x34c034;
    }
    ctx->pc = 0x34C034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c034:
    ctx->pc = 0x34C03Cu;
}
