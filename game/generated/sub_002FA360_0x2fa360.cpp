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

// Function: sub_002FA360
// Address: 0x2fa360 - 0x2fa4e8
void sub_002FA360_0x2fa360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA360_0x2fa360");
#endif

    switch (ctx->pc) {
        case 0x2fa3e0u: goto label_2fa3e0;
        case 0x2fa418u: goto label_2fa418;
        case 0x2fa430u: goto label_2fa430;
        case 0x2fa438u: goto label_2fa438;
        case 0x2fa47cu: goto label_2fa47c;
        case 0x2fa4ccu: goto label_2fa4cc;
        default: break;
    }

    ctx->pc = 0x2fa360u;

    // 0x2fa360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fa364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fa368: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa370: 0x26240148  addiu       $a0, $s1, 0x148
    ctx->pc = 0x2fa370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    // 0x2fa374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fa374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fa378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa37c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA37Cu;
    {
        const bool branch_taken_0x2fa37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA37Cu;
        // 0x2fa380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa37c) {
            ctx->pc = 0x2FA394u;
            goto label_2fa394;
        }
    }
    ctx->pc = 0x2FA384u;
    // 0x2fa384: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2fa384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2fa388: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fa388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa38c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA38Cu;
    {
        const bool branch_taken_0x2fa38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa38c) {
            ctx->pc = 0x2FA390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA38Cu;
            // 0x2fa390: 0x8ca20120  lw          $v0, 0x120($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA3A4u;
            goto label_2fa3a4;
        }
    }
    ctx->pc = 0x2FA394u;
label_2fa394:
    // 0x2fa394: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fa394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2fa398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa39c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fa39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fa3a0: 0x8ca20120  lw          $v0, 0x120($a1)
    ctx->pc = 0x2fa3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2fa3a4:
    // 0x2fa3a4: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA3A4u;
    {
        const bool branch_taken_0x2fa3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa3a4) {
            ctx->pc = 0x2FA3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA3A4u;
            // 0x2fa3a8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA440u;
            goto label_2fa440;
        }
    }
    ctx->pc = 0x2FA3ACu;
    // 0x2fa3ac: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x2fa3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2fa3b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fa3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa3b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA3B4u;
    {
        const bool branch_taken_0x2fa3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa3b4) {
            ctx->pc = 0x2FA3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA3B4u;
            // 0x2fa3b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA3D0u;
            goto label_2fa3d0;
        }
    }
    ctx->pc = 0x2FA3BCu;
    // 0x2fa3bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa3c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fa3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fa3c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA3C4u;
    {
        const bool branch_taken_0x2fa3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa3c4) {
            ctx->pc = 0x2FA3D8u;
            goto label_2fa3d8;
        }
    }
    ctx->pc = 0x2FA3CCu;
    // 0x2fa3cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2fa3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2fa3d0:
    // 0x2fa3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa3d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fa3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2fa3d8:
    // 0x2fa3d8: 0xc0bde60  jal         func_2F7980
    ctx->pc = 0x2FA3D8u;
    SET_GPR_U32(ctx, 31, 0x2FA3E0u);
    ctx->pc = 0x2F7980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7980u, 0x2FA3D8u, 0x2FA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA3E0u;
label_2fa3e0:
    // 0x2fa3e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FA3E0u;
    {
        const bool branch_taken_0x2fa3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3E0u;
        // 0x2fa3e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3e0) {
            ctx->pc = 0x2FA428u;
            goto label_2fa428;
        }
    }
    ctx->pc = 0x2FA3E8u;
    // 0x2fa3e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fa3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa3ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA3ECu;
    {
        const bool branch_taken_0x2fa3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa3ec) {
            ctx->pc = 0x2FA3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA3ECu;
            // 0x2fa3f0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA408u;
            goto label_2fa408;
        }
    }
    ctx->pc = 0x2FA3F4u;
    // 0x2fa3f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa3f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fa3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fa3fc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA3FCu;
    {
        const bool branch_taken_0x2fa3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa3fc) {
            ctx->pc = 0x2FA410u;
            goto label_2fa410;
        }
    }
    ctx->pc = 0x2FA404u;
    // 0x2fa404: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fa404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2fa408:
    // 0x2fa408: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa40c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2fa40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2fa410:
    // 0x2fa410: 0xc0bde60  jal         func_2F7980
    ctx->pc = 0x2FA410u;
    SET_GPR_U32(ctx, 31, 0x2FA418u);
    ctx->pc = 0x2F7980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7980u, 0x2FA410u, 0x2FA418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA418u;
label_2fa418:
    // 0x2fa418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fa418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa41c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fa41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fa420: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2fa420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fa424: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2fa424u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2fa428:
    // 0x2fa428: 0xc0be5f0  jal         func_2F97C0
    ctx->pc = 0x2FA428u;
    SET_GPR_U32(ctx, 31, 0x2FA430u);
    ctx->pc = 0x2FA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA428u;
    // 0x2fa42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F97C0u, 0x2FA428u, 0x2FA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA430u;
label_2fa430:
    // 0x2fa430: 0xc092940  jal         func_24A500
    ctx->pc = 0x2FA430u;
    SET_GPR_U32(ctx, 31, 0x2FA438u);
    ctx->pc = 0x2FA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA430u;
    // 0x2fa434: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2FA430u, 0x2FA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA438u;
label_2fa438:
    // 0x2fa438: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2FA438u;
    {
        const bool branch_taken_0x2fa438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA438u;
        // 0x2fa43c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa438) {
            ctx->pc = 0x2FA4D0u;
            goto label_2fa4d0;
        }
    }
    ctx->pc = 0x2FA440u;
label_2fa440:
    // 0x2fa440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA440u;
    {
        const bool branch_taken_0x2fa440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA440u;
        // 0x2fa444: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa440) {
            ctx->pc = 0x2FA458u;
            goto label_2fa458;
        }
    }
    ctx->pc = 0x2FA448u;
    // 0x2fa448: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2fa448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2fa44c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fa44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa450: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA450u;
    {
        const bool branch_taken_0x2fa450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa450) {
            ctx->pc = 0x2FA454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA450u;
            // 0x2fa454: 0x8ca20120  lw          $v0, 0x120($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA468u;
            goto label_2fa468;
        }
    }
    ctx->pc = 0x2FA458u;
label_2fa458:
    // 0x2fa458: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fa458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fa45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa460: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fa460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2fa464: 0x8ca20120  lw          $v0, 0x120($a1)
    ctx->pc = 0x2fa464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2fa468:
    // 0x2fa468: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fa468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fa46c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FA46Cu;
    {
        const bool branch_taken_0x2fa46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA46Cu;
        // 0x2fa470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa46c) {
            ctx->pc = 0x2FA4D0u;
            goto label_2fa4d0;
        }
    }
    ctx->pc = 0x2FA474u;
    // 0x2fa474: 0xc047274  jal         func_11C9D0
    ctx->pc = 0x2FA474u;
    SET_GPR_U32(ctx, 31, 0x2FA47Cu);
    ctx->pc = 0x2FA478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA474u;
    // 0x2fa478: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C9D0u, 0x2FA474u, 0x2FA47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA47Cu;
label_2fa47c:
    // 0x2fa47c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fa47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa480: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FA480u;
    {
        const bool branch_taken_0x2fa480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA480u;
        // 0x2fa484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa480) {
            ctx->pc = 0x2FA4D0u;
            goto label_2fa4d0;
        }
    }
    ctx->pc = 0x2FA488u;
    // 0x2fa488: 0x26240158  addiu       $a0, $s1, 0x158
    ctx->pc = 0x2fa488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x2fa48c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA490u;
    {
        const bool branch_taken_0x2fa490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA490u;
        // 0x2fa494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa490) {
            ctx->pc = 0x2FA4A8u;
            goto label_2fa4a8;
        }
    }
    ctx->pc = 0x2FA498u;
    // 0x2fa498: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2fa498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2fa49c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fa49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa4a0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA4A0u;
    {
        const bool branch_taken_0x2fa4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa4a0) {
            ctx->pc = 0x2FA4B4u;
            goto label_2fa4b4;
        }
    }
    ctx->pc = 0x2FA4A8u;
label_2fa4a8:
    // 0x2fa4a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fa4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2fa4ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fa4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2fa4b4:
    // 0x2fa4b4: 0xc780951c  lwc1        $f0, -0x6AE4($gp)
    ctx->pc = 0x2fa4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa4bc: 0xaca20130  sw          $v0, 0x130($a1)
    ctx->pc = 0x2fa4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 2));
    // 0x2fa4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4c4: 0xc0be718  jal         func_2F9C60
    ctx->pc = 0x2FA4C4u;
    SET_GPR_U32(ctx, 31, 0x2FA4CCu);
    ctx->pc = 0x2FA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA4C4u;
    // 0x2fa4c8: 0xe4a0013c  swc1        $f0, 0x13C($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 316), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9C60u, 0x2FA4C4u, 0x2FA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4CCu;
label_2fa4cc:
    // 0x2fa4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa4d0:
    // 0x2fa4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa4d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fa4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa4d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fa4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4DCu;
        // 0x2fa4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA4E4u;
    // 0x2fa4e4: 0x0  nop
    ctx->pc = 0x2fa4e4u;
    // NOP
    ctx->pc = 0x2fa4e8u;
}
