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

// Function: sub_0033D270
// Address: 0x33d270 - 0x33d308
void sub_0033D270_0x33d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D270_0x33d270");
#endif

    switch (ctx->pc) {
        case 0x33d270u: goto label_33d270;
        case 0x33d274u: goto label_33d274;
        case 0x33d278u: goto label_33d278;
        case 0x33d27cu: goto label_33d27c;
        case 0x33d280u: goto label_33d280;
        case 0x33d284u: goto label_33d284;
        case 0x33d288u: goto label_33d288;
        case 0x33d28cu: goto label_33d28c;
        case 0x33d290u: goto label_33d290;
        case 0x33d294u: goto label_33d294;
        case 0x33d298u: goto label_33d298;
        case 0x33d29cu: goto label_33d29c;
        case 0x33d2a0u: goto label_33d2a0;
        case 0x33d2a4u: goto label_33d2a4;
        case 0x33d2a8u: goto label_33d2a8;
        case 0x33d2acu: goto label_33d2ac;
        case 0x33d2b0u: goto label_33d2b0;
        case 0x33d2b4u: goto label_33d2b4;
        case 0x33d2b8u: goto label_33d2b8;
        case 0x33d2bcu: goto label_33d2bc;
        case 0x33d2c0u: goto label_33d2c0;
        case 0x33d2c4u: goto label_33d2c4;
        case 0x33d2c8u: goto label_33d2c8;
        case 0x33d2ccu: goto label_33d2cc;
        case 0x33d2d0u: goto label_33d2d0;
        case 0x33d2d4u: goto label_33d2d4;
        case 0x33d2d8u: goto label_33d2d8;
        case 0x33d2dcu: goto label_33d2dc;
        case 0x33d2e0u: goto label_33d2e0;
        case 0x33d2e4u: goto label_33d2e4;
        case 0x33d2e8u: goto label_33d2e8;
        case 0x33d2ecu: goto label_33d2ec;
        case 0x33d2f0u: goto label_33d2f0;
        case 0x33d2f4u: goto label_33d2f4;
        case 0x33d2f8u: goto label_33d2f8;
        case 0x33d2fcu: goto label_33d2fc;
        case 0x33d300u: goto label_33d300;
        case 0x33d304u: goto label_33d304;
        default: break;
    }

    ctx->pc = 0x33d270u;

label_33d270:
    // 0x33d270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33d274:
    // 0x33d274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33d278:
    // 0x33d278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d27c:
    // 0x33d27c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33d280:
    // 0x33d280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33d280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d284:
    // 0x33d284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33d288:
    // 0x33d288: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33d28c:
    // 0x33d28c: 0xc0cf424  jal         func_33D090
label_33d290:
    if (ctx->pc == 0x33D290u) {
        ctx->pc = 0x33D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D28Cu;
        // 0x33d290: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D294u;
        goto label_33d294;
    }
    ctx->pc = 0x33D28Cu;
    SET_GPR_U32(ctx, 31, 0x33D294u);
    ctx->pc = 0x33D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D28Cu;
    // 0x33d290: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D090u, 0x33D28Cu, 0x33D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D294u;
label_33d294:
    // 0x33d294: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_33d298:
    if (ctx->pc == 0x33D298u) {
        ctx->pc = 0x33D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D294u;
        // 0x33d298: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D29Cu;
        goto label_33d29c;
    }
    ctx->pc = 0x33D294u;
    {
        const bool branch_taken_0x33d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d294) {
            ctx->pc = 0x33D298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D294u;
            // 0x33d298: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D2F4u;
            goto label_33d2f4;
        }
    }
    ctx->pc = 0x33D29Cu;
label_33d29c:
    // 0x33d29c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x33d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_33d2a0:
    // 0x33d2a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33d2a4:
    // 0x33d2a4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x33d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33d2a8:
    // 0x33d2a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33d2ac:
    // 0x33d2ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x33d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_33d2b0:
    // 0x33d2b0: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x33d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_33d2b4:
    // 0x33d2b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33d2b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33d2b8:
    // 0x33d2b8: 0x96260008  lhu         $a2, 0x8($s1)
    ctx->pc = 0x33d2b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_33d2bc:
    // 0x33d2bc: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x33d2bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_33d2c0:
    // 0x33d2c0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x33d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_33d2c4:
    // 0x33d2c4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x33d2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33d2c8:
    // 0x33d2c8: 0x2463006  srlv        $a2, $a2, $s2
    ctx->pc = 0x33d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
label_33d2cc:
    // 0x33d2cc: 0xe0f809  jalr        $a3
label_33d2d0:
    if (ctx->pc == 0x33D2D0u) {
        ctx->pc = 0x33D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2CCu;
        // 0x33d2d0: 0x2452806  srlv        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D2D4u;
        goto label_33d2d4;
    }
    ctx->pc = 0x33D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x33D2D4u);
        ctx->pc = 0x33D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2CCu;
        // 0x33d2d0: 0x2452806  srlv        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2CCu, 0x33D2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D2D4u;
label_33d2d4:
    // 0x33d2d4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33d2d8:
    // 0x33d2d8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33d2dc:
    // 0x33d2dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33d2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33d2e0:
    // 0x33d2e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33d2e4:
    // 0x33d2e4: 0x60f809  jalr        $v1
label_33d2e8:
    if (ctx->pc == 0x33D2E8u) {
        ctx->pc = 0x33D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2E4u;
        // 0x33d2e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D2ECu;
        goto label_33d2ec;
    }
    ctx->pc = 0x33D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D2ECu);
        ctx->pc = 0x33D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2E4u;
        // 0x33d2e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2E4u, 0x33D2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D2ECu;
label_33d2ec:
    // 0x33d2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d2f0:
    // 0x33d2f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d2f4:
    // 0x33d2f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33d2f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33d2f8:
    // 0x33d2f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33d2f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33d2fc:
    // 0x33d2fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33d2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33d300:
    // 0x33d300: 0x3e00008  jr          $ra
label_33d304:
    if (ctx->pc == 0x33D304u) {
        ctx->pc = 0x33D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D300u;
        // 0x33d304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D308u;
        goto label_fallthrough_0x33d300;
    }
    ctx->pc = 0x33D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D300u;
        // 0x33d304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d300:
    ctx->pc = 0x33D308u;
}
