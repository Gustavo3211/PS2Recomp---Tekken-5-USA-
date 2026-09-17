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

// Function: sub_00247128
// Address: 0x247128 - 0x2471c0
void sub_00247128_0x247128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247128_0x247128");
#endif

    switch (ctx->pc) {
        case 0x247168u: goto label_247168;
        case 0x2471a8u: goto label_2471a8;
        default: break;
    }

    ctx->pc = 0x247128u;

    // 0x247128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24712c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x247130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247134: 0x24508858  addiu       $s0, $v0, -0x77A8
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x247138: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x247138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x24713c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24713cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247140: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x247140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x247144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x247148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24714c: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x24714Cu;
    {
        const bool branch_taken_0x24714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x247150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24714Cu;
        // 0x247150: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24714c) {
            ctx->pc = 0x247178u;
            goto label_247178;
        }
    }
    ctx->pc = 0x247154u;
    // 0x247154: 0x8f82a9ac  lw          $v0, -0x5654($gp)
    ctx->pc = 0x247154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945196)));
    // 0x247158: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x247158u;
    {
        const bool branch_taken_0x247158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x247158) {
            ctx->pc = 0x24715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247158u;
            // 0x24715c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2471ACu;
            goto label_2471ac;
        }
    }
    ctx->pc = 0x247160u;
    // 0x247160: 0xc092118  jal         func_248460
    ctx->pc = 0x247160u;
    SET_GPR_U32(ctx, 31, 0x247168u);
    ctx->pc = 0x248460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248460u, 0x247160u, 0x247168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247168u;
label_247168:
    // 0x247168: 0x8f82a9ac  lw          $v0, -0x5654($gp)
    ctx->pc = 0x247168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945196)));
    // 0x24716c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247170: 0xaf82a9ac  sw          $v0, -0x5654($gp)
    ctx->pc = 0x247170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945196), GPR_U32(ctx, 2));
    // 0x247174: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x247174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_247178:
    // 0x247178: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x247178u;
    {
        const bool branch_taken_0x247178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x24717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247178u;
        // 0x24717c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247178) {
            ctx->pc = 0x247194u;
            goto label_247194;
        }
    }
    ctx->pc = 0x247180u;
    // 0x247180: 0x8f82a9a8  lw          $v0, -0x5658($gp)
    ctx->pc = 0x247180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945192)));
    // 0x247184: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x247184u;
    {
        const bool branch_taken_0x247184 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x247188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247184u;
        // 0x247188: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247184) {
            ctx->pc = 0x2471A8u;
            goto label_2471a8;
        }
    }
    ctx->pc = 0x24718Cu;
    // 0x24718c: 0xaf83a9a8  sw          $v1, -0x5658($gp)
    ctx->pc = 0x24718cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945192), GPR_U32(ctx, 3));
    // 0x247190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247194:
    // 0x247194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24719c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24719cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471a0: 0xc091bda  jal         func_246F68
    ctx->pc = 0x2471A0u;
    SET_GPR_U32(ctx, 31, 0x2471A8u);
    ctx->pc = 0x2471A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471A0u;
    // 0x2471a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246F68u, 0x2471A0u, 0x2471A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471A8u;
label_2471a8:
    // 0x2471a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2471a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2471ac:
    // 0x2471ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2471acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2471b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2471b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2471b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2471b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2471b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2471B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2471BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471B8u;
        // 0x2471bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2471B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2471C0u;
}
