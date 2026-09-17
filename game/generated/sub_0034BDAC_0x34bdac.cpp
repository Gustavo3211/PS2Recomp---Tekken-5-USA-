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

// Function: sub_0034BDAC
// Address: 0x34bdac - 0x34be38
void sub_0034BDAC_0x34bdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BDAC_0x34bdac");
#endif

    switch (ctx->pc) {
        case 0x34bdacu: goto label_34bdac;
        case 0x34bdb0u: goto label_34bdb0;
        case 0x34bdb4u: goto label_34bdb4;
        case 0x34bdb8u: goto label_34bdb8;
        case 0x34bdbcu: goto label_34bdbc;
        case 0x34bdc0u: goto label_34bdc0;
        case 0x34bdc4u: goto label_34bdc4;
        case 0x34bdc8u: goto label_34bdc8;
        case 0x34bdccu: goto label_34bdcc;
        case 0x34bdd0u: goto label_34bdd0;
        case 0x34bdd4u: goto label_34bdd4;
        case 0x34bdd8u: goto label_34bdd8;
        case 0x34bddcu: goto label_34bddc;
        case 0x34bde0u: goto label_34bde0;
        case 0x34bde4u: goto label_34bde4;
        case 0x34bde8u: goto label_34bde8;
        case 0x34bdecu: goto label_34bdec;
        case 0x34bdf0u: goto label_34bdf0;
        case 0x34bdf4u: goto label_34bdf4;
        case 0x34bdf8u: goto label_34bdf8;
        case 0x34bdfcu: goto label_34bdfc;
        case 0x34be00u: goto label_34be00;
        case 0x34be04u: goto label_34be04;
        case 0x34be08u: goto label_34be08;
        case 0x34be0cu: goto label_34be0c;
        case 0x34be10u: goto label_34be10;
        case 0x34be14u: goto label_34be14;
        case 0x34be18u: goto label_34be18;
        case 0x34be1cu: goto label_34be1c;
        case 0x34be20u: goto label_34be20;
        case 0x34be24u: goto label_34be24;
        case 0x34be28u: goto label_34be28;
        case 0x34be2cu: goto label_34be2c;
        case 0x34be30u: goto label_34be30;
        case 0x34be34u: goto label_34be34;
        default: break;
    }

    ctx->pc = 0x34bdacu;

label_34bdac:
    // 0x34bdac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34bdacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34bdb0:
    // 0x34bdb0: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34bdb4:
    // 0x34bdb4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34bdb8:
    // 0x34bdb8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34bdb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34bdbc:
    // 0x34bdbc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34bdc0:
    // 0x34bdc0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34bdc4:
    // 0x34bdc4: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34bdc8:
    // 0x34bdc8: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_34bdcc:
    // 0x34bdcc: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x34bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_34bdd0:
    // 0x34bdd0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34bdd4:
    // 0x34bdd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_34bdd8:
    if (ctx->pc == 0x34BDD8u) {
        ctx->pc = 0x34BDDCu;
        goto label_34bddc;
    }
    ctx->pc = 0x34BDD4u;
    {
        const bool branch_taken_0x34bdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bdd4) {
            ctx->pc = 0x34BDF8u;
            goto label_34bdf8;
        }
    }
    ctx->pc = 0x34BDDCu;
label_34bddc:
    // 0x34bddc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34bde0:
    // 0x34bde0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34bde4:
    // 0x34bde4: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34bde8:
    // 0x34bde8: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34bdec:
    // 0x34bdec: 0x40f809  jalr        $v0
label_34bdf0:
    if (ctx->pc == 0x34BDF0u) {
        ctx->pc = 0x34BDF4u;
        goto label_34bdf4;
    }
    ctx->pc = 0x34BDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34BDF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BDECu, 0x34BDF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34BDF4u;
label_34bdf4:
    // 0x34bdf4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34bdf8:
    // 0x34bdf8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34bdfc:
    // 0x34bdfc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_34be00:
    if (ctx->pc == 0x34BE00u) {
        ctx->pc = 0x34BE04u;
        goto label_34be04;
    }
    ctx->pc = 0x34BDFCu;
    {
        const bool branch_taken_0x34bdfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34bdfc) {
            ctx->pc = 0x34BE1Cu;
            goto label_34be1c;
        }
    }
    ctx->pc = 0x34BE04u;
label_34be04:
    // 0x34be04: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34be08:
    // 0x34be08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_34be0c:
    if (ctx->pc == 0x34BE0Cu) {
        ctx->pc = 0x34BE10u;
        goto label_34be10;
    }
    ctx->pc = 0x34BE08u;
    {
        const bool branch_taken_0x34be08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34be08) {
            ctx->pc = 0x34BE1Cu;
            goto label_34be1c;
        }
    }
    ctx->pc = 0x34BE10u;
label_34be10:
    // 0x34be10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34be14:
    // 0x34be14: 0x10000002  b           . + 4 + (0x2 << 2)
label_34be18:
    if (ctx->pc == 0x34BE18u) {
        ctx->pc = 0x34BE1Cu;
        goto label_34be1c;
    }
    ctx->pc = 0x34BE14u;
    {
        const bool branch_taken_0x34be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34be14) {
            ctx->pc = 0x34BE20u;
            goto label_34be20;
        }
    }
    ctx->pc = 0x34BE1Cu;
label_34be1c:
    // 0x34be1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34be1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34be20:
    // 0x34be20: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34be20u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34be24:
    // 0x34be24: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34be24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34be28:
    // 0x34be28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34be28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34be2c:
    // 0x34be2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34be2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34be30:
    // 0x34be30: 0x3e00008  jr          $ra
label_34be34:
    if (ctx->pc == 0x34BE34u) {
        ctx->pc = 0x34BE38u;
        goto label_fallthrough_0x34be30;
    }
    ctx->pc = 0x34BE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34be30:
    ctx->pc = 0x34BE38u;
}
