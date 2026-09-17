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

// Function: sub_0028D4C0
// Address: 0x28d4c0 - 0x28d708
void sub_0028D4C0_0x28d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D4C0_0x28d4c0");
#endif

    switch (ctx->pc) {
        case 0x28d518u: goto label_28d518;
        case 0x28d538u: goto label_28d538;
        case 0x28d548u: goto label_28d548;
        case 0x28d554u: goto label_28d554;
        case 0x28d564u: goto label_28d564;
        case 0x28d580u: goto label_28d580;
        case 0x28d5c0u: goto label_28d5c0;
        case 0x28d5dcu: goto label_28d5dc;
        case 0x28d638u: goto label_28d638;
        case 0x28d654u: goto label_28d654;
        default: break;
    }

    ctx->pc = 0x28d4c0u;

    // 0x28d4c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28d4c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28d4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28d4c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28d4c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28d4d0: 0x2674000c  addiu       $s4, $s3, 0xC
    ctx->pc = 0x28d4d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x28d4d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28d4d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x28d4e0: 0x26760008  addiu       $s6, $s3, 0x8
    ctx->pc = 0x28d4e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28d4e4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x28d4e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28d4e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d4ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28d4f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28d4f4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x28d4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x28d4f8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x28d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x28d4fc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x28d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x28d500: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x28d504: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28d504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28d508: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x28d508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x28d50c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x28d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x28d510: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x28d510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x28d514: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x28d514u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_28d518:
    // 0x28d518: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28d518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28d51c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x28d51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28d520: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x28d520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28d524: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x28d524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x28d528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28d528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d52c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d530: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x28D530u;
    SET_GPR_U32(ctx, 31, 0x28D538u);
    ctx->pc = 0x28D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D530u;
    // 0x28d534: 0x2718821  addu        $s1, $s3, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x28D530u, 0x28D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D538u;
label_28d538:
    // 0x28d538: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d53c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x28d53cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x28d540: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28D540u;
    SET_GPR_U32(ctx, 31, 0x28D548u);
    ctx->pc = 0x28D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D540u;
    // 0x28d544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28D540u, 0x28D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D548u;
label_28d548:
    // 0x28d548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d54c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x28D54Cu;
    SET_GPR_U32(ctx, 31, 0x28D554u);
    ctx->pc = 0x28D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D54Cu;
    // 0x28d550: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x28D54Cu, 0x28D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D554u;
label_28d554:
    // 0x28d554: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28d558: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x28d558u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x28d55c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28D55Cu;
    SET_GPR_U32(ctx, 31, 0x28D564u);
    ctx->pc = 0x28D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D55Cu;
    // 0x28d560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28D55Cu, 0x28D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D564u;
label_28d564:
    // 0x28d564: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x28d564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28d568: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28D568u;
    {
        const bool branch_taken_0x28d568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D568u;
        // 0x28d56c: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d568) {
            ctx->pc = 0x28D518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d518;
        }
    }
    ctx->pc = 0x28D570u;
    // 0x28d570: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28d570u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d574: 0x241eefff  addiu       $fp, $zero, -0x1001
    ctx->pc = 0x28d574u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d578: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d57c: 0x158880  sll         $s1, $s5, 2
    ctx->pc = 0x28d57cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_28d580:
    // 0x28d580: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x28d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x28d584: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x28d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28d588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d58c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x28d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d590: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x28d590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x28d594: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28D594u;
    {
        const bool branch_taken_0x28d594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D594u;
        // 0x28d598: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d594) {
            ctx->pc = 0x28D5F0u;
            goto label_28d5f0;
        }
    }
    ctx->pc = 0x28D59Cu;
    // 0x28d59c: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x28d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x28d5a0: 0x8c720030  lw          $s2, 0x30($v1)
    ctx->pc = 0x28d5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x28d5a4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x28d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x28d5a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28d5ac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28D5ACu;
    {
        const bool branch_taken_0x28d5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5ac) {
            ctx->pc = 0x28D5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D5ACu;
            // 0x28d5b0: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D5E8u;
            goto label_28d5e8;
        }
    }
    ctx->pc = 0x28D5B4u;
    // 0x28d5b4: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x28d5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x28d5b8: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28D5B8u;
    SET_GPR_U32(ctx, 31, 0x28D5C0u);
    ctx->pc = 0x28D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5B8u;
    // 0x28d5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28D5B8u, 0x28D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5C0u;
label_28d5c0:
    // 0x28d5c0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x28D5C0u;
    {
        const bool branch_taken_0x28d5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5c0) {
            ctx->pc = 0x28D5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D5C0u;
            // 0x28d5c4: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D5F4u;
            goto label_28d5f4;
        }
    }
    ctx->pc = 0x28D5C8u;
    // 0x28d5c8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x28d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x28d5cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d5d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d5d4: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28D5D4u;
    SET_GPR_U32(ctx, 31, 0x28D5DCu);
    ctx->pc = 0x28D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5D4u;
    // 0x28d5d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28D5D4u, 0x28D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5DCu;
label_28d5dc:
    // 0x28d5dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28D5DCu;
    {
        const bool branch_taken_0x28d5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5DCu;
        // 0x28d5e0: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5dc) {
            ctx->pc = 0x28D5F4u;
            goto label_28d5f4;
        }
    }
    ctx->pc = 0x28D5E4u;
    // 0x28d5e4: 0x0  nop
    ctx->pc = 0x28d5e4u;
    // NOP
label_28d5e8:
    // 0x28d5e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28D5E8u;
    {
        const bool branch_taken_0x28d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5E8u;
        // 0x28d5ec: 0xac570000  sw          $s7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5e8) {
            ctx->pc = 0x28D5F8u;
            goto label_28d5f8;
        }
    }
    ctx->pc = 0x28D5F0u;
label_28d5f0:
    // 0x28d5f0: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x28d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_28d5f4:
    // 0x28d5f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28d5f8:
    // 0x28d5f8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x28d5fc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x28d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x28d600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d604: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x28d604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d608: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x28d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x28d60c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28D60Cu;
    {
        const bool branch_taken_0x28d60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D60Cu;
        // 0x28d610: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d60c) {
            ctx->pc = 0x28D668u;
            goto label_28d668;
        }
    }
    ctx->pc = 0x28D614u;
    // 0x28d614: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x28d618: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x28d61c: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x28d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x28d620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28d624: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28D624u;
    {
        const bool branch_taken_0x28d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d624) {
            ctx->pc = 0x28D628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D624u;
            // 0x28d628: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D660u;
            goto label_28d660;
        }
    }
    ctx->pc = 0x28D62Cu;
    // 0x28d62c: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x28d62cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x28d630: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28D630u;
    SET_GPR_U32(ctx, 31, 0x28D638u);
    ctx->pc = 0x28D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D630u;
    // 0x28d634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28D630u, 0x28D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D638u;
label_28d638:
    // 0x28d638: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x28D638u;
    {
        const bool branch_taken_0x28d638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d638) {
            ctx->pc = 0x28D63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D638u;
            // 0x28d63c: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D66Cu;
            goto label_28d66c;
        }
    }
    ctx->pc = 0x28D640u;
    // 0x28d640: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x28d640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x28d644: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d648: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d64c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28D64Cu;
    SET_GPR_U32(ctx, 31, 0x28D654u);
    ctx->pc = 0x28D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D64Cu;
    // 0x28d650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28D64Cu, 0x28D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D654u;
label_28d654:
    // 0x28d654: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28D654u;
    {
        const bool branch_taken_0x28d654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D654u;
        // 0x28d658: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d654) {
            ctx->pc = 0x28D66Cu;
            goto label_28d66c;
        }
    }
    ctx->pc = 0x28D65Cu;
    // 0x28d65c: 0x0  nop
    ctx->pc = 0x28d65cu;
    // NOP
label_28d660:
    // 0x28d660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28D660u;
    {
        const bool branch_taken_0x28d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D660u;
        // 0x28d664: 0xac570000  sw          $s7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d660) {
            ctx->pc = 0x28D670u;
            goto label_28d670;
        }
    }
    ctx->pc = 0x28D668u;
label_28d668:
    // 0x28d668: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x28d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_28d66c:
    // 0x28d66c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28d670:
    // 0x28d670: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28d670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28d674: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x28d674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28d678: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x28D678u;
    {
        const bool branch_taken_0x28d678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D678u;
        // 0x28d67c: 0x158880  sll         $s1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d678) {
            ctx->pc = 0x28D580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d580;
        }
    }
    ctx->pc = 0x28D680u;
    // 0x28d680: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x28d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x28d684: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d688: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28d688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d68c: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x28d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d690: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d694: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x28d694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28d698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d69c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d6a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28d6a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28d6a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28d6a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28d6a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d6ac: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x28d6b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28d6b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d6b4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28d6b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28d6b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28d6bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28d6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28d6c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28d6c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d6c4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28d6c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x28d6c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28d6cc: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x28d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x28d6d0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x28d6d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d6d4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d6d8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x28d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28d6dc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x28d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x28d6e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x28d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d6e4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28d6e8: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x28d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x28d6ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28d6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28d6f0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28d6f4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28d6f8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28d6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6FCu;
        // 0x28d700: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D704u;
    // 0x28d704: 0x0  nop
    ctx->pc = 0x28d704u;
    // NOP
    ctx->pc = 0x28d708u;
}
