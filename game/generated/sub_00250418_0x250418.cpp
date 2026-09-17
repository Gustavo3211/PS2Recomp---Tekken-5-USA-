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

// Function: sub_00250418
// Address: 0x250418 - 0x2505c0
void sub_00250418_0x250418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250418_0x250418");
#endif

    switch (ctx->pc) {
        case 0x25045cu: goto label_25045c;
        case 0x250468u: goto label_250468;
        case 0x2504a0u: goto label_2504a0;
        case 0x2504dcu: goto label_2504dc;
        case 0x2504f0u: goto label_2504f0;
        case 0x25051cu: goto label_25051c;
        default: break;
    }

    ctx->pc = 0x250418u;

    // 0x250418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x250418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25041c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x250420: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x250420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250424: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x250424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x250428: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x250428u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25042c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x250430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250438: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x250438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x25043c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25043cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250440: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x250440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x250444: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x250444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x250448: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x250448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25044c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x250450: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x250450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x250454: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x250454u;
    SET_GPR_U32(ctx, 31, 0x25045Cu);
    ctx->pc = 0x250458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250454u;
    // 0x250458: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x250454u, 0x25045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25045Cu;
label_25045c:
    // 0x25045c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250460: 0xc0940d6  jal         func_250358
    ctx->pc = 0x250460u;
    SET_GPR_U32(ctx, 31, 0x250468u);
    ctx->pc = 0x250464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250460u;
    // 0x250464: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250358u, 0x250460u, 0x250468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250468u;
label_250468:
    // 0x250468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x250468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25046c: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x25046Cu;
    {
        const bool branch_taken_0x25046c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x250470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25046Cu;
        // 0x250470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25046c) {
            ctx->pc = 0x250590u;
            goto label_250590;
        }
    }
    ctx->pc = 0x250474u;
    // 0x250474: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x250474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x250478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25047c: 0x18e00012  blez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x25047Cu;
    {
        const bool branch_taken_0x25047c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x250480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25047Cu;
        // 0x250480: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25047c) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x250484u;
    // 0x250484: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x250484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x250488: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x250488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25048c: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x25048Cu;
    {
        const bool branch_taken_0x25048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x25048c) {
            ctx->pc = 0x250490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25048Cu;
            // 0x250490: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504A0u;
            goto label_2504a0;
        }
    }
    ctx->pc = 0x250494u;
    // 0x250494: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250494u;
    {
        const bool branch_taken_0x250494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250494u;
        // 0x250498: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250494) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x25049Cu;
    // 0x25049c: 0x0  nop
    ctx->pc = 0x25049cu;
    // NOP
label_2504a0:
    // 0x2504a0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2504a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2504a4: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2504a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2504a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2504A8u;
    {
        const bool branch_taken_0x2504a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504A8u;
        // 0x2504ac: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504a8) {
            ctx->pc = 0x2504C8u;
            goto label_2504c8;
        }
    }
    ctx->pc = 0x2504B0u;
    // 0x2504b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2504b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2504b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2504b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2504b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2504b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2504bc: 0x5473fff8  bnel        $v1, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2504BCu;
    {
        const bool branch_taken_0x2504bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2504bc) {
            ctx->pc = 0x2504C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504BCu;
            // 0x2504c0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2504a0;
        }
    }
    ctx->pc = 0x2504C4u;
    // 0x2504c4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2504c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2504c8:
    // 0x2504c8: 0x15000031  bnez        $t0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2504C8u;
    {
        const bool branch_taken_0x2504c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2504CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504C8u;
        // 0x2504cc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504c8) {
            ctx->pc = 0x250590u;
            goto label_250590;
        }
    }
    ctx->pc = 0x2504D0u;
    // 0x2504d0: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x2504d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2504d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2504D4u;
    {
        const bool branch_taken_0x2504d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2504d4) {
            ctx->pc = 0x2504D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504D4u;
            // 0x2504d8: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2504E8u;
            goto label_2504e8;
        }
    }
    ctx->pc = 0x2504DCu;
label_2504dc:
    // 0x2504dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2504DCu;
    {
        const bool branch_taken_0x2504dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504DCu;
        // 0x2504e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504dc) {
            ctx->pc = 0x250590u;
            goto label_250590;
        }
    }
    ctx->pc = 0x2504E4u;
    // 0x2504e4: 0x0  nop
    ctx->pc = 0x2504e4u;
    // NOP
label_2504e8:
    // 0x2504e8: 0x1ac00013  blez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2504E8u;
    {
        const bool branch_taken_0x2504e8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2504ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2504E8u;
        // 0x2504ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504e8) {
            ctx->pc = 0x250538u;
            goto label_250538;
        }
    }
    ctx->pc = 0x2504F0u;
label_2504f0:
    // 0x2504f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2504f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2504f4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2504f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2504f8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2504F8u;
    {
        const bool branch_taken_0x2504f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2504f8) {
            ctx->pc = 0x2504FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2504F8u;
            // 0x2504fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250590u;
            goto label_250590;
        }
    }
    ctx->pc = 0x250500u;
    // 0x250500: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x250500u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x250504: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x250504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x250508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x250508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25050c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250510: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x250510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250514: 0xc097550  jal         func_25D540
    ctx->pc = 0x250514u;
    SET_GPR_U32(ctx, 31, 0x25051Cu);
    ctx->pc = 0x250518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250514u;
    // 0x250518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D540u, 0x250514u, 0x25051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25051Cu;
label_25051c:
    // 0x25051c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25051cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250520: 0x680ffee  bltz        $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x250520u;
    {
        const bool branch_taken_0x250520 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x250524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250520u;
        // 0x250524: 0x236102a  slt         $v0, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250520) {
            ctx->pc = 0x2504DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2504dc;
        }
    }
    ctx->pc = 0x250528u;
    // 0x250528: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x250528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x25052c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x25052Cu;
    {
        const bool branch_taken_0x25052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25052Cu;
        // 0x250530: 0x2b4a821  addu        $s5, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25052c) {
            ctx->pc = 0x2504F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2504f0;
        }
    }
    ctx->pc = 0x250534u;
    // 0x250534: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x250534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_250538:
    // 0x250538: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x250538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x25053c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x25053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x250540: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x250544: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x250544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x250548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25054c: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x25054cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x250550: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x250550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250554: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x250554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x250558: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x250558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25055c: 0xac760010  sw          $s6, 0x10($v1)
    ctx->pc = 0x25055cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 22));
    // 0x250560: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x250560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x250564: 0xac740014  sw          $s4, 0x14($v1)
    ctx->pc = 0x250564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 20));
    // 0x250568: 0xac75000c  sw          $s5, 0xC($v1)
    ctx->pc = 0x250568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 21));
    // 0x25056c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250570: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x250570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x250574: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x250574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x250578: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x250578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25057c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x25057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x250580: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x250580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x250584: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x250584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x250588: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x250588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x25058c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x25058cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_250590:
    // 0x250590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250598: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x250598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25059c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25059cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2505a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2505a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2505a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2505a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2505a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2505a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2505ac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2505acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2505b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2505b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2505b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2505B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2505B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505B4u;
        // 0x2505b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2505BCu;
    // 0x2505bc: 0x0  nop
    ctx->pc = 0x2505bcu;
    // NOP
    ctx->pc = 0x2505c0u;
}
