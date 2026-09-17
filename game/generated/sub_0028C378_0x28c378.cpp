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

// Function: sub_0028C378
// Address: 0x28c378 - 0x28c710
void sub_0028C378_0x28c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C378_0x28c378");
#endif

    switch (ctx->pc) {
        case 0x28c40cu: goto label_28c40c;
        case 0x28c43cu: goto label_28c43c;
        case 0x28c46cu: goto label_28c46c;
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4ccu: goto label_28c4cc;
        case 0x28c4f4u: goto label_28c4f4;
        case 0x28c508u: goto label_28c508;
        case 0x28c560u: goto label_28c560;
        case 0x28c590u: goto label_28c590;
        case 0x28c5a4u: goto label_28c5a4;
        case 0x28c5b0u: goto label_28c5b0;
        case 0x28c5e0u: goto label_28c5e0;
        case 0x28c610u: goto label_28c610;
        case 0x28c640u: goto label_28c640;
        case 0x28c670u: goto label_28c670;
        case 0x28c6a0u: goto label_28c6a0;
        case 0x28c6d4u: goto label_28c6d4;
        default: break;
    }

    ctx->pc = 0x28c378u;

    // 0x28c378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c37c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x28c37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x28c380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c384: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28c384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28c388: 0x26260158  addiu       $a2, $s1, 0x158
    ctx->pc = 0x28c388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x28c38c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c390: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x28c390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x28c394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28c398: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x28c398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28c39c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C39Cu;
    {
        const bool branch_taken_0x28c39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c39c) {
            ctx->pc = 0x28C3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C39Cu;
            // 0x28c3a0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C3B8u;
            goto label_28c3b8;
        }
    }
    ctx->pc = 0x28C3A4u;
    // 0x28c3a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28c3a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x28c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28c3ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C3ACu;
    {
        const bool branch_taken_0x28c3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3ACu;
        // 0x28c3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3ac) {
            ctx->pc = 0x28C3C0u;
            goto label_28c3c0;
        }
    }
    ctx->pc = 0x28C3B4u;
    // 0x28c3b4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x28c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_28c3b8:
    // 0x28c3b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c3bc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x28c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_28c3c0:
    // 0x28c3c0: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x28c3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x28c3c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28C3C4u;
    {
        const bool branch_taken_0x28c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3C4u;
        // 0x28c3c8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3c4) {
            ctx->pc = 0x28C3F0u;
            goto label_28c3f0;
        }
    }
    ctx->pc = 0x28C3CCu;
    // 0x28c3cc: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x28c3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x28c3d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x28C3D0u;
    {
        const bool branch_taken_0x28c3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c3d0) {
            ctx->pc = 0x28C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C3D0u;
            // 0x28c3d4: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C400u;
            goto label_28c400;
        }
    }
    ctx->pc = 0x28C3D8u;
    // 0x28c3d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28c3dc: 0x10a2007c  beq         $a1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x28C3DCu;
    {
        const bool branch_taken_0x28c3dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3DCu;
        // 0x28c3e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3dc) {
            ctx->pc = 0x28C5D0u;
            goto label_28c5d0;
        }
    }
    ctx->pc = 0x28C3E4u;
    // 0x28c3e4: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x28C3E4u;
    {
        const bool branch_taken_0x28c3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3E4u;
        // 0x28c3e8: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3e4) {
            ctx->pc = 0x28C6FCu;
            goto label_28c6fc;
        }
    }
    ctx->pc = 0x28C3ECu;
    // 0x28c3ec: 0x0  nop
    ctx->pc = 0x28c3ecu;
    // NOP
label_28c3f0:
    // 0x28c3f0: 0x10a20057  beq         $a1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x28C3F0u;
    {
        const bool branch_taken_0x28c3f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3F0u;
        // 0x28c3f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3f0) {
            ctx->pc = 0x28C550u;
            goto label_28c550;
        }
    }
    ctx->pc = 0x28C3F8u;
    // 0x28c3f8: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x28C3F8u;
    {
        const bool branch_taken_0x28c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3F8u;
        // 0x28c3fc: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3f8) {
            ctx->pc = 0x28C6FCu;
            goto label_28c6fc;
        }
    }
    ctx->pc = 0x28C400u;
label_28c400:
    // 0x28c400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c404: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C404u;
    SET_GPR_U32(ctx, 31, 0x28C40Cu);
    ctx->pc = 0x28C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C404u;
    // 0x28c408: 0x24a53d48  addiu       $a1, $a1, 0x3D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C404u, 0x28C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C40Cu;
label_28c40c:
    // 0x28c40c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C40Cu;
    {
        const bool branch_taken_0x28c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c40c) {
            ctx->pc = 0x28C410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C40Cu;
            // 0x28c410: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C430u;
            goto label_28c430;
        }
    }
    ctx->pc = 0x28C414u;
    // 0x28c414: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c418: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C418u;
    {
        const bool branch_taken_0x28c418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C418u;
        // 0x28c41c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c418) {
            ctx->pc = 0x28C42Cu;
            goto label_28c42c;
        }
    }
    ctx->pc = 0x28C420u;
    // 0x28c420: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c424: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c428: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c42c:
    // 0x28c42c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c430:
    // 0x28c430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c434: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C434u;
    SET_GPR_U32(ctx, 31, 0x28C43Cu);
    ctx->pc = 0x28C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C434u;
    // 0x28c438: 0x24a59da0  addiu       $a1, $a1, -0x6260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C434u, 0x28C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C43Cu;
label_28c43c:
    // 0x28c43c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C43Cu;
    {
        const bool branch_taken_0x28c43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c43c) {
            ctx->pc = 0x28C440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C43Cu;
            // 0x28c440: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C460u;
            goto label_28c460;
        }
    }
    ctx->pc = 0x28C444u;
    // 0x28c444: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c448: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C448u;
    {
        const bool branch_taken_0x28c448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C448u;
        // 0x28c44c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c448) {
            ctx->pc = 0x28C45Cu;
            goto label_28c45c;
        }
    }
    ctx->pc = 0x28C450u;
    // 0x28c450: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c458: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c45c:
    // 0x28c45c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c460:
    // 0x28c460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c464: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C464u;
    SET_GPR_U32(ctx, 31, 0x28C46Cu);
    ctx->pc = 0x28C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C464u;
    // 0x28c468: 0x24a53d50  addiu       $a1, $a1, 0x3D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C464u, 0x28C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C46Cu;
label_28c46c:
    // 0x28c46c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C46Cu;
    {
        const bool branch_taken_0x28c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c46c) {
            ctx->pc = 0x28C470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C46Cu;
            // 0x28c470: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C490u;
            goto label_28c490;
        }
    }
    ctx->pc = 0x28C474u;
    // 0x28c474: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c478: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C478u;
    {
        const bool branch_taken_0x28c478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C478u;
        // 0x28c47c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c478) {
            ctx->pc = 0x28C48Cu;
            goto label_28c48c;
        }
    }
    ctx->pc = 0x28C480u;
    // 0x28c480: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c484: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c488: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c48c:
    // 0x28c48c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c490:
    // 0x28c490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c494: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C494u;
    SET_GPR_U32(ctx, 31, 0x28C49Cu);
    ctx->pc = 0x28C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C494u;
    // 0x28c498: 0x24a53d58  addiu       $a1, $a1, 0x3D58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C494u, 0x28C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C49Cu;
label_28c49c:
    // 0x28c49c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C49Cu;
    {
        const bool branch_taken_0x28c49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c49c) {
            ctx->pc = 0x28C4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C49Cu;
            // 0x28c4a0: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C4C0u;
            goto label_28c4c0;
        }
    }
    ctx->pc = 0x28C4A4u;
    // 0x28c4a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c4a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C4A8u;
    {
        const bool branch_taken_0x28c4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4A8u;
        // 0x28c4ac: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4a8) {
            ctx->pc = 0x28C4BCu;
            goto label_28c4bc;
        }
    }
    ctx->pc = 0x28C4B0u;
    // 0x28c4b0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c4b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c4b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c4bc:
    // 0x28c4bc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c4c0:
    // 0x28c4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c4c4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C4C4u;
    SET_GPR_U32(ctx, 31, 0x28C4CCu);
    ctx->pc = 0x28C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4C4u;
    // 0x28c4c8: 0x24a53d60  addiu       $a1, $a1, 0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C4C4u, 0x28C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4CCu;
label_28c4cc:
    // 0x28c4cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C4CCu;
    {
        const bool branch_taken_0x28c4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c4cc) {
            ctx->pc = 0x28C4ECu;
            goto label_28c4ec;
        }
    }
    ctx->pc = 0x28C4D4u;
    // 0x28c4d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c4d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C4D8u;
    {
        const bool branch_taken_0x28c4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4D8u;
        // 0x28c4dc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4d8) {
            ctx->pc = 0x28C4ECu;
            goto label_28c4ec;
        }
    }
    ctx->pc = 0x28C4E0u;
    // 0x28c4e0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c4e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c4e8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c4ec:
    // 0x28c4ec: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x28C4ECu;
    SET_GPR_U32(ctx, 31, 0x28C4F4u);
    ctx->pc = 0x28C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C4ECu;
    // 0x28c4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x28C4ECu, 0x28C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4F4u;
label_28c4f4:
    // 0x28c4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c4f8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28c4fc: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x28c4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28c500: 0x24466e70  addiu       $a2, $v0, 0x6E70
    ctx->pc = 0x28c500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x28c504: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28c504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28c508:
    // 0x28c508: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28c50c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28c510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c514: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C514u;
    {
        const bool branch_taken_0x28c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C514u;
        // 0x28c518: 0x28a40021  slti        $a0, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c514) {
            ctx->pc = 0x28C534u;
            goto label_28c534;
        }
    }
    ctx->pc = 0x28C51Cu;
    // 0x28c51c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c520: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C520u;
    {
        const bool branch_taken_0x28c520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c520) {
            ctx->pc = 0x28C534u;
            goto label_28c534;
        }
    }
    ctx->pc = 0x28C528u;
    // 0x28c528: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28c52c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28c530: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28c530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28c534:
    // 0x28c534: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28C534u;
    {
        const bool branch_taken_0x28c534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C534u;
        // 0x28c538: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c534) {
            ctx->pc = 0x28C508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c508;
        }
    }
    ctx->pc = 0x28C53Cu;
    // 0x28c53c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28c540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c544: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x28C544u;
    {
        const bool branch_taken_0x28c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C544u;
        // 0x28c548: 0x24a53d78  addiu       $a1, $a1, 0x3D78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c544) {
            ctx->pc = 0x28C6CCu;
            goto label_28c6cc;
        }
    }
    ctx->pc = 0x28C54Cu;
    // 0x28c54c: 0x0  nop
    ctx->pc = 0x28c54cu;
    // NOP
label_28c550:
    // 0x28c550: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c558: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C558u;
    SET_GPR_U32(ctx, 31, 0x28C560u);
    ctx->pc = 0x28C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C558u;
    // 0x28c55c: 0x24a59db0  addiu       $a1, $a1, -0x6250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C558u, 0x28C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C560u;
label_28c560:
    // 0x28c560: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C560u;
    {
        const bool branch_taken_0x28c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C560u;
        // 0x28c564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c560) {
            ctx->pc = 0x28C584u;
            goto label_28c584;
        }
    }
    ctx->pc = 0x28C568u;
    // 0x28c568: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c56c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C56Cu;
    {
        const bool branch_taken_0x28c56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C56Cu;
        // 0x28c570: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c56c) {
            ctx->pc = 0x28C584u;
            goto label_28c584;
        }
    }
    ctx->pc = 0x28C574u;
    // 0x28c574: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c578: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c57c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28c580: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c584:
    // 0x28c584: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x28c584u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x28c588: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x28c588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28c58c: 0x0  nop
    ctx->pc = 0x28c58cu;
    // NOP
label_28c590:
    // 0x28c590: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28c590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28c598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c59c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28C59Cu;
    SET_GPR_U32(ctx, 31, 0x28C5A4u);
    ctx->pc = 0x28C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C59Cu;
    // 0x28c5a0: 0x26659dc0  addiu       $a1, $s3, -0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28C59Cu, 0x28C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C5A4u;
label_28c5a4:
    // 0x28c5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5a8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C5A8u;
    SET_GPR_U32(ctx, 31, 0x28C5B0u);
    ctx->pc = 0x28C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5A8u;
    // 0x28c5ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C5A8u, 0x28C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C5B0u;
label_28c5b0:
    // 0x28c5b0: 0x2a04000a  slti        $a0, $s0, 0xA
    ctx->pc = 0x28c5b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28c5b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c5b8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28c5bc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x28c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x28c5c0: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x28C5C0u;
    {
        const bool branch_taken_0x28c5c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5C0u;
        // 0x28c5c4: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5c0) {
            ctx->pc = 0x28C590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c590;
        }
    }
    ctx->pc = 0x28C5C8u;
    // 0x28c5c8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x28C5C8u;
    {
        const bool branch_taken_0x28c5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5C8u;
        // 0x28c5cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5c8) {
            ctx->pc = 0x28C6F8u;
            goto label_28c6f8;
        }
    }
    ctx->pc = 0x28C5D0u;
label_28c5d0:
    // 0x28c5d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5d8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C5D8u;
    SET_GPR_U32(ctx, 31, 0x28C5E0u);
    ctx->pc = 0x28C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C5D8u;
    // 0x28c5dc: 0x24a59df0  addiu       $a1, $a1, -0x6210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C5D8u, 0x28C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C5E0u;
label_28c5e0:
    // 0x28c5e0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C5E0u;
    {
        const bool branch_taken_0x28c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5e0) {
            ctx->pc = 0x28C5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C5E0u;
            // 0x28c5e4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C604u;
            goto label_28c604;
        }
    }
    ctx->pc = 0x28C5E8u;
    // 0x28c5e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c5ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C5ECu;
    {
        const bool branch_taken_0x28c5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C5ECu;
        // 0x28c5f0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5ec) {
            ctx->pc = 0x28C600u;
            goto label_28c600;
        }
    }
    ctx->pc = 0x28C5F4u;
    // 0x28c5f4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c5f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c5fc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c600:
    // 0x28c600: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c604:
    // 0x28c604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c608: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C608u;
    SET_GPR_U32(ctx, 31, 0x28C610u);
    ctx->pc = 0x28C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C608u;
    // 0x28c60c: 0x24a59d50  addiu       $a1, $a1, -0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C608u, 0x28C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C610u;
label_28c610:
    // 0x28c610: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C610u;
    {
        const bool branch_taken_0x28c610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c610) {
            ctx->pc = 0x28C614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C610u;
            // 0x28c614: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C634u;
            goto label_28c634;
        }
    }
    ctx->pc = 0x28C618u;
    // 0x28c618: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c61c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C61Cu;
    {
        const bool branch_taken_0x28c61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C61Cu;
        // 0x28c620: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c61c) {
            ctx->pc = 0x28C630u;
            goto label_28c630;
        }
    }
    ctx->pc = 0x28C624u;
    // 0x28c624: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c62c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c630:
    // 0x28c630: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c634:
    // 0x28c634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c638: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C638u;
    SET_GPR_U32(ctx, 31, 0x28C640u);
    ctx->pc = 0x28C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C638u;
    // 0x28c63c: 0x24a59d60  addiu       $a1, $a1, -0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C638u, 0x28C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C640u;
label_28c640:
    // 0x28c640: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C640u;
    {
        const bool branch_taken_0x28c640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c640) {
            ctx->pc = 0x28C644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C640u;
            // 0x28c644: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C664u;
            goto label_28c664;
        }
    }
    ctx->pc = 0x28C648u;
    // 0x28c648: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c64c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C64Cu;
    {
        const bool branch_taken_0x28c64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C64Cu;
        // 0x28c650: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c64c) {
            ctx->pc = 0x28C660u;
            goto label_28c660;
        }
    }
    ctx->pc = 0x28C654u;
    // 0x28c654: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c658: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c65c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c660:
    // 0x28c660: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c664:
    // 0x28c664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c668: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C668u;
    SET_GPR_U32(ctx, 31, 0x28C670u);
    ctx->pc = 0x28C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C668u;
    // 0x28c66c: 0x24a59d70  addiu       $a1, $a1, -0x6290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C668u, 0x28C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C670u;
label_28c670:
    // 0x28c670: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C670u;
    {
        const bool branch_taken_0x28c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c670) {
            ctx->pc = 0x28C674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C670u;
            // 0x28c674: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C694u;
            goto label_28c694;
        }
    }
    ctx->pc = 0x28C678u;
    // 0x28c678: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c67c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C67Cu;
    {
        const bool branch_taken_0x28c67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C67Cu;
        // 0x28c680: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c67c) {
            ctx->pc = 0x28C690u;
            goto label_28c690;
        }
    }
    ctx->pc = 0x28C684u;
    // 0x28c684: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c688: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c68c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c690:
    // 0x28c690: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c694:
    // 0x28c694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c698: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C698u;
    SET_GPR_U32(ctx, 31, 0x28C6A0u);
    ctx->pc = 0x28C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C698u;
    // 0x28c69c: 0x24a59d80  addiu       $a1, $a1, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C698u, 0x28C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6A0u;
label_28c6a0:
    // 0x28c6a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C6A0u;
    {
        const bool branch_taken_0x28c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6A0u;
        // 0x28c6a4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6a0) {
            ctx->pc = 0x28C6C4u;
            goto label_28c6c4;
        }
    }
    ctx->pc = 0x28C6A8u;
    // 0x28c6a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c6ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C6ACu;
    {
        const bool branch_taken_0x28c6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6ACu;
        // 0x28c6b0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6ac) {
            ctx->pc = 0x28C6C4u;
            goto label_28c6c4;
        }
    }
    ctx->pc = 0x28C6B4u;
    // 0x28c6b4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c6b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c6bc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28c6c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c6c4:
    // 0x28c6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6c8: 0x24a59d90  addiu       $a1, $a1, -0x6270
    ctx->pc = 0x28c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942096));
label_28c6cc:
    // 0x28c6cc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C6CCu;
    SET_GPR_U32(ctx, 31, 0x28C6D4u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C6CCu, 0x28C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C6D4u;
label_28c6d4:
    // 0x28c6d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C6D4u;
    {
        const bool branch_taken_0x28c6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6D4u;
        // 0x28c6d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6d4) {
            ctx->pc = 0x28C6F8u;
            goto label_28c6f8;
        }
    }
    ctx->pc = 0x28C6DCu;
    // 0x28c6dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c6e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C6E0u;
    {
        const bool branch_taken_0x28c6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6E0u;
        // 0x28c6e4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6e0) {
            ctx->pc = 0x28C6F8u;
            goto label_28c6f8;
        }
    }
    ctx->pc = 0x28C6E8u;
    // 0x28c6e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c6ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c6f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28c6f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28c6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28c6f8:
    // 0x28c6f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x28c6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_28c6fc:
    // 0x28c6fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c700: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x28c700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28c704: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c708: 0x3e00008  jr          $ra
    ctx->pc = 0x28C708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C708u;
        // 0x28c70c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C710u;
}
