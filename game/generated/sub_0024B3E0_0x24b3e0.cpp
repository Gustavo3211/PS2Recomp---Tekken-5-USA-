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

// Function: sub_0024B3E0
// Address: 0x24b3e0 - 0x24b518
void sub_0024B3E0_0x24b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B3E0_0x24b3e0");
#endif

    switch (ctx->pc) {
        case 0x24b428u: goto label_24b428;
        case 0x24b448u: goto label_24b448;
        case 0x24b488u: goto label_24b488;
        case 0x24b4acu: goto label_24b4ac;
        case 0x24b4ccu: goto label_24b4cc;
        case 0x24b4f4u: goto label_24b4f4;
        default: break;
    }

    ctx->pc = 0x24b3e0u;

    // 0x24b3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24b3e4: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x24b3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x24b3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b3ec: 0x2cd00001  sltiu       $s0, $a2, 0x1
    ctx->pc = 0x24b3ecu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x24b3f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b3f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24b3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24b3fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x24b3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b400: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24b404: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24b404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b408: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24b40c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x24b410: 0x922201fc  lbu         $v0, 0x1FC($s1)
    ctx->pc = 0x24b410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x24b414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B414u;
    {
        const bool branch_taken_0x24b414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B414u;
        // 0x24b418: 0x8e320044  lw          $s2, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b414) {
            ctx->pc = 0x24B428u;
            goto label_24b428;
        }
    }
    ctx->pc = 0x24B41Cu;
    // 0x24b41c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b420: 0xc092c2c  jal         func_24B0B0
    ctx->pc = 0x24B420u;
    SET_GPR_U32(ctx, 31, 0x24B428u);
    ctx->pc = 0x24B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B420u;
    // 0x24b424: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B0B0u, 0x24B420u, 0x24B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B428u;
label_24b428:
    // 0x24b428: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x24b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x24b42c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x24b42cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b430: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b434: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24b434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b438: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24b43c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24b43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b440: 0xc092c58  jal         func_24B160
    ctx->pc = 0x24B440u;
    SET_GPR_U32(ctx, 31, 0x24B448u);
    ctx->pc = 0x24B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B440u;
    // 0x24b444: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B160u, 0x24B440u, 0x24B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B448u;
label_24b448:
    // 0x24b448: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x24b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x24b44c: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x24b44cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x24b450: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x24B450u;
    {
        const bool branch_taken_0x24b450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b450) {
            ctx->pc = 0x24B454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B450u;
            // 0x24b454: 0x922201ef  lbu         $v0, 0x1EF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4B0u;
            goto label_24b4b0;
        }
    }
    ctx->pc = 0x24B458u;
    // 0x24b458: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x24b458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x24b45c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x24B45Cu;
    {
        const bool branch_taken_0x24b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b45c) {
            ctx->pc = 0x24B460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B45Cu;
            // 0x24b460: 0x922201ef  lbu         $v0, 0x1EF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4B0u;
            goto label_24b4b0;
        }
    }
    ctx->pc = 0x24B464u;
    // 0x24b464: 0x922201f7  lbu         $v0, 0x1F7($s1)
    ctx->pc = 0x24b464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
    // 0x24b468: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x24B468u;
    {
        const bool branch_taken_0x24b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b468) {
            ctx->pc = 0x24B46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B468u;
            // 0x24b46c: 0x922201ef  lbu         $v0, 0x1EF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4B0u;
            goto label_24b4b0;
        }
    }
    ctx->pc = 0x24B470u;
    // 0x24b470: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x24b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24b474: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24b478: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24B478u;
    {
        const bool branch_taken_0x24b478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b478) {
            ctx->pc = 0x24B47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B478u;
            // 0x24b47c: 0x922201ef  lbu         $v0, 0x1EF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4B0u;
            goto label_24b4b0;
        }
    }
    ctx->pc = 0x24B480u;
    // 0x24b480: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24B480u;
    SET_GPR_U32(ctx, 31, 0x24B488u);
    ctx->pc = 0x24B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B480u;
    // 0x24b484: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24B480u, 0x24B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B488u;
label_24b488:
    // 0x24b488: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x24b488u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24b48c: 0x1810  mfhi        $v1
    ctx->pc = 0x24b48cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24b490: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B490u;
    {
        const bool branch_taken_0x24b490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B490u;
        // 0x24b494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b490) {
            ctx->pc = 0x24B4ACu;
            goto label_24b4ac;
        }
    }
    ctx->pc = 0x24B498u;
    // 0x24b498: 0x8626014e  lh          $a2, 0x14E($s1)
    ctx->pc = 0x24b498u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    // 0x24b49c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4a0: 0x28c60016  slti        $a2, $a2, 0x16
    ctx->pc = 0x24b4a0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x24b4a4: 0xc092c2c  jal         func_24B0B0
    ctx->pc = 0x24B4A4u;
    SET_GPR_U32(ctx, 31, 0x24B4ACu);
    ctx->pc = 0x24B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4A4u;
    // 0x24b4a8: 0x38c60001  xori        $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B0B0u, 0x24B4A4u, 0x24B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4ACu;
label_24b4ac:
    // 0x24b4ac: 0x922201ef  lbu         $v0, 0x1EF($s1)
    ctx->pc = 0x24b4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 495)));
label_24b4b0:
    // 0x24b4b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24B4B0u;
    {
        const bool branch_taken_0x24b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4B0u;
        // 0x24b4b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4b0) {
            ctx->pc = 0x24B4F8u;
            goto label_24b4f8;
        }
    }
    ctx->pc = 0x24B4B8u;
    // 0x24b4b8: 0x8e22069c  lw          $v0, 0x69C($s1)
    ctx->pc = 0x24b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x24b4bc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24B4BCu;
    {
        const bool branch_taken_0x24b4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b4bc) {
            ctx->pc = 0x24B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B4BCu;
            // 0x24b4c0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B4FCu;
            goto label_24b4fc;
        }
    }
    ctx->pc = 0x24B4C4u;
    // 0x24b4c4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24B4C4u;
    SET_GPR_U32(ctx, 31, 0x24B4CCu);
    ctx->pc = 0x24B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4C4u;
    // 0x24b4c8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24B4C4u, 0x24B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4CCu;
label_24b4cc:
    // 0x24b4cc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x24b4ccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24b4d0: 0x1810  mfhi        $v1
    ctx->pc = 0x24b4d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24b4d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B4D4u;
    {
        const bool branch_taken_0x24b4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4D4u;
        // 0x24b4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4d4) {
            ctx->pc = 0x24B4F4u;
            goto label_24b4f4;
        }
    }
    ctx->pc = 0x24B4DCu;
    // 0x24b4dc: 0x8682014e  lh          $v0, 0x14E($s4)
    ctx->pc = 0x24b4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 334)));
    // 0x24b4e0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x24b4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b4e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24b4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4e8: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x24b4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x24b4ec: 0xc092c2c  jal         func_24B0B0
    ctx->pc = 0x24B4ECu;
    SET_GPR_U32(ctx, 31, 0x24B4F4u);
    ctx->pc = 0x24B4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4ECu;
    // 0x24b4f0: 0x202300b  movn        $a2, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B0B0u, 0x24B4ECu, 0x24B4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4F4u;
label_24b4f4:
    // 0x24b4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b4f8:
    // 0x24b4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24b4fc:
    // 0x24b4fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24b4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24b500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b504: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24b504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b508: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24b508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24b50c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B50Cu;
        // 0x24b510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B514u;
    // 0x24b514: 0x0  nop
    ctx->pc = 0x24b514u;
    // NOP
    ctx->pc = 0x24b518u;
}
