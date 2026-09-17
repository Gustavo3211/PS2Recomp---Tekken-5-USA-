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

// Function: sub_002EB1C0
// Address: 0x2eb1c0 - 0x2eb448
void sub_002EB1C0_0x2eb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB1C0_0x2eb1c0");
#endif

    switch (ctx->pc) {
        case 0x2eb1e8u: goto label_2eb1e8;
        case 0x2eb200u: goto label_2eb200;
        case 0x2eb2a0u: goto label_2eb2a0;
        case 0x2eb2b4u: goto label_2eb2b4;
        case 0x2eb2d0u: goto label_2eb2d0;
        case 0x2eb2e4u: goto label_2eb2e4;
        case 0x2eb300u: goto label_2eb300;
        case 0x2eb318u: goto label_2eb318;
        case 0x2eb334u: goto label_2eb334;
        case 0x2eb348u: goto label_2eb348;
        case 0x2eb364u: goto label_2eb364;
        case 0x2eb378u: goto label_2eb378;
        case 0x2eb394u: goto label_2eb394;
        case 0x2eb3a8u: goto label_2eb3a8;
        case 0x2eb3c4u: goto label_2eb3c4;
        case 0x2eb3d4u: goto label_2eb3d4;
        case 0x2eb404u: goto label_2eb404;
        case 0x2eb428u: goto label_2eb428;
        default: break;
    }

    ctx->pc = 0x2eb1c0u;

    // 0x2eb1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eb1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eb1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb1c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eb1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eb1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eb1d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb1d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eb1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2eb1d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2eb1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2eb1dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2eb1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2eb1e0: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2EB1E0u;
    SET_GPR_U32(ctx, 31, 0x2EB1E8u);
    ctx->pc = 0x2EB1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1E0u;
    // 0x2eb1e4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2EB1E0u, 0x2EB1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1E8u;
label_2eb1e8:
    // 0x2eb1e8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eb1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eb1ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2eb1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2eb1f0: 0x2463f6e8  addiu       $v1, $v1, -0x918
    ctx->pc = 0x2eb1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964968));
    // 0x2eb1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1f8: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2EB1F8u;
    SET_GPR_U32(ctx, 31, 0x2EB200u);
    ctx->pc = 0x2EB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1F8u;
    // 0x2eb1fc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2EB1F8u, 0x2EB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB200u;
label_2eb200:
    // 0x2eb200: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x2eb200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2eb204: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb208: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB208u;
    {
        const bool branch_taken_0x2eb208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB208u;
        // 0x2eb20c: 0x262600b8  addiu       $a2, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb208) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB210u;
    // 0x2eb210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eb210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eb214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2eb214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb218: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb21c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB21Cu;
    {
        const bool branch_taken_0x2eb21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb21c) {
            ctx->pc = 0x2EB220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB21Cu;
            // 0x2eb220: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB234u;
            goto label_2eb234;
        }
    }
    ctx->pc = 0x2EB224u;
label_2eb224:
    // 0x2eb224: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2eb228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb22c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb22cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eb230: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2eb230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_2eb234:
    // 0x2eb234: 0x26450058  addiu       $a1, $s2, 0x58
    ctx->pc = 0x2eb234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x2eb238: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2eb238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb23c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2eb23cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2eb240: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2eb240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb244: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB244u;
    {
        const bool branch_taken_0x2eb244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb244) {
            ctx->pc = 0x2EB248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB244u;
            // 0x2eb248: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB260u;
            goto label_2eb260;
        }
    }
    ctx->pc = 0x2EB24Cu;
    // 0x2eb24c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2eb24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2eb250: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb254: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB254u;
    {
        const bool branch_taken_0x2eb254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB254u;
        // 0x2eb258: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb254) {
            ctx->pc = 0x2EB268u;
            goto label_2eb268;
        }
    }
    ctx->pc = 0x2EB25Cu;
    // 0x2eb25c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb25cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb260:
    // 0x2eb260: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2eb260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb264: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eb268:
    // 0x2eb268: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2eb268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2eb26c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2eb26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eb270: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB270u;
    {
        const bool branch_taken_0x2eb270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb270) {
            ctx->pc = 0x2EB274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB270u;
            // 0x2eb274: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB28Cu;
            goto label_2eb28c;
        }
    }
    ctx->pc = 0x2EB278u;
    // 0x2eb278: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2eb278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2eb27c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eb280: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB280u;
    {
        const bool branch_taken_0x2eb280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB280u;
        // 0x2eb284: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb280) {
            ctx->pc = 0x2EB294u;
            goto label_2eb294;
        }
    }
    ctx->pc = 0x2EB288u;
    // 0x2eb288: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eb288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2eb28c:
    // 0x2eb28c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2eb28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb290: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eb290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2eb294:
    // 0x2eb294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb298: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB298u;
    SET_GPR_U32(ctx, 31, 0x2EB2A0u);
    ctx->pc = 0x2EB29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB298u;
    // 0x2eb29c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB298u, 0x2EB2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2A0u;
label_2eb2a0:
    // 0x2eb2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2ac: 0xc0b9d24  jal         func_2E7490
    ctx->pc = 0x2EB2ACu;
    SET_GPR_U32(ctx, 31, 0x2EB2B4u);
    ctx->pc = 0x2EB2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2ACu;
    // 0x2eb2b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7490u, 0x2EB2ACu, 0x2EB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2B4u;
label_2eb2b4:
    // 0x2eb2b4: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2eb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2eb2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2bc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eb2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eb2c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb2c8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB2C8u;
    SET_GPR_U32(ctx, 31, 0x2EB2D0u);
    ctx->pc = 0x2EB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2C8u;
    // 0x2eb2cc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB2C8u, 0x2EB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2D0u;
label_2eb2d0:
    // 0x2eb2d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2dc: 0xc0ba316  jal         func_2E8C58
    ctx->pc = 0x2EB2DCu;
    SET_GPR_U32(ctx, 31, 0x2EB2E4u);
    ctx->pc = 0x2EB2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2DCu;
    // 0x2eb2e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8C58u, 0x2EB2DCu, 0x2EB2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2E4u;
label_2eb2e4:
    // 0x2eb2e4: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2eb2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2eb2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2ec: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eb2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eb2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb2f8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB2F8u;
    SET_GPR_U32(ctx, 31, 0x2EB300u);
    ctx->pc = 0x2EB2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2F8u;
    // 0x2eb2fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB2F8u, 0x2EB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB300u;
label_2eb300:
    // 0x2eb300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb304: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2eb304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb30c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2eb30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb310: 0xc0bd106  jal         func_2F4418
    ctx->pc = 0x2EB310u;
    SET_GPR_U32(ctx, 31, 0x2EB318u);
    ctx->pc = 0x2EB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB310u;
    // 0x2eb314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4418u, 0x2EB310u, 0x2EB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB318u;
label_2eb318:
    // 0x2eb318: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x2eb318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2eb31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb320: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eb320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eb324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb328: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb32c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB32Cu;
    SET_GPR_U32(ctx, 31, 0x2EB334u);
    ctx->pc = 0x2EB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB32Cu;
    // 0x2eb330: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB32Cu, 0x2EB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB334u;
label_2eb334:
    // 0x2eb334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb338: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2eb338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb340: 0xc0a9ae0  jal         func_2A6B80
    ctx->pc = 0x2EB340u;
    SET_GPR_U32(ctx, 31, 0x2EB348u);
    ctx->pc = 0x2EB344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB340u;
    // 0x2eb344: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B80u, 0x2EB340u, 0x2EB348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB348u;
label_2eb348:
    // 0x2eb348: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x2eb348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2eb34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb350: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eb350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eb354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb358: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb35c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB35Cu;
    SET_GPR_U32(ctx, 31, 0x2EB364u);
    ctx->pc = 0x2EB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB35Cu;
    // 0x2eb360: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB35Cu, 0x2EB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB364u;
label_2eb364:
    // 0x2eb364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb368: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2eb368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb370: 0xc0baa9e  jal         func_2EAA78
    ctx->pc = 0x2EB370u;
    SET_GPR_U32(ctx, 31, 0x2EB378u);
    ctx->pc = 0x2EB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB370u;
    // 0x2eb374: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAA78u, 0x2EB370u, 0x2EB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB378u;
label_2eb378:
    // 0x2eb378: 0x26230078  addiu       $v1, $s1, 0x78
    ctx->pc = 0x2eb378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2eb37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb380: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eb380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eb384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb388: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb38c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB38Cu;
    SET_GPR_U32(ctx, 31, 0x2EB394u);
    ctx->pc = 0x2EB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB38Cu;
    // 0x2eb390: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB38Cu, 0x2EB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB394u;
label_2eb394:
    // 0x2eb394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb398: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2eb398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eb39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3a0: 0xc0bac48  jal         func_2EB120
    ctx->pc = 0x2EB3A0u;
    SET_GPR_U32(ctx, 31, 0x2EB3A8u);
    ctx->pc = 0x2EB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3A0u;
    // 0x2eb3a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB120u, 0x2EB3A0u, 0x2EB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3A8u;
label_2eb3a8:
    // 0x2eb3a8: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x2eb3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2eb3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3b0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eb3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eb3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb3bc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EB3BCu;
    SET_GPR_U32(ctx, 31, 0x2EB3C4u);
    ctx->pc = 0x2EB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3BCu;
    // 0x2eb3c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EB3BCu, 0x2EB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3C4u;
label_2eb3c4:
    // 0x2eb3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eb3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2eb3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eb3cc: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EB3CCu;
    SET_GPR_U32(ctx, 31, 0x2EB3D4u);
    ctx->pc = 0x2EB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3CCu;
    // 0x2eb3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EB3CCu, 0x2EB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3D4u;
label_2eb3d4:
    // 0x2eb3d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2eb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eb3d8: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x2eb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x2eb3dc: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x2eb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x2eb3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2eb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2eb3e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2eb3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb3ec: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2eb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2eb3f0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2eb3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eb3f4: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2eb3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2eb3f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eb3fc: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2EB3FCu;
    SET_GPR_U32(ctx, 31, 0x2EB404u);
    ctx->pc = 0x2EB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3FCu;
    // 0x2eb400: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2EB3FCu, 0x2EB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB404u;
label_2eb404:
    // 0x2eb404: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB404u;
    {
        const bool branch_taken_0x2eb404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB404u;
        // 0x2eb408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb404) {
            ctx->pc = 0x2EB428u;
            goto label_2eb428;
        }
    }
    ctx->pc = 0x2EB40Cu;
    // 0x2eb40c: 0x0  nop
    ctx->pc = 0x2eb40cu;
    // NOP
    // 0x2eb410: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2eb410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eb414: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2eb414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2eb418: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2eb418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2eb41c: 0x248405dc  addiu       $a0, $a0, 0x5DC
    ctx->pc = 0x2eb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1500));
    // 0x2eb420: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EB420u;
    SET_GPR_U32(ctx, 31, 0x2EB428u);
    ctx->pc = 0x2EB424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB420u;
    // 0x2eb424: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EB420u, 0x2EB428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB428u;
label_2eb428:
    // 0x2eb428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb42c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eb42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb430: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eb430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb434: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2eb434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb438: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2eb438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eb43c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB43Cu;
        // 0x2eb440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB444u;
    // 0x2eb444: 0x0  nop
    ctx->pc = 0x2eb444u;
    // NOP
    ctx->pc = 0x2eb448u;
}
