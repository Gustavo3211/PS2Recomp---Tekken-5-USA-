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

// Function: sub_00291090
// Address: 0x291090 - 0x291578
void sub_00291090_0x291090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291090_0x291090");
#endif

    switch (ctx->pc) {
        case 0x2910e8u: goto label_2910e8;
        case 0x291104u: goto label_291104;
        case 0x291118u: goto label_291118;
        case 0x291138u: goto label_291138;
        case 0x291164u: goto label_291164;
        case 0x29117cu: goto label_29117c;
        case 0x291194u: goto label_291194;
        case 0x291250u: goto label_291250;
        case 0x291264u: goto label_291264;
        case 0x29127cu: goto label_29127c;
        case 0x291318u: goto label_291318;
        case 0x291350u: goto label_291350;
        case 0x291368u: goto label_291368;
        case 0x2913bcu: goto label_2913bc;
        case 0x2913f4u: goto label_2913f4;
        case 0x29142cu: goto label_29142c;
        case 0x291478u: goto label_291478;
        case 0x2914b0u: goto label_2914b0;
        case 0x2914e8u: goto label_2914e8;
        case 0x291524u: goto label_291524;
        default: break;
    }

    ctx->pc = 0x291090u;

    // 0x291090: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x291090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x291094: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x291094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x291098: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x291098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x29109c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29109cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2910a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2910a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2910a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2910a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2910ac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2910acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2910b0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2910b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2910b4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2910b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2910b8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2910b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2910bc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2910bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2910c0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2910c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2910c4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2910c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2910c8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2910c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2910cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2910ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2910d0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2910d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2910d4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2910D4u;
    {
        const bool branch_taken_0x2910d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910D4u;
        // 0x2910d8: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910d4) {
            ctx->pc = 0x2910F8u;
            goto label_2910f8;
        }
    }
    ctx->pc = 0x2910DCu;
    // 0x2910dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2910dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2910e0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2910E0u;
    SET_GPR_U32(ctx, 31, 0x2910E8u);
    ctx->pc = 0x2910E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2910E0u;
    // 0x2910e4: 0x24a5ac78  addiu       $a1, $a1, -0x5388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2910E0u, 0x2910E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2910E8u;
label_2910e8:
    // 0x2910e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2910e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2910ec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2910ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2910f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2910F0u;
    {
        const bool branch_taken_0x2910f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910F0u;
        // 0x2910f4: 0x24a5ac88  addiu       $a1, $a1, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910f0) {
            ctx->pc = 0x291110u;
            goto label_291110;
        }
    }
    ctx->pc = 0x2910F8u;
label_2910f8:
    // 0x2910f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2910f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2910fc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2910FCu;
    SET_GPR_U32(ctx, 31, 0x291104u);
    ctx->pc = 0x291100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2910FCu;
    // 0x291100: 0x24a5ac98  addiu       $a1, $a1, -0x5368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2910FCu, 0x291104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291104u;
label_291104:
    // 0x291104: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291108: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x291108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x29110c: 0x24a5aca8  addiu       $a1, $a1, -0x5358
    ctx->pc = 0x29110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945960));
label_291110:
    // 0x291110: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291110u;
    SET_GPR_U32(ctx, 31, 0x291118u);
    ctx->pc = 0x291114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291110u;
    // 0x291114: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291110u, 0x291118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291118u;
label_291118:
    // 0x291118: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x291118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29111c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29111cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291120: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x291120u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x291124: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x291124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x291128: 0x26350008  addiu       $s5, $s1, 0x8
    ctx->pc = 0x291128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x29112c: 0x26370004  addiu       $s7, $s1, 0x4
    ctx->pc = 0x29112cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x291130: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x291130u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291134: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x291134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_291138:
    // 0x291138: 0x52620095  beql        $s3, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x291138u;
    {
        const bool branch_taken_0x291138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x291138) {
            ctx->pc = 0x29113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291138u;
            // 0x29113c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291390u;
            goto label_291390;
        }
    }
    ctx->pc = 0x291140u;
    // 0x291140: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x291140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x291144: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x291144u;
    {
        const bool branch_taken_0x291144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291144) {
            ctx->pc = 0x291238u;
            goto label_291238;
        }
    }
    ctx->pc = 0x29114Cu;
    // 0x29114c: 0x12760008  beq         $s3, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x29114Cu;
    {
        const bool branch_taken_0x29114c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x291150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29114Cu;
        // 0x291150: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29114c) {
            ctx->pc = 0x291170u;
            goto label_291170;
        }
    }
    ctx->pc = 0x291154u;
    // 0x291154: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291158: 0x24a5acb8  addiu       $a1, $a1, -0x5348
    ctx->pc = 0x291158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945976));
    // 0x29115c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29115Cu;
    SET_GPR_U32(ctx, 31, 0x291164u);
    ctx->pc = 0x291160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29115Cu;
    // 0x291160: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29115Cu, 0x291164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291164u;
label_291164:
    // 0x291164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x291164u;
    {
        const bool branch_taken_0x291164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291164u;
        // 0x291168: 0x139080  sll         $s2, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291164) {
            ctx->pc = 0x291180u;
            goto label_291180;
        }
    }
    ctx->pc = 0x29116Cu;
    // 0x29116c: 0x0  nop
    ctx->pc = 0x29116cu;
    // NOP
label_291170:
    // 0x291170: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291174: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x291174u;
    SET_GPR_U32(ctx, 31, 0x29117Cu);
    ctx->pc = 0x291178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291174u;
    // 0x291178: 0x24a5acc8  addiu       $a1, $a1, -0x5338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x291174u, 0x29117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29117Cu;
label_29117c:
    // 0x29117c: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x29117cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_291180:
    // 0x291180: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x291184: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x291184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x291188: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x291188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29118c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29118Cu;
    SET_GPR_U32(ctx, 31, 0x291194u);
    ctx->pc = 0x291190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29118Cu;
    // 0x291190: 0x2e28021  addu        $s0, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29118Cu, 0x291194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291194u;
label_291194:
    // 0x291194: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291194u;
    {
        const bool branch_taken_0x291194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291194u;
        // 0x291198: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291194) {
            ctx->pc = 0x2911B4u;
            goto label_2911b4;
        }
    }
    ctx->pc = 0x29119Cu;
    // 0x29119c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2911a0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2911A0u;
    {
        const bool branch_taken_0x2911a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2911a0) {
            ctx->pc = 0x2911A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2911A0u;
            // 0x2911a4: 0x8c620078  lw          $v0, 0x78($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2911B8u;
            goto label_2911b8;
        }
    }
    ctx->pc = 0x2911A8u;
    // 0x2911a8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2911a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2911ac: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2911acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2911b0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2911b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2911b4:
    // 0x2911b4: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x2911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_2911b8:
    // 0x2911b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2911b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2911bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2911c0: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2911C0u;
    {
        const bool branch_taken_0x2911c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2911C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911C0u;
        // 0x2911c4: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911c0) {
            ctx->pc = 0x291200u;
            goto label_291200;
        }
    }
    ctx->pc = 0x2911C8u;
    // 0x2911c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2911C8u;
    {
        const bool branch_taken_0x2911c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2911c8) {
            ctx->pc = 0x2911E0u;
            goto label_2911e0;
        }
    }
    ctx->pc = 0x2911D0u;
    // 0x2911d0: 0x127e0007  beq         $s3, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2911D0u;
    {
        const bool branch_taken_0x2911d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x2911D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911D0u;
        // 0x2911d4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911d0) {
            ctx->pc = 0x2911F0u;
            goto label_2911f0;
        }
    }
    ctx->pc = 0x2911D8u;
    // 0x2911d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2911D8u;
    {
        const bool branch_taken_0x2911d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2911DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911D8u;
        // 0x2911dc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911d8) {
            ctx->pc = 0x291228u;
            goto label_291228;
        }
    }
    ctx->pc = 0x2911E0u;
label_2911e0:
    // 0x2911e0: 0x1276000d  beq         $s3, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x2911E0u;
    {
        const bool branch_taken_0x2911e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x2911E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911E0u;
        // 0x2911e4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911e0) {
            ctx->pc = 0x291218u;
            goto label_291218;
        }
    }
    ctx->pc = 0x2911E8u;
    // 0x2911e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2911E8u;
    {
        const bool branch_taken_0x2911e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2911ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911E8u;
        // 0x2911ec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911e8) {
            ctx->pc = 0x291228u;
            goto label_291228;
        }
    }
    ctx->pc = 0x2911F0u;
label_2911f0:
    // 0x2911f0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2911f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2911f4: 0x2445acd8  addiu       $a1, $v0, -0x5328
    ctx->pc = 0x2911f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946008));
    // 0x2911f8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2911F8u;
    {
        const bool branch_taken_0x2911f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2911FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911F8u;
        // 0x2911fc: 0x2632005c  addiu       $s2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911f8) {
            ctx->pc = 0x291360u;
            goto label_291360;
        }
    }
    ctx->pc = 0x291200u;
label_291200:
    // 0x291200: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x291200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x291204: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x291208: 0x2445ace8  addiu       $a1, $v0, -0x5318
    ctx->pc = 0x291208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946024));
    // 0x29120c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x29120Cu;
    {
        const bool branch_taken_0x29120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29120Cu;
        // 0x291210: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29120c) {
            ctx->pc = 0x291360u;
            goto label_291360;
        }
    }
    ctx->pc = 0x291214u;
    // 0x291214: 0x0  nop
    ctx->pc = 0x291214u;
    // NOP
label_291218:
    // 0x291218: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29121c: 0x2445acf8  addiu       $a1, $v0, -0x5308
    ctx->pc = 0x29121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946040));
    // 0x291220: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x291220u;
    {
        const bool branch_taken_0x291220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291220u;
        // 0x291224: 0x26320098  addiu       $s2, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291220) {
            ctx->pc = 0x291360u;
            goto label_291360;
        }
    }
    ctx->pc = 0x291228u;
label_291228:
    // 0x291228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29122c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x29122Cu;
    {
        const bool branch_taken_0x29122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29122Cu;
        // 0x291230: 0x24a5ad10  addiu       $a1, $a1, -0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29122c) {
            ctx->pc = 0x291348u;
            goto label_291348;
        }
    }
    ctx->pc = 0x291234u;
    // 0x291234: 0x0  nop
    ctx->pc = 0x291234u;
    // NOP
label_291238:
    // 0x291238: 0x12760007  beq         $s3, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x291238u;
    {
        const bool branch_taken_0x291238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x29123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291238u;
        // 0x29123c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291238) {
            ctx->pc = 0x291258u;
            goto label_291258;
        }
    }
    ctx->pc = 0x291240u;
    // 0x291240: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291244: 0x24a5ad28  addiu       $a1, $a1, -0x52D8
    ctx->pc = 0x291244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946088));
    // 0x291248: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x291248u;
    SET_GPR_U32(ctx, 31, 0x291250u);
    ctx->pc = 0x29124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291248u;
    // 0x29124c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x291248u, 0x291250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291250u;
label_291250:
    // 0x291250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x291250u;
    {
        const bool branch_taken_0x291250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291250u;
        // 0x291254: 0x139080  sll         $s2, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291250) {
            ctx->pc = 0x291268u;
            goto label_291268;
        }
    }
    ctx->pc = 0x291258u;
label_291258:
    // 0x291258: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29125c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29125Cu;
    SET_GPR_U32(ctx, 31, 0x291264u);
    ctx->pc = 0x291260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29125Cu;
    // 0x291260: 0x24a5ad38  addiu       $a1, $a1, -0x52C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29125Cu, 0x291264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291264u;
label_291264:
    // 0x291264: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x291264u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_291268:
    // 0x291268: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29126c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x29126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x291270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x291270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291274: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291274u;
    SET_GPR_U32(ctx, 31, 0x29127Cu);
    ctx->pc = 0x291278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291274u;
    // 0x291278: 0x2e28021  addu        $s0, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291274u, 0x29127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29127Cu;
label_29127c:
    // 0x29127c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29127Cu;
    {
        const bool branch_taken_0x29127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29127Cu;
        // 0x291280: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29127c) {
            ctx->pc = 0x29129Cu;
            goto label_29129c;
        }
    }
    ctx->pc = 0x291284u;
    // 0x291284: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x291284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291288: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x291288u;
    {
        const bool branch_taken_0x291288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291288) {
            ctx->pc = 0x29128Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291288u;
            // 0x29128c: 0x8c620078  lw          $v0, 0x78($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2912A0u;
            goto label_2912a0;
        }
    }
    ctx->pc = 0x291290u;
    // 0x291290: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x291290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x291294: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x291294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x291298: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x291298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29129c:
    // 0x29129c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x29129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_2912a0:
    // 0x2912a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2912a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2912a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2912a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2912a8: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2912A8u;
    {
        const bool branch_taken_0x2912a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2912ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912A8u;
        // 0x2912ac: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912a8) {
            ctx->pc = 0x2912E8u;
            goto label_2912e8;
        }
    }
    ctx->pc = 0x2912B0u;
    // 0x2912b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2912B0u;
    {
        const bool branch_taken_0x2912b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2912b0) {
            ctx->pc = 0x2912C8u;
            goto label_2912c8;
        }
    }
    ctx->pc = 0x2912B8u;
    // 0x2912b8: 0x127e0007  beq         $s3, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2912B8u;
    {
        const bool branch_taken_0x2912b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x2912BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912B8u;
        // 0x2912bc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912b8) {
            ctx->pc = 0x2912D8u;
            goto label_2912d8;
        }
    }
    ctx->pc = 0x2912C0u;
    // 0x2912c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2912C0u;
    {
        const bool branch_taken_0x2912c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912C0u;
        // 0x2912c4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912c0) {
            ctx->pc = 0x291340u;
            goto label_291340;
        }
    }
    ctx->pc = 0x2912C8u;
label_2912c8:
    // 0x2912c8: 0x1276000d  beq         $s3, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x2912C8u;
    {
        const bool branch_taken_0x2912c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x2912CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912C8u;
        // 0x2912cc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912c8) {
            ctx->pc = 0x291300u;
            goto label_291300;
        }
    }
    ctx->pc = 0x2912D0u;
    // 0x2912d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2912D0u;
    {
        const bool branch_taken_0x2912d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912D0u;
        // 0x2912d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912d0) {
            ctx->pc = 0x291344u;
            goto label_291344;
        }
    }
    ctx->pc = 0x2912D8u;
label_2912d8:
    // 0x2912d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2912d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2912dc: 0x2445ad50  addiu       $a1, $v0, -0x52B0
    ctx->pc = 0x2912dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x2912e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2912E0u;
    {
        const bool branch_taken_0x2912e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912E0u;
        // 0x2912e4: 0x2632005c  addiu       $s2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912e0) {
            ctx->pc = 0x291360u;
            goto label_291360;
        }
    }
    ctx->pc = 0x2912E8u;
label_2912e8:
    // 0x2912e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2912e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2912ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2912ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2912f0: 0x24a5ad68  addiu       $a1, $a1, -0x5298
    ctx->pc = 0x2912f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946152));
    // 0x2912f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2912F4u;
    {
        const bool branch_taken_0x2912f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912F4u;
        // 0x2912f8: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912f4) {
            ctx->pc = 0x291310u;
            goto label_291310;
        }
    }
    ctx->pc = 0x2912FCu;
    // 0x2912fc: 0x0  nop
    ctx->pc = 0x2912fcu;
    // NOP
label_291300:
    // 0x291300: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291304: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x291308: 0x24a5ad80  addiu       $a1, $a1, -0x5280
    ctx->pc = 0x291308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946176));
    // 0x29130c: 0x26300098  addiu       $s0, $s1, 0x98
    ctx->pc = 0x29130cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_291310:
    // 0x291310: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291310u;
    SET_GPR_U32(ctx, 31, 0x291318u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291310u, 0x291318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291318u;
label_291318:
    // 0x291318: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291318u;
    {
        const bool branch_taken_0x291318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291318u;
        // 0x29131c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291318) {
            ctx->pc = 0x291338u;
            goto label_291338;
        }
    }
    ctx->pc = 0x291320u;
    // 0x291320: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x291320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291324: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x291324u;
    {
        const bool branch_taken_0x291324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291324) {
            ctx->pc = 0x291328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291324u;
            // 0x291328: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29138Cu;
            goto label_29138c;
        }
    }
    ctx->pc = 0x29132Cu;
    // 0x29132c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x291330: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x291330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x291334: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x291334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_291338:
    // 0x291338: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x291338u;
    {
        const bool branch_taken_0x291338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291338u;
        // 0x29133c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291338) {
            ctx->pc = 0x29138Cu;
            goto label_29138c;
        }
    }
    ctx->pc = 0x291340u;
label_291340:
    // 0x291340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_291344:
    // 0x291344: 0x24a5ad98  addiu       $a1, $a1, -0x5268
    ctx->pc = 0x291344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946200));
label_291348:
    // 0x291348: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x291348u;
    SET_GPR_U32(ctx, 31, 0x291350u);
    ctx->pc = 0x29134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291348u;
    // 0x29134c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x291348u, 0x291350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291350u;
label_291350:
    // 0x291350: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x291350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x291354: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x291354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x291358: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x291358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29135c: 0x2a39021  addu        $s2, $s5, $v1
    ctx->pc = 0x29135cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_291360:
    // 0x291360: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291360u;
    SET_GPR_U32(ctx, 31, 0x291368u);
    ctx->pc = 0x291364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291360u;
    // 0x291364: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291360u, 0x291368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291368u;
label_291368:
    // 0x291368: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291368u;
    {
        const bool branch_taken_0x291368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291368) {
            ctx->pc = 0x29136Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291368u;
            // 0x29136c: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29138Cu;
            goto label_29138c;
        }
    }
    ctx->pc = 0x291370u;
    // 0x291370: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x291370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291374: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x291374u;
    {
        const bool branch_taken_0x291374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x291374) {
            ctx->pc = 0x291378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291374u;
            // 0x291378: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29138Cu;
            goto label_29138c;
        }
    }
    ctx->pc = 0x29137Cu;
    // 0x29137c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x291380: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x291380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x291384: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x291384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x291388: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x291388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_29138c:
    // 0x29138c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29138cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_291390:
    // 0x291390: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x291390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x291394: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x291394u;
    {
        const bool branch_taken_0x291394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291394u;
        // 0x291398: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291394) {
            ctx->pc = 0x291138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291138;
        }
    }
    ctx->pc = 0x29139Cu;
    // 0x29139c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2913a0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2913A0u;
    {
        const bool branch_taken_0x2913a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913A0u;
        // 0x2913a4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913a0) {
            ctx->pc = 0x291468u;
            goto label_291468;
        }
    }
    ctx->pc = 0x2913A8u;
    // 0x2913a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2913a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2913ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2913acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2913b0: 0x24a5adb0  addiu       $a1, $a1, -0x5250
    ctx->pc = 0x2913b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946224));
    // 0x2913b4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2913B4u;
    SET_GPR_U32(ctx, 31, 0x2913BCu);
    ctx->pc = 0x2913B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2913B4u;
    // 0x2913b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2913B4u, 0x2913BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2913BCu;
label_2913bc:
    // 0x2913bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2913BCu;
    {
        const bool branch_taken_0x2913bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2913bc) {
            ctx->pc = 0x2913C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2913BCu;
            // 0x2913c0: 0xae30009c  sw          $s0, 0x9C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2913E0u;
            goto label_2913e0;
        }
    }
    ctx->pc = 0x2913C4u;
    // 0x2913c4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2913c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2913c8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2913C8u;
    {
        const bool branch_taken_0x2913c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2913CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913C8u;
        // 0x2913cc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2913c8) {
            ctx->pc = 0x2913DCu;
            goto label_2913dc;
        }
    }
    ctx->pc = 0x2913D0u;
    // 0x2913d0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2913d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2913d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2913d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2913d8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2913d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2913dc:
    // 0x2913dc: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x2913dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_2913e0:
    // 0x2913e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2913e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2913e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2913e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2913e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2913e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2913ec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2913ECu;
    SET_GPR_U32(ctx, 31, 0x2913F4u);
    ctx->pc = 0x2913F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2913ECu;
    // 0x2913f0: 0x24a5adc8  addiu       $a1, $a1, -0x5238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2913ECu, 0x2913F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2913F4u;
label_2913f4:
    // 0x2913f4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2913F4u;
    {
        const bool branch_taken_0x2913f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2913f4) {
            ctx->pc = 0x2913F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2913F4u;
            // 0x2913f8: 0xae3000a0  sw          $s0, 0xA0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291418u;
            goto label_291418;
        }
    }
    ctx->pc = 0x2913FCu;
    // 0x2913fc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2913fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291400: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291400u;
    {
        const bool branch_taken_0x291400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291400u;
        // 0x291404: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291400) {
            ctx->pc = 0x291414u;
            goto label_291414;
        }
    }
    ctx->pc = 0x291408u;
    // 0x291408: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x291408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29140c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291410: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x291410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_291414:
    // 0x291414: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x291414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
label_291418:
    // 0x291418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x291418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29141c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x29141cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291420: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x291424: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291424u;
    SET_GPR_U32(ctx, 31, 0x29142Cu);
    ctx->pc = 0x291428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291424u;
    // 0x291428: 0x24a5ade0  addiu       $a1, $a1, -0x5220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291424u, 0x29142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29142Cu;
label_29142c:
    // 0x29142c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29142Cu;
    {
        const bool branch_taken_0x29142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29142c) {
            ctx->pc = 0x291430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29142Cu;
            // 0x291430: 0xae3000a4  sw          $s0, 0xA4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291450u;
            goto label_291450;
        }
    }
    ctx->pc = 0x291434u;
    // 0x291434: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x291434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291438: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291438u;
    {
        const bool branch_taken_0x291438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291438u;
        // 0x29143c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291438) {
            ctx->pc = 0x29144Cu;
            goto label_29144c;
        }
    }
    ctx->pc = 0x291440u;
    // 0x291440: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x291440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x291444: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291448: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x291448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_29144c:
    // 0x29144c: 0xae3000a4  sw          $s0, 0xA4($s1)
    ctx->pc = 0x29144cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 16));
label_291450:
    // 0x291450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x291450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291454: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291458: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29145c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x29145Cu;
    {
        const bool branch_taken_0x29145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29145Cu;
        // 0x291460: 0x24a5adf8  addiu       $a1, $a1, -0x5208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29145c) {
            ctx->pc = 0x29151Cu;
            goto label_29151c;
        }
    }
    ctx->pc = 0x291464u;
    // 0x291464: 0x0  nop
    ctx->pc = 0x291464u;
    // NOP
label_291468:
    // 0x291468: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29146c: 0x24a5ae10  addiu       $a1, $a1, -0x51F0
    ctx->pc = 0x29146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946320));
    // 0x291470: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x291470u;
    SET_GPR_U32(ctx, 31, 0x291478u);
    ctx->pc = 0x291474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291470u;
    // 0x291474: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x291470u, 0x291478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291478u;
label_291478:
    // 0x291478: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291478u;
    {
        const bool branch_taken_0x291478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291478) {
            ctx->pc = 0x29147Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291478u;
            // 0x29147c: 0xae30009c  sw          $s0, 0x9C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29149Cu;
            goto label_29149c;
        }
    }
    ctx->pc = 0x291480u;
    // 0x291480: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x291480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291484: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291484u;
    {
        const bool branch_taken_0x291484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291484u;
        // 0x291488: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291484) {
            ctx->pc = 0x291498u;
            goto label_291498;
        }
    }
    ctx->pc = 0x29148Cu;
    // 0x29148c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x291490: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291494: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x291494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_291498:
    // 0x291498: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x291498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_29149c:
    // 0x29149c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29149cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2914a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2914a4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2914a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2914a8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2914A8u;
    SET_GPR_U32(ctx, 31, 0x2914B0u);
    ctx->pc = 0x2914ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914A8u;
    // 0x2914ac: 0x24a5ae28  addiu       $a1, $a1, -0x51D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2914A8u, 0x2914B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914B0u;
label_2914b0:
    // 0x2914b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2914B0u;
    {
        const bool branch_taken_0x2914b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2914b0) {
            ctx->pc = 0x2914B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2914B0u;
            // 0x2914b4: 0xae3000a0  sw          $s0, 0xA0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2914D4u;
            goto label_2914d4;
        }
    }
    ctx->pc = 0x2914B8u;
    // 0x2914b8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2914b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2914bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2914BCu;
    {
        const bool branch_taken_0x2914bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914BCu;
        // 0x2914c0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914bc) {
            ctx->pc = 0x2914D0u;
            goto label_2914d0;
        }
    }
    ctx->pc = 0x2914C4u;
    // 0x2914c4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2914c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2914c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2914c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2914cc: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2914ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2914d0:
    // 0x2914d0: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x2914d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
label_2914d4:
    // 0x2914d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2914d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2914d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2914d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2914dc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2914dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2914e0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2914E0u;
    SET_GPR_U32(ctx, 31, 0x2914E8u);
    ctx->pc = 0x2914E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2914E0u;
    // 0x2914e4: 0x24a5ae40  addiu       $a1, $a1, -0x51C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2914E0u, 0x2914E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2914E8u;
label_2914e8:
    // 0x2914e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2914E8u;
    {
        const bool branch_taken_0x2914e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2914e8) {
            ctx->pc = 0x2914ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2914E8u;
            // 0x2914ec: 0xae3000a4  sw          $s0, 0xA4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29150Cu;
            goto label_29150c;
        }
    }
    ctx->pc = 0x2914F0u;
    // 0x2914f0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2914f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2914f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2914F4u;
    {
        const bool branch_taken_0x2914f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914F4u;
        // 0x2914f8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914f4) {
            ctx->pc = 0x291508u;
            goto label_291508;
        }
    }
    ctx->pc = 0x2914FCu;
    // 0x2914fc: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2914fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x291500: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291504: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x291504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_291508:
    // 0x291508: 0xae3000a4  sw          $s0, 0xA4($s1)
    ctx->pc = 0x291508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 16));
label_29150c:
    // 0x29150c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29150cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291510: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x291514: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x291514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x291518: 0x24a5ae58  addiu       $a1, $a1, -0x51A8
    ctx->pc = 0x291518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946392));
label_29151c:
    // 0x29151c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29151Cu;
    SET_GPR_U32(ctx, 31, 0x291524u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29151Cu, 0x291524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291524u;
label_291524:
    // 0x291524: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x291524u;
    {
        const bool branch_taken_0x291524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291524) {
            ctx->pc = 0x291528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291524u;
            // 0x291528: 0xae3000a8  sw          $s0, 0xA8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291548u;
            goto label_291548;
        }
    }
    ctx->pc = 0x29152Cu;
    // 0x29152c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x29152cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x291530: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291530u;
    {
        const bool branch_taken_0x291530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291530u;
        // 0x291534: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291530) {
            ctx->pc = 0x291544u;
            goto label_291544;
        }
    }
    ctx->pc = 0x291538u;
    // 0x291538: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x291538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29153c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x291540: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x291540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_291544:
    // 0x291544: 0xae3000a8  sw          $s0, 0xA8($s1)
    ctx->pc = 0x291544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 16));
label_291548:
    // 0x291548: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x291548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29154c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x29154cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x291550: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x291550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291554: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x291554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x291558: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x291558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29155c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x29155cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x291560: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x291560u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x291564: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x291564u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x291568: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x291568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29156c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x29156cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x291570: 0x3e00008  jr          $ra
    ctx->pc = 0x291570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291570u;
        // 0x291574: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291578u;
}
