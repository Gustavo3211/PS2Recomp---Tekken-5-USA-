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

// Function: sub_003066C0
// Address: 0x3066c0 - 0x306c28
void sub_003066C0_0x3066c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003066C0_0x3066c0");
#endif

    switch (ctx->pc) {
        case 0x30672cu: goto label_30672c;
        case 0x306754u: goto label_306754;
        case 0x30675cu: goto label_30675c;
        case 0x306774u: goto label_306774;
        case 0x3067acu: goto label_3067ac;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067e0u: goto label_3067e0;
        case 0x30680cu: goto label_30680c;
        case 0x30681cu: goto label_30681c;
        case 0x306830u: goto label_306830;
        case 0x306840u: goto label_306840;
        case 0x30684cu: goto label_30684c;
        case 0x306864u: goto label_306864;
        case 0x306888u: goto label_306888;
        case 0x3068acu: goto label_3068ac;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068e8u: goto label_3068e8;
        case 0x30692cu: goto label_30692c;
        case 0x306938u: goto label_306938;
        case 0x306a28u: goto label_306a28;
        case 0x306a78u: goto label_306a78;
        case 0x306ac4u: goto label_306ac4;
        case 0x306b04u: goto label_306b04;
        case 0x306ba4u: goto label_306ba4;
        case 0x306bd0u: goto label_306bd0;
        case 0x306bdcu: goto label_306bdc;
        default: break;
    }

    ctx->pc = 0x3066c0u;

    // 0x3066c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3066c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3066c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3066c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3066c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3066c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3066cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3066ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3066d0: 0x2665004c  addiu       $a1, $s3, 0x4C
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x3066d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3066d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3066d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3066d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3066dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3066dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3066e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3066e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3066e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3066e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3066e8: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x3066e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3066ec: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x3066ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3066f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3066f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3066f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3066F4u;
    {
        const bool branch_taken_0x3066f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3066f4) {
            ctx->pc = 0x3066F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3066F4u;
            // 0x3066f8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306710u;
            goto label_306710;
        }
    }
    ctx->pc = 0x3066FCu;
    // 0x3066fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3066fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x306700: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x306700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x306704: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306704u;
    {
        const bool branch_taken_0x306704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x306708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306704u;
        // 0x306708: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306704) {
            ctx->pc = 0x306718u;
            goto label_306718;
        }
    }
    ctx->pc = 0x30670Cu;
    // 0x30670c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x30670cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_306710:
    // 0x306710: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x306710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306714: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x306714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_306718:
    // 0x306718: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x30671c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306720: 0x24a52608  addiu       $a1, $a1, 0x2608
    ctx->pc = 0x306720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9736));
    // 0x306724: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306724u;
    SET_GPR_U32(ctx, 31, 0x30672Cu);
    ctx->pc = 0x306728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306724u;
    // 0x306728: 0x8e740018  lw          $s4, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306724u, 0x30672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30672Cu;
label_30672c:
    // 0x30672c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30672Cu;
    {
        const bool branch_taken_0x30672c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30672Cu;
        // 0x306730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30672c) {
            ctx->pc = 0x30674Cu;
            goto label_30674c;
        }
    }
    ctx->pc = 0x306734u;
    // 0x306734: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306738: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306738u;
    {
        const bool branch_taken_0x306738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306738) {
            ctx->pc = 0x30674Cu;
            goto label_30674c;
        }
    }
    ctx->pc = 0x306740u;
    // 0x306740: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306744: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306748: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_30674c:
    // 0x30674c: 0xc0c1e40  jal         func_307900
    ctx->pc = 0x30674Cu;
    SET_GPR_U32(ctx, 31, 0x306754u);
    ctx->pc = 0x306750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30674Cu;
    // 0x306750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307900u, 0x30674Cu, 0x306754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306754u;
label_306754:
    // 0x306754: 0xc0c2130  jal         func_3084C0
    ctx->pc = 0x306754u;
    SET_GPR_U32(ctx, 31, 0x30675Cu);
    ctx->pc = 0x306758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306754u;
    // 0x306758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3084C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3084C0u, 0x306754u, 0x30675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30675Cu;
label_30675c:
    // 0x30675c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x30675Cu;
    {
        const bool branch_taken_0x30675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30675c) {
            ctx->pc = 0x306760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30675Cu;
            // 0x306760: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306798u;
            goto label_306798;
        }
    }
    ctx->pc = 0x306764u;
    // 0x306764: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30676c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x30676Cu;
    SET_GPR_U32(ctx, 31, 0x306774u);
    ctx->pc = 0x306770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30676Cu;
    // 0x306770: 0x24a52648  addiu       $a1, $a1, 0x2648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x30676Cu, 0x306774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306774u;
label_306774:
    // 0x306774: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306774u;
    {
        const bool branch_taken_0x306774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306774u;
        // 0x306778: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306774) {
            ctx->pc = 0x306798u;
            goto label_306798;
        }
    }
    ctx->pc = 0x30677Cu;
    // 0x30677c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306780: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306780u;
    {
        const bool branch_taken_0x306780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306780u;
        // 0x306784: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306780) {
            ctx->pc = 0x306798u;
            goto label_306798;
        }
    }
    ctx->pc = 0x306788u;
    // 0x306788: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x306788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x30678c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x306790: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x306790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x306794: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_306798:
    // 0x306798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30679c: 0x4494a800  mtc1        $s4, $f21
    ctx->pc = 0x30679cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3067a0: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x3067a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x3067a4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3067A4u;
    SET_GPR_U32(ctx, 31, 0x3067ACu);
    ctx->pc = 0x3067A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067A4u;
    // 0x3067a8: 0x24a52660  addiu       $a1, $a1, 0x2660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3067A4u, 0x3067ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067ACu;
label_3067ac:
    // 0x3067ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3067acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3067b0: 0x24a52678  addiu       $a1, $a1, 0x2678
    ctx->pc = 0x3067b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9848));
    // 0x3067b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3067b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3067b8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3067B8u;
    SET_GPR_U32(ctx, 31, 0x3067C0u);
    ctx->pc = 0x3067BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067B8u;
    // 0x3067bc: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3067B8u, 0x3067C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067C0u;
label_3067c0:
    // 0x3067c0: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x3067c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3067c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3067c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3067c8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x3067C8u;
    SET_GPR_U32(ctx, 31, 0x3067D0u);
    ctx->pc = 0x3067CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067C8u;
    // 0x3067cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x3067C8u, 0x3067D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067D0u;
label_3067d0:
    // 0x3067d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3067d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3067d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3067d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3067d8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x3067D8u;
    SET_GPR_U32(ctx, 31, 0x3067E0u);
    ctx->pc = 0x3067DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067D8u;
    // 0x3067dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x3067D8u, 0x3067E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067E0u;
label_3067e0:
    // 0x3067e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3067e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3067e4: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x3067e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3067e8: 0x46150802  mul.s       $f0, $f1, $f21
    ctx->pc = 0x3067e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x3067ec: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3067ECu;
    {
        const bool branch_taken_0x3067ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3067F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067ECu;
        // 0x3067f0: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067ec) {
            ctx->pc = 0x3067F8u;
            goto label_3067f8;
        }
    }
    ctx->pc = 0x3067F4u;
    // 0x3067f4: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x3067f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3067f8:
    // 0x3067f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3067f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3067fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3067fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306800: 0x24a52690  addiu       $a1, $a1, 0x2690
    ctx->pc = 0x306800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9872));
    // 0x306804: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306804u;
    SET_GPR_U32(ctx, 31, 0x30680Cu);
    ctx->pc = 0x306808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306804u;
    // 0x306808: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306804u, 0x30680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30680Cu;
label_30680c:
    // 0x30680c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306810: 0x26a526b0  addiu       $a1, $s5, 0x26B0
    ctx->pc = 0x306810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 9904));
    // 0x306814: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306814u;
    SET_GPR_U32(ctx, 31, 0x30681Cu);
    ctx->pc = 0x306818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306814u;
    // 0x306818: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306814u, 0x30681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30681Cu;
label_30681c:
    // 0x30681c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30681cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306820: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x306820u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306828: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x306828u;
    SET_GPR_U32(ctx, 31, 0x306830u);
    ctx->pc = 0x30682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306828u;
    // 0x30682c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x306828u, 0x306830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306830u;
label_306830:
    // 0x306830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306838: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x306838u;
    SET_GPR_U32(ctx, 31, 0x306840u);
    ctx->pc = 0x30683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306838u;
    // 0x30683c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x306838u, 0x306840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306840u;
label_306840:
    // 0x306840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306844: 0xc0c209c  jal         func_308270
    ctx->pc = 0x306844u;
    SET_GPR_U32(ctx, 31, 0x30684Cu);
    ctx->pc = 0x306848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306844u;
    // 0x306848: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308270u, 0x306844u, 0x30684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30684Cu;
label_30684c:
    // 0x30684c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x30684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x306850: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x306850u;
    {
        const bool branch_taken_0x306850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306850u;
        // 0x306854: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306850) {
            ctx->pc = 0x3068ACu;
            goto label_3068ac;
        }
    }
    ctx->pc = 0x306858u;
    // 0x306858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30685c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x30685Cu;
    SET_GPR_U32(ctx, 31, 0x306864u);
    ctx->pc = 0x306860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30685Cu;
    // 0x306860: 0x24a52618  addiu       $a1, $a1, 0x2618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x30685Cu, 0x306864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306864u;
label_306864:
    // 0x306864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306868: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x306868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30686c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x30686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x306870: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x306870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306874: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x306874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x306878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30687c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30687cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306880: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x306880u;
    SET_GPR_U32(ctx, 31, 0x306888u);
    ctx->pc = 0x306884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306880u;
    // 0x306884: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x306880u, 0x306888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306888u;
label_306888:
    // 0x306888: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x306888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x30688c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30688cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306890: 0x3c0142d4  lui         $at, 0x42D4
    ctx->pc = 0x306890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17108 << 16));
    // 0x306894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x306894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30689c: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x30689cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x3068a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3068a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3068a4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x3068A4u;
    SET_GPR_U32(ctx, 31, 0x3068ACu);
    ctx->pc = 0x3068A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068A4u;
    // 0x3068a8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x3068A4u, 0x3068ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068ACu;
label_3068ac:
    // 0x3068ac: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x3068acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3068b0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3068B0u;
    {
        const bool branch_taken_0x3068b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3068b0) {
            ctx->pc = 0x3068B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3068B0u;
            // 0x3068b4: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306918u;
            goto label_306918;
        }
    }
    ctx->pc = 0x3068B8u;
    // 0x3068b8: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x3068b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x3068bc: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x3068bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x3068c0: 0x261029e0  addiu       $s0, $s0, 0x29E0
    ctx->pc = 0x3068c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10720));
    // 0x3068c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3068c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068c8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x3068c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3068cc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x3068ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3068d0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3068D0u;
    SET_GPR_U32(ctx, 31, 0x3068D8u);
    ctx->pc = 0x3068D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068D0u;
    // 0x3068d4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3068D0u, 0x3068D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068D8u;
label_3068d8:
    // 0x3068d8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3068d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3068dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3068dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068e0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3068E0u;
    SET_GPR_U32(ctx, 31, 0x3068E8u);
    ctx->pc = 0x3068E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068E0u;
    // 0x3068e4: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3068E0u, 0x3068E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068E8u;
label_3068e8:
    // 0x3068e8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x3068e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3068ec: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3068ECu;
    {
        const bool branch_taken_0x3068ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3068F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068ECu;
        // 0x3068f0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068ec) {
            ctx->pc = 0x306908u;
            goto label_306908;
        }
    }
    ctx->pc = 0x3068F4u;
    // 0x3068f4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3068f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3068f8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3068f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3068fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3068FCu;
    {
        const bool branch_taken_0x3068fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068FCu;
        // 0x306900: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068fc) {
            ctx->pc = 0x306914u;
            goto label_306914;
        }
    }
    ctx->pc = 0x306904u;
    // 0x306904: 0x0  nop
    ctx->pc = 0x306904u;
    // NOP
label_306908:
    // 0x306908: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x306908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x30690c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306910: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x306910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_306914:
    // 0x306914: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x306914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_306918:
    // 0x306918: 0x44200ab  bltzl       $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x306918u;
    {
        const bool branch_taken_0x306918 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x306918) {
            ctx->pc = 0x30691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306918u;
            // 0x30691c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306BC8u;
            goto label_306bc8;
        }
    }
    ctx->pc = 0x306920u;
    // 0x306920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306924: 0xc0c2018  jal         func_308060
    ctx->pc = 0x306924u;
    SET_GPR_U32(ctx, 31, 0x30692Cu);
    ctx->pc = 0x306928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306924u;
    // 0x306928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308060u, 0x306924u, 0x30692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30692Cu;
label_30692c:
    // 0x30692c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306930: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306930u;
    SET_GPR_U32(ctx, 31, 0x306938u);
    ctx->pc = 0x306934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306930u;
    // 0x306934: 0x26a526b0  addiu       $a1, $s5, 0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 9904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306930u, 0x306938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306938u;
label_306938:
    // 0x306938: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x306938u;
    {
        const bool branch_taken_0x306938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306938) {
            ctx->pc = 0x30693Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306938u;
            // 0x30693c: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30695Cu;
            goto label_30695c;
        }
    }
    ctx->pc = 0x306940u;
    // 0x306940: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306944: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x306944u;
    {
        const bool branch_taken_0x306944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306944) {
            ctx->pc = 0x306948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306944u;
            // 0x306948: 0x8e630018  lw          $v1, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30695Cu;
            goto label_30695c;
        }
    }
    ctx->pc = 0x30694Cu;
    // 0x30694c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x30694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306950: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306954: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x306958: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x306958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_30695c:
    // 0x30695c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x30695cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x306960: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306960u;
    {
        const bool branch_taken_0x306960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306960u;
        // 0x306964: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306960) {
            ctx->pc = 0x306984u;
            goto label_306984;
        }
    }
    ctx->pc = 0x306968u;
    // 0x306968: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x306968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x30696c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30696Cu;
    {
        const bool branch_taken_0x30696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30696Cu;
        // 0x306970: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30696c) {
            ctx->pc = 0x306984u;
            goto label_306984;
        }
    }
    ctx->pc = 0x306974u;
    // 0x306974: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x306974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x306978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30697c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306980: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x306980u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_306984:
    // 0x306984: 0x480009d  bltz        $a0, . + 4 + (0x9D << 2)
    ctx->pc = 0x306984u;
    {
        const bool branch_taken_0x306984 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x306988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306984u;
        // 0x306988: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306984) {
            ctx->pc = 0x306BFCu;
            goto label_306bfc;
        }
    }
    ctx->pc = 0x30698Cu;
    // 0x30698c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x30698Cu;
    {
        const bool branch_taken_0x30698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30698c) {
            ctx->pc = 0x306990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30698Cu;
            // 0x306990: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3069A8u;
            goto label_3069a8;
        }
    }
    ctx->pc = 0x306994u;
    // 0x306994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306998: 0x10820065  beq         $a0, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x306998u;
    {
        const bool branch_taken_0x306998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306998u;
        // 0x30699c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306998) {
            ctx->pc = 0x306B30u;
            goto label_306b30;
        }
    }
    ctx->pc = 0x3069A0u;
    // 0x3069a0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3069A0u;
    {
        const bool branch_taken_0x3069a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069A0u;
        // 0x3069a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069a0) {
            ctx->pc = 0x306C04u;
            goto label_306c04;
        }
    }
    ctx->pc = 0x3069A8u;
label_3069a8:
    // 0x3069a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3069a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3069ac: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3069ACu;
    {
        const bool branch_taken_0x3069ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3069B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069ACu;
        // 0x3069b0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069ac) {
            ctx->pc = 0x3069E8u;
            goto label_3069e8;
        }
    }
    ctx->pc = 0x3069B4u;
    // 0x3069b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3069B4u;
    {
        const bool branch_taken_0x3069b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069B4u;
        // 0x3069b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069b4) {
            ctx->pc = 0x3069D0u;
            goto label_3069d0;
        }
    }
    ctx->pc = 0x3069BCu;
    // 0x3069bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3069bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3069c0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3069C0u;
    {
        const bool branch_taken_0x3069c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3069C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069C0u;
        // 0x3069c4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069c0) {
            ctx->pc = 0x3069F8u;
            goto label_3069f8;
        }
    }
    ctx->pc = 0x3069C8u;
    // 0x3069c8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3069C8u;
    {
        const bool branch_taken_0x3069c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069C8u;
        // 0x3069cc: 0x8e62002c  lw          $v0, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069c8) {
            ctx->pc = 0x306A4Cu;
            goto label_306a4c;
        }
    }
    ctx->pc = 0x3069D0u;
label_3069d0:
    // 0x3069d0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3069D0u;
    {
        const bool branch_taken_0x3069d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3069D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069D0u;
        // 0x3069d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069d0) {
            ctx->pc = 0x306A08u;
            goto label_306a08;
        }
    }
    ctx->pc = 0x3069D8u;
    // 0x3069d8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3069D8u;
    {
        const bool branch_taken_0x3069d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3069DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069D8u;
        // 0x3069dc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069d8) {
            ctx->pc = 0x306A18u;
            goto label_306a18;
        }
    }
    ctx->pc = 0x3069E0u;
    // 0x3069e0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3069E0u;
    {
        const bool branch_taken_0x3069e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069E0u;
        // 0x3069e4: 0x8e62002c  lw          $v0, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069e0) {
            ctx->pc = 0x306A4Cu;
            goto label_306a4c;
        }
    }
    ctx->pc = 0x3069E8u;
label_3069e8:
    // 0x3069e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3069e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3069ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3069ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3069f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3069F0u;
    {
        const bool branch_taken_0x3069f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069F0u;
        // 0x3069f4: 0x24a52558  addiu       $a1, $a1, 0x2558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069f0) {
            ctx->pc = 0x306A20u;
            goto label_306a20;
        }
    }
    ctx->pc = 0x3069F8u;
label_3069f8:
    // 0x3069f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3069f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3069fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3069FCu;
    {
        const bool branch_taken_0x3069fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069FCu;
        // 0x306a00: 0x24a52578  addiu       $a1, $a1, 0x2578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069fc) {
            ctx->pc = 0x306A20u;
            goto label_306a20;
        }
    }
    ctx->pc = 0x306A04u;
    // 0x306a04: 0x0  nop
    ctx->pc = 0x306a04u;
    // NOP
label_306a08:
    // 0x306a08: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x306A10u;
    {
        const bool branch_taken_0x306a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A10u;
        // 0x306a14: 0x24a52538  addiu       $a1, $a1, 0x2538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a10) {
            ctx->pc = 0x306A20u;
            goto label_306a20;
        }
    }
    ctx->pc = 0x306A18u;
label_306a18:
    // 0x306a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a1c: 0x24a52598  addiu       $a1, $a1, 0x2598
    ctx->pc = 0x306a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
label_306a20:
    // 0x306a20: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306A20u;
    SET_GPR_U32(ctx, 31, 0x306A28u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306A20u, 0x306A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A28u;
label_306a28:
    // 0x306a28: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x306A28u;
    {
        const bool branch_taken_0x306a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a28) {
            ctx->pc = 0x306A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A28u;
            // 0x306a2c: 0x8e62002c  lw          $v0, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306A4Cu;
            goto label_306a4c;
        }
    }
    ctx->pc = 0x306A30u;
    // 0x306a30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306a34: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x306A34u;
    {
        const bool branch_taken_0x306a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a34) {
            ctx->pc = 0x306A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A34u;
            // 0x306a38: 0x8e62002c  lw          $v0, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306A4Cu;
            goto label_306a4c;
        }
    }
    ctx->pc = 0x306A3Cu;
    // 0x306a3c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306a40: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306a44: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x306a48: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x306a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_306a4c:
    // 0x306a4c: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x306A4Cu;
    {
        const bool branch_taken_0x306a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A4Cu;
        // 0x306a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a4c) {
            ctx->pc = 0x306C00u;
            goto label_306c00;
        }
    }
    ctx->pc = 0x306A54u;
    // 0x306a54: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x306a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x306a58: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x306A58u;
    {
        const bool branch_taken_0x306a58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x306a58) {
            ctx->pc = 0x306A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A58u;
            // 0x306a5c: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AA8u;
            goto label_306aa8;
        }
    }
    ctx->pc = 0x306A60u;
    // 0x306a60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x306a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x306a64: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306a68: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x306a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x306a6c: 0x24a526d0  addiu       $a1, $a1, 0x26D0
    ctx->pc = 0x306a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9936));
    // 0x306a70: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306A70u;
    SET_GPR_U32(ctx, 31, 0x306A78u);
    ctx->pc = 0x306A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A70u;
    // 0x306a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306A70u, 0x306A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A78u;
label_306a78:
    // 0x306a78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306A78u;
    {
        const bool branch_taken_0x306a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A78u;
        // 0x306a7c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a78) {
            ctx->pc = 0x306A9Cu;
            goto label_306a9c;
        }
    }
    ctx->pc = 0x306A80u;
    // 0x306a80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306a84: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x306A84u;
    {
        const bool branch_taken_0x306a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a84) {
            ctx->pc = 0x306A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A84u;
            // 0x306a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AA0u;
            goto label_306aa0;
        }
    }
    ctx->pc = 0x306A8Cu;
    // 0x306a8c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306a90: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306a94: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x306a98: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_306a9c:
    // 0x306a9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306aa0:
    // 0x306aa0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x306AA0u;
    {
        const bool branch_taken_0x306aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AA0u;
        // 0x306aa4: 0x24a526e0  addiu       $a1, $a1, 0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306aa0) {
            ctx->pc = 0x306B9Cu;
            goto label_306b9c;
        }
    }
    ctx->pc = 0x306AA8u;
label_306aa8:
    // 0x306aa8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x306AA8u;
    {
        const bool branch_taken_0x306aa8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x306AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AA8u;
        // 0x306aac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306aa8) {
            ctx->pc = 0x306AF8u;
            goto label_306af8;
        }
    }
    ctx->pc = 0x306AB0u;
    // 0x306ab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x306ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x306ab4: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x306ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x306ab8: 0x24a526f0  addiu       $a1, $a1, 0x26F0
    ctx->pc = 0x306ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9968));
    // 0x306abc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306ABCu;
    SET_GPR_U32(ctx, 31, 0x306AC4u);
    ctx->pc = 0x306AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306ABCu;
    // 0x306ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306ABCu, 0x306AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AC4u;
label_306ac4:
    // 0x306ac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306AC4u;
    {
        const bool branch_taken_0x306ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AC4u;
        // 0x306ac8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ac4) {
            ctx->pc = 0x306AE8u;
            goto label_306ae8;
        }
    }
    ctx->pc = 0x306ACCu;
    // 0x306acc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306ad0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x306AD0u;
    {
        const bool branch_taken_0x306ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306ad0) {
            ctx->pc = 0x306AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306AD0u;
            // 0x306ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AECu;
            goto label_306aec;
        }
    }
    ctx->pc = 0x306AD8u;
    // 0x306ad8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306adc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306ae0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x306ae4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_306ae8:
    // 0x306ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306aec:
    // 0x306aec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x306AECu;
    {
        const bool branch_taken_0x306aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AECu;
        // 0x306af0: 0x24a52700  addiu       $a1, $a1, 0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306aec) {
            ctx->pc = 0x306B9Cu;
            goto label_306b9c;
        }
    }
    ctx->pc = 0x306AF4u;
    // 0x306af4: 0x0  nop
    ctx->pc = 0x306af4u;
    // NOP
label_306af8:
    // 0x306af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306afc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306AFCu;
    SET_GPR_U32(ctx, 31, 0x306B04u);
    ctx->pc = 0x306B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306AFCu;
    // 0x306b00: 0x24a526f0  addiu       $a1, $a1, 0x26F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306AFCu, 0x306B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B04u;
label_306b04:
    // 0x306b04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306B04u;
    {
        const bool branch_taken_0x306b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B04u;
        // 0x306b08: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b04) {
            ctx->pc = 0x306B24u;
            goto label_306b24;
        }
    }
    ctx->pc = 0x306B0Cu;
    // 0x306b0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306b10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306B10u;
    {
        const bool branch_taken_0x306b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b10) {
            ctx->pc = 0x306B24u;
            goto label_306b24;
        }
    }
    ctx->pc = 0x306B18u;
    // 0x306b18: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306b1c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306b20: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_306b24:
    // 0x306b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x306B28u;
    {
        const bool branch_taken_0x306b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B28u;
        // 0x306b2c: 0x24a526e0  addiu       $a1, $a1, 0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b28) {
            ctx->pc = 0x306B9Cu;
            goto label_306b9c;
        }
    }
    ctx->pc = 0x306B30u;
label_306b30:
    // 0x306b30: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x306b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x306b34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306b38: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x306B38u;
    {
        const bool branch_taken_0x306b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x306B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B38u;
        // 0x306b3c: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b38) {
            ctx->pc = 0x306B80u;
            goto label_306b80;
        }
    }
    ctx->pc = 0x306B40u;
    // 0x306b40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306B40u;
    {
        const bool branch_taken_0x306b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B40u;
        // 0x306b44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b40) {
            ctx->pc = 0x306B60u;
            goto label_306b60;
        }
    }
    ctx->pc = 0x306B48u;
    // 0x306b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306b4c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306B4Cu;
    {
        const bool branch_taken_0x306b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x306B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B4Cu;
        // 0x306b50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b4c) {
            ctx->pc = 0x306B70u;
            goto label_306b70;
        }
    }
    ctx->pc = 0x306B54u;
    // 0x306b54: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x306B54u;
    {
        const bool branch_taken_0x306b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B54u;
        // 0x306b58: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b54) {
            ctx->pc = 0x306C04u;
            goto label_306c04;
        }
    }
    ctx->pc = 0x306B5Cu;
    // 0x306b5c: 0x0  nop
    ctx->pc = 0x306b5cu;
    // NOP
label_306b60:
    // 0x306b60: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x306B60u;
    {
        const bool branch_taken_0x306b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x306B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B60u;
        // 0x306b64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b60) {
            ctx->pc = 0x306B90u;
            goto label_306b90;
        }
    }
    ctx->pc = 0x306B68u;
    // 0x306b68: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x306B68u;
    {
        const bool branch_taken_0x306b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B68u;
        // 0x306b6c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b68) {
            ctx->pc = 0x306C04u;
            goto label_306c04;
        }
    }
    ctx->pc = 0x306B70u;
label_306b70:
    // 0x306b70: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x306B78u;
    {
        const bool branch_taken_0x306b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B78u;
        // 0x306b7c: 0x24a52558  addiu       $a1, $a1, 0x2558 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b78) {
            ctx->pc = 0x306B9Cu;
            goto label_306b9c;
        }
    }
    ctx->pc = 0x306B80u;
label_306b80:
    // 0x306b80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x306B88u;
    {
        const bool branch_taken_0x306b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B88u;
        // 0x306b8c: 0x24a52538  addiu       $a1, $a1, 0x2538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b88) {
            ctx->pc = 0x306B9Cu;
            goto label_306b9c;
        }
    }
    ctx->pc = 0x306B90u;
label_306b90:
    // 0x306b90: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b98: 0x24a52598  addiu       $a1, $a1, 0x2598
    ctx->pc = 0x306b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
label_306b9c:
    // 0x306b9c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306B9Cu;
    SET_GPR_U32(ctx, 31, 0x306BA4u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306B9Cu, 0x306BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BA4u;
label_306ba4:
    // 0x306ba4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x306BA4u;
    {
        const bool branch_taken_0x306ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BA4u;
        // 0x306ba8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ba4) {
            ctx->pc = 0x306C00u;
            goto label_306c00;
        }
    }
    ctx->pc = 0x306BACu;
    // 0x306bac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306bb0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x306BB0u;
    {
        const bool branch_taken_0x306bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BB0u;
        // 0x306bb4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bb0) {
            ctx->pc = 0x306C04u;
            goto label_306c04;
        }
    }
    ctx->pc = 0x306BB8u;
    // 0x306bb8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306bbc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306bc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x306BC0u;
    {
        const bool branch_taken_0x306bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BC0u;
        // 0x306bc4: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bc0) {
            ctx->pc = 0x306C04u;
            goto label_306c04;
        }
    }
    ctx->pc = 0x306BC8u;
label_306bc8:
    // 0x306bc8: 0xc0c2018  jal         func_308060
    ctx->pc = 0x306BC8u;
    SET_GPR_U32(ctx, 31, 0x306BD0u);
    ctx->pc = 0x306BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BC8u;
    // 0x306bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308060u, 0x306BC8u, 0x306BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BD0u;
label_306bd0:
    // 0x306bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306bd4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306BD4u;
    SET_GPR_U32(ctx, 31, 0x306BDCu);
    ctx->pc = 0x306BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BD4u;
    // 0x306bd8: 0x26a526b0  addiu       $a1, $s5, 0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 9904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306BD4u, 0x306BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BDCu;
label_306bdc:
    // 0x306bdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306BDCu;
    {
        const bool branch_taken_0x306bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BDCu;
        // 0x306be0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bdc) {
            ctx->pc = 0x306C00u;
            goto label_306c00;
        }
    }
    ctx->pc = 0x306BE4u;
    // 0x306be4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x306be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306be8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306BE8u;
    {
        const bool branch_taken_0x306be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BE8u;
        // 0x306bec: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306be8) {
            ctx->pc = 0x306C00u;
            goto label_306c00;
        }
    }
    ctx->pc = 0x306BF0u;
    // 0x306bf0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x306bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x306bf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x306bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x306bf8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x306bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_306bfc:
    // 0x306bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x306bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306c00:
    // 0x306c00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x306c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_306c04:
    // 0x306c04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x306c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306c08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x306c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306c0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x306c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306c10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x306c10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x306c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306c18: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x306c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x306c1c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x306c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x306c20: 0x3e00008  jr          $ra
    ctx->pc = 0x306C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C20u;
        // 0x306c24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306C28u;
}
