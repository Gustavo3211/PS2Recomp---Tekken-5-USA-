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

// Function: sub_002A2270
// Address: 0x2a2270 - 0x2a23d8
void sub_002A2270_0x2a2270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2270_0x2a2270");
#endif

    switch (ctx->pc) {
        case 0x2a22c8u: goto label_2a22c8;
        case 0x2a232cu: goto label_2a232c;
        case 0x2a2350u: goto label_2a2350;
        case 0x2a2378u: goto label_2a2378;
        case 0x2a23a8u: goto label_2a23a8;
        default: break;
    }

    ctx->pc = 0x2a2270u;

    // 0x2a2270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a2274: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a2274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a2278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a227c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a227cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a2280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a2284: 0x2452cc40  addiu       $s2, $v0, -0x33C0
    ctx->pc = 0x2a2284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954048));
    // 0x2a2288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a228c: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2a228cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x2a2290: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a2290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a2294: 0x3c140015  lui         $s4, 0x15
    ctx->pc = 0x2a2294u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)21 << 16));
    // 0x2a2298: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a2298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a229c: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x2a229cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a22a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2a22a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2a22a4: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x2a22a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a22a8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2a22a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2a22ac: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2a22acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a22b0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2a22b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2a22b4: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x2a22b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a22b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a22b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a22bc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2a22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2a22c0: 0x8c91016c  lw          $s1, 0x16C($a0)
    ctx->pc = 0x2a22c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2a22c4: 0x0  nop
    ctx->pc = 0x2a22c4u;
    // NOP
label_2a22c8:
    // 0x2a22c8: 0x82230020  lb          $v1, 0x20($s1)
    ctx->pc = 0x2a22c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2a22cc: 0x107e000e  beq         $v1, $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x2A22CCu;
    {
        const bool branch_taken_0x2a22cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x2A22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22CCu;
        // 0x2a22d0: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22cc) {
            ctx->pc = 0x2A2308u;
            goto label_2a2308;
        }
    }
    ctx->pc = 0x2A22D4u;
    // 0x2a22d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A22D4u;
    {
        const bool branch_taken_0x2a22d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a22d4) {
            ctx->pc = 0x2A22F0u;
            goto label_2a22f0;
        }
    }
    ctx->pc = 0x2A22DCu;
    // 0x2a22dc: 0x1077001e  beq         $v1, $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A22DCu;
    {
        const bool branch_taken_0x2a22dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x2A22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22DCu;
        // 0x2a22e0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22dc) {
            ctx->pc = 0x2A2358u;
            goto label_2a2358;
        }
    }
    ctx->pc = 0x2A22E4u;
    // 0x2a22e4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A22E4u;
    {
        const bool branch_taken_0x2a22e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22E4u;
        // 0x2a22e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22e4) {
            ctx->pc = 0x2A237Cu;
            goto label_2a237c;
        }
    }
    ctx->pc = 0x2A22ECu;
    // 0x2a22ec: 0x0  nop
    ctx->pc = 0x2a22ecu;
    // NOP
label_2a22f0:
    // 0x2a22f0: 0x10760011  beq         $v1, $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A22F0u;
    {
        const bool branch_taken_0x2a22f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22F0u;
        // 0x2a22f4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22f0) {
            ctx->pc = 0x2A2338u;
            goto label_2a2338;
        }
    }
    ctx->pc = 0x2A22F8u;
    // 0x2a22f8: 0x10750010  beq         $v1, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A22F8u;
    {
        const bool branch_taken_0x2a22f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2A22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22F8u;
        // 0x2a22fc: 0x26844030  addiu       $a0, $s4, 0x4030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22f8) {
            ctx->pc = 0x2A233Cu;
            goto label_2a233c;
        }
    }
    ctx->pc = 0x2A2300u;
    // 0x2a2300: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A2300u;
    {
        const bool branch_taken_0x2a2300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2300u;
        // 0x2a2304: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2300) {
            ctx->pc = 0x2A237Cu;
            goto label_2a237c;
        }
    }
    ctx->pc = 0x2A2308u;
label_2a2308:
    // 0x2a2308: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a2308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a230c: 0x2664d050  addiu       $a0, $s3, -0x2FB0
    ctx->pc = 0x2a230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955088));
    // 0x2a2310: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a2310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a2314: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2318: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x2a2318u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a231c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a231cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a2320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2324: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A2324u;
    SET_GPR_U32(ctx, 31, 0x2A232Cu);
    ctx->pc = 0x2A2328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2324u;
    // 0x2a2328: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2324u, 0x2A232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A232Cu;
label_2a232c:
    // 0x2a232c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A232Cu;
    {
        const bool branch_taken_0x2a232c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A232Cu;
        // 0x2a2330: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a232c) {
            ctx->pc = 0x2A237Cu;
            goto label_2a237c;
        }
    }
    ctx->pc = 0x2A2334u;
    // 0x2a2334: 0x0  nop
    ctx->pc = 0x2a2334u;
    // NOP
label_2a2338:
    // 0x2a2338: 0x26844030  addiu       $a0, $s4, 0x4030
    ctx->pc = 0x2a2338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16432));
label_2a233c:
    // 0x2a233c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a2340: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a2340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a2344: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2a2344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a2348: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A2348u;
    SET_GPR_U32(ctx, 31, 0x2A2350u);
    ctx->pc = 0x2A234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2348u;
    // 0x2a234c: 0x2406006e  addiu       $a2, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2348u, 0x2A2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2350u;
label_2a2350:
    // 0x2a2350: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A2350u;
    {
        const bool branch_taken_0x2a2350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2350u;
        // 0x2a2354: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2350) {
            ctx->pc = 0x2A237Cu;
            goto label_2a237c;
        }
    }
    ctx->pc = 0x2A2358u;
label_2a2358:
    // 0x2a2358: 0x2664d050  addiu       $a0, $s3, -0x2FB0
    ctx->pc = 0x2a2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955088));
    // 0x2a235c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2a2360: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2364: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2a2364u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2368: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a2368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a236c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a236cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2370: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A2370u;
    SET_GPR_U32(ctx, 31, 0x2A2378u);
    ctx->pc = 0x2A2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2370u;
    // 0x2a2374: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A2370u, 0x2A2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2378u;
label_2a2378:
    // 0x2a2378: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a2378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a237c:
    // 0x2a237c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2a237cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2380: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2A2380u;
    {
        const bool branch_taken_0x2a2380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2380u;
        // 0x2a2384: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2380) {
            ctx->pc = 0x2A22C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a22c8;
        }
    }
    ctx->pc = 0x2A2388u;
    // 0x2a2388: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a2388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a238c: 0x3c080012  lui         $t0, 0x12
    ctx->pc = 0x2a238cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18 << 16));
    // 0x2a2390: 0x2484d060  addiu       $a0, $a0, -0x2FA0
    ctx->pc = 0x2a2390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955104));
    // 0x2a2394: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a2394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a2398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a239c: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x2a239cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a23a0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A23A0u;
    SET_GPR_U32(ctx, 31, 0x2A23A8u);
    ctx->pc = 0x2A23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23A0u;
    // 0x2a23a4: 0x35080006  ori         $t0, $t0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A23A0u, 0x2A23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23A8u;
label_2a23a8:
    // 0x2a23a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a23a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a23ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a23acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a23b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a23b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a23b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a23b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a23b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a23b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a23bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a23bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a23c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2a23c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a23c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2a23c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a23c8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2a23c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a23cc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2a23ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a23d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A23D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23D0u;
        // 0x2a23d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A23D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A23D8u;
}
