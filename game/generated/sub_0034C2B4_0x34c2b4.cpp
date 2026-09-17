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

// Function: sub_0034C2B4
// Address: 0x34c2b4 - 0x34c4e0
void sub_0034C2B4_0x34c2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C2B4_0x34c2b4");
#endif

    switch (ctx->pc) {
        case 0x34c2ecu: goto label_34c2ec;
        case 0x34c324u: goto label_34c324;
        case 0x34c340u: goto label_34c340;
        case 0x34c358u: goto label_34c358;
        case 0x34c360u: goto label_34c360;
        case 0x34c3ccu: goto label_34c3cc;
        case 0x34c3ecu: goto label_34c3ec;
        case 0x34c3f8u: goto label_34c3f8;
        case 0x34c43cu: goto label_34c43c;
        case 0x34c45cu: goto label_34c45c;
        case 0x34c468u: goto label_34c468;
        case 0x34c4b8u: goto label_34c4b8;
        case 0x34c4c4u: goto label_34c4c4;
        default: break;
    }

    ctx->pc = 0x34c2b4u;

    // 0x34c2b4: 0x27bdefc0  addiu       $sp, $sp, -0x1040
    ctx->pc = 0x34c2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963136));
    // 0x34c2b8: 0xffbe1030  sd          $fp, 0x1030($sp)
    ctx->pc = 0x34c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4144), GPR_U64(ctx, 30));
    // 0x34c2bc: 0xffbf1038  sd          $ra, 0x1038($sp)
    ctx->pc = 0x34c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4152), GPR_U64(ctx, 31));
    // 0x34c2c0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c2c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c2c4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34c2c8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34c2cc: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34c2d0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34c2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c2d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x34c2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c2dc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34c2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c2e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34c2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c2e4: 0xc0d2f8e  jal         func_34BE38
    ctx->pc = 0x34C2E4u;
    SET_GPR_U32(ctx, 31, 0x34C2ECu);
    ctx->pc = 0x34BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE38u, 0x34C2E4u, 0x34C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C2ECu;
label_34c2ec:
    // 0x34c2ec: 0xafc21010  sw          $v0, 0x1010($fp)
    ctx->pc = 0x34c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4112), GPR_U32(ctx, 2));
    // 0x34c2f0: 0x8fc21010  lw          $v0, 0x1010($fp)
    ctx->pc = 0x34c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c2f4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C2F4u;
    {
        const bool branch_taken_0x34c2f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34c2f4) {
            ctx->pc = 0x34C308u;
            goto label_34c308;
        }
    }
    ctx->pc = 0x34C2FCu;
    // 0x34c2fc: 0x8fc21010  lw          $v0, 0x1010($fp)
    ctx->pc = 0x34c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c300: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x34C300u;
    {
        const bool branch_taken_0x34c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c300) {
            ctx->pc = 0x34C4C8u;
            goto label_34c4c8;
        }
    }
    ctx->pc = 0x34C308u;
label_34c308:
    // 0x34c308: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34c30c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c310: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34c310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34c314: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34c314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c318: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34c318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c31c: 0xc0d2f8e  jal         func_34BE38
    ctx->pc = 0x34C31Cu;
    SET_GPR_U32(ctx, 31, 0x34C324u);
    ctx->pc = 0x34BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE38u, 0x34C31Cu, 0x34C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C324u;
label_34c324:
    // 0x34c324: 0xafc21014  sw          $v0, 0x1014($fp)
    ctx->pc = 0x34c324u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4116), GPR_U32(ctx, 2));
    // 0x34c328: 0x8fc21014  lw          $v0, 0x1014($fp)
    ctx->pc = 0x34c328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4116)));
    // 0x34c32c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C32Cu;
    {
        const bool branch_taken_0x34c32c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34c32c) {
            ctx->pc = 0x34C34Cu;
            goto label_34c34c;
        }
    }
    ctx->pc = 0x34C334u;
    // 0x34c334: 0x8fc41010  lw          $a0, 0x1010($fp)
    ctx->pc = 0x34c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c338: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x34C338u;
    SET_GPR_U32(ctx, 31, 0x34C340u);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x34C338u, 0x34C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C340u;
label_34c340:
    // 0x34c340: 0x8fc21014  lw          $v0, 0x1014($fp)
    ctx->pc = 0x34c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4116)));
    // 0x34c344: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x34C344u;
    {
        const bool branch_taken_0x34c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c344) {
            ctx->pc = 0x34C4C8u;
            goto label_34c4c8;
        }
    }
    ctx->pc = 0x34C34Cu;
label_34c34c:
    // 0x34c34c: 0x8fc41010  lw          $a0, 0x1010($fp)
    ctx->pc = 0x34c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c350: 0xc0d3054  jal         func_34C150
    ctx->pc = 0x34C350u;
    SET_GPR_U32(ctx, 31, 0x34C358u);
    ctx->pc = 0x34C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C150u, 0x34C350u, 0x34C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C358u;
label_34c358:
    // 0x34c358: 0xafc21018  sw          $v0, 0x1018($fp)
    ctx->pc = 0x34c358u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4120), GPR_U32(ctx, 2));
    // 0x34c35c: 0xafc0101c  sw          $zero, 0x101C($fp)
    ctx->pc = 0x34c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4124), GPR_U32(ctx, 0));
label_34c360:
    // 0x34c360: 0x8fc2101c  lw          $v0, 0x101C($fp)
    ctx->pc = 0x34c360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4124)));
    // 0x34c364: 0x8fc31018  lw          $v1, 0x1018($fp)
    ctx->pc = 0x34c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4120)));
    // 0x34c368: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x34c368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34c36c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C36Cu;
    {
        const bool branch_taken_0x34c36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c36c) {
            ctx->pc = 0x34C37Cu;
            goto label_34c37c;
        }
    }
    ctx->pc = 0x34C374u;
    // 0x34c374: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x34C374u;
    {
        const bool branch_taken_0x34c374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c374) {
            ctx->pc = 0x34C4ACu;
            goto label_34c4ac;
        }
    }
    ctx->pc = 0x34C37Cu;
label_34c37c:
    // 0x34c37c: 0x8fc31018  lw          $v1, 0x1018($fp)
    ctx->pc = 0x34c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4120)));
    // 0x34c380: 0x8fc2101c  lw          $v0, 0x101C($fp)
    ctx->pc = 0x34c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4124)));
    // 0x34c384: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x34c384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34c388: 0xafc21020  sw          $v0, 0x1020($fp)
    ctx->pc = 0x34c388u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4128), GPR_U32(ctx, 2));
    // 0x34c38c: 0x8fc21020  lw          $v0, 0x1020($fp)
    ctx->pc = 0x34c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4128)));
    // 0x34c390: 0xafc21024  sw          $v0, 0x1024($fp)
    ctx->pc = 0x34c390u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4132), GPR_U32(ctx, 2));
    // 0x34c394: 0x8fc31024  lw          $v1, 0x1024($fp)
    ctx->pc = 0x34c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4132)));
    // 0x34c398: 0x2c621001  sltiu       $v0, $v1, 0x1001
    ctx->pc = 0x34c398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x34c39c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C39Cu;
    {
        const bool branch_taken_0x34c39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c39c) {
            ctx->pc = 0x34C3ACu;
            goto label_34c3ac;
        }
    }
    ctx->pc = 0x34C3A4u;
    // 0x34c3a4: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x34c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x34c3a8: 0xafc21024  sw          $v0, 0x1024($fp)
    ctx->pc = 0x34c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4132), GPR_U32(ctx, 2));
label_34c3ac:
    // 0x34c3ac: 0x8fc31024  lw          $v1, 0x1024($fp)
    ctx->pc = 0x34c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4132)));
    // 0x34c3b0: 0xafc31020  sw          $v1, 0x1020($fp)
    ctx->pc = 0x34c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4128), GPR_U32(ctx, 3));
    // 0x34c3b4: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34c3b8: 0x8fc41010  lw          $a0, 0x1010($fp)
    ctx->pc = 0x34c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c3c0: 0x8fc61020  lw          $a2, 0x1020($fp)
    ctx->pc = 0x34c3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4128)));
    // 0x34c3c4: 0xc0d2fed  jal         func_34BFB4
    ctx->pc = 0x34C3C4u;
    SET_GPR_U32(ctx, 31, 0x34C3CCu);
    ctx->pc = 0x34BFB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFB4u, 0x34C3C4u, 0x34C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3CCu;
label_34c3cc:
    // 0x34c3cc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34c3d0: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34c3d4: 0x8fc21020  lw          $v0, 0x1020($fp)
    ctx->pc = 0x34c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4128)));
    // 0x34c3d8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34C3D8u;
    {
        const bool branch_taken_0x34c3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34c3d8) {
            ctx->pc = 0x34C424u;
            goto label_34c424;
        }
    }
    ctx->pc = 0x34C3E0u;
    // 0x34c3e0: 0x8fc41010  lw          $a0, 0x1010($fp)
    ctx->pc = 0x34c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c3e4: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x34C3E4u;
    SET_GPR_U32(ctx, 31, 0x34C3ECu);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x34C3E4u, 0x34C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3ECu;
label_34c3ec:
    // 0x34c3ec: 0x8fc41014  lw          $a0, 0x1014($fp)
    ctx->pc = 0x34c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4116)));
    // 0x34c3f0: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x34C3F0u;
    SET_GPR_U32(ctx, 31, 0x34C3F8u);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x34C3F0u, 0x34C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3F8u;
label_34c3f8:
    // 0x34c3f8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34c3fc: 0xafc21028  sw          $v0, 0x1028($fp)
    ctx->pc = 0x34c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4136), GPR_U32(ctx, 2));
    // 0x34c400: 0x8fc31028  lw          $v1, 0x1028($fp)
    ctx->pc = 0x34c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4136)));
    // 0x34c404: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x34c404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34c408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C408u;
    {
        const bool branch_taken_0x34c408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c408) {
            ctx->pc = 0x34C418u;
            goto label_34c418;
        }
    }
    ctx->pc = 0x34C410u;
    // 0x34c410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34c414: 0xafc21028  sw          $v0, 0x1028($fp)
    ctx->pc = 0x34c414u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4136), GPR_U32(ctx, 2));
label_34c418:
    // 0x34c418: 0x8fc21028  lw          $v0, 0x1028($fp)
    ctx->pc = 0x34c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4136)));
    // 0x34c41c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x34C41Cu;
    {
        const bool branch_taken_0x34c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c41c) {
            ctx->pc = 0x34C4C8u;
            goto label_34c4c8;
        }
    }
    ctx->pc = 0x34C424u;
label_34c424:
    // 0x34c424: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34c428: 0x8fc41014  lw          $a0, 0x1014($fp)
    ctx->pc = 0x34c428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4116)));
    // 0x34c42c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c430: 0x8fc61020  lw          $a2, 0x1020($fp)
    ctx->pc = 0x34c430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4128)));
    // 0x34c434: 0xc0d300f  jal         func_34C03C
    ctx->pc = 0x34C434u;
    SET_GPR_U32(ctx, 31, 0x34C43Cu);
    ctx->pc = 0x34C03Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C03Cu, 0x34C434u, 0x34C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C43Cu;
label_34c43c:
    // 0x34c43c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34c440: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34c444: 0x8fc21020  lw          $v0, 0x1020($fp)
    ctx->pc = 0x34c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4128)));
    // 0x34c448: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34C448u;
    {
        const bool branch_taken_0x34c448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34c448) {
            ctx->pc = 0x34C494u;
            goto label_34c494;
        }
    }
    ctx->pc = 0x34C450u;
    // 0x34c450: 0x8fc41010  lw          $a0, 0x1010($fp)
    ctx->pc = 0x34c450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c454: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x34C454u;
    SET_GPR_U32(ctx, 31, 0x34C45Cu);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x34C454u, 0x34C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C45Cu;
label_34c45c:
    // 0x34c45c: 0x8fc41014  lw          $a0, 0x1014($fp)
    ctx->pc = 0x34c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4116)));
    // 0x34c460: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x34C460u;
    SET_GPR_U32(ctx, 31, 0x34C468u);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x34C460u, 0x34C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C468u;
label_34c468:
    // 0x34c468: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34c46c: 0xafc3102c  sw          $v1, 0x102C($fp)
    ctx->pc = 0x34c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4140), GPR_U32(ctx, 3));
    // 0x34c470: 0x8fc3102c  lw          $v1, 0x102C($fp)
    ctx->pc = 0x34c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4140)));
    // 0x34c474: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x34c474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34c478: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C478u;
    {
        const bool branch_taken_0x34c478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c478) {
            ctx->pc = 0x34C488u;
            goto label_34c488;
        }
    }
    ctx->pc = 0x34C480u;
    // 0x34c480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34c484: 0xafc2102c  sw          $v0, 0x102C($fp)
    ctx->pc = 0x34c484u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4140), GPR_U32(ctx, 2));
label_34c488:
    // 0x34c488: 0x8fc2102c  lw          $v0, 0x102C($fp)
    ctx->pc = 0x34c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4140)));
    // 0x34c48c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34C48Cu;
    {
        const bool branch_taken_0x34c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c48c) {
            ctx->pc = 0x34C4C8u;
            goto label_34c4c8;
        }
    }
    ctx->pc = 0x34C494u;
label_34c494:
    // 0x34c494: 0x8fc2101c  lw          $v0, 0x101C($fp)
    ctx->pc = 0x34c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4124)));
    // 0x34c498: 0x8fc31020  lw          $v1, 0x1020($fp)
    ctx->pc = 0x34c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4128)));
    // 0x34c49c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c4a0: 0xafc2101c  sw          $v0, 0x101C($fp)
    ctx->pc = 0x34c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4124), GPR_U32(ctx, 2));
    // 0x34c4a4: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x34C4A4u;
    {
        const bool branch_taken_0x34c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c4a4) {
            ctx->pc = 0x34C360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c360;
        }
    }
    ctx->pc = 0x34C4ACu;
label_34c4ac:
    // 0x34c4ac: 0x8fc41010  lw          $a0, 0x1010($fp)
    ctx->pc = 0x34c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4112)));
    // 0x34c4b0: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x34C4B0u;
    SET_GPR_U32(ctx, 31, 0x34C4B8u);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x34C4B0u, 0x34C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4B8u;
label_34c4b8:
    // 0x34c4b8: 0x8fc41014  lw          $a0, 0x1014($fp)
    ctx->pc = 0x34c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4116)));
    // 0x34c4bc: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x34C4BCu;
    SET_GPR_U32(ctx, 31, 0x34C4C4u);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x34C4BCu, 0x34C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4C4u;
label_34c4c4:
    // 0x34c4c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34c4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c4c8:
    // 0x34c4c8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c4c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c4cc: 0xdfbe1030  ld          $fp, 0x1030($sp)
    ctx->pc = 0x34c4ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x34c4d0: 0xdfbf1038  ld          $ra, 0x1038($sp)
    ctx->pc = 0x34c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4152)));
    // 0x34c4d4: 0x27bd1040  addiu       $sp, $sp, 0x1040
    ctx->pc = 0x34c4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4160));
    // 0x34c4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x34C4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C4E0u;
}
