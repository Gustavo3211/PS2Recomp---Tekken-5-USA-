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

// Function: sub_004A2390
// Address: 0x4a2390 - 0x4a24e8
void sub_004A2390_0x4a2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2390_0x4a2390");
#endif

    switch (ctx->pc) {
        case 0x4a2420u: goto label_4a2420;
        default: break;
    }

    ctx->pc = 0x4a2390u;

    // 0x4a2390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a2394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a2394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a2398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a2398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a239c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a23a0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a23a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a23a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a23a8: 0x2612011c  addiu       $s2, $s0, 0x11C
    ctx->pc = 0x4a23a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4a23ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a23acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a23b0: 0x26060124  addiu       $a2, $s0, 0x124
    ctx->pc = 0x4a23b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4a23b4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x4a23b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4a23b8: 0x26070138  addiu       $a3, $s0, 0x138
    ctx->pc = 0x4a23b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    // 0x4a23bc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4a23bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a23c0: 0x2608000c  addiu       $t0, $s0, 0xC
    ctx->pc = 0x4a23c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4a23c4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4a23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a23c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a23cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a23d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a23d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a23d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a23d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a23d8: 0x511825  or          $v1, $v0, $s1
    ctx->pc = 0x4a23d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a23dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a23dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a23e0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A23E0u;
    {
        const bool branch_taken_0x4a23e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A23E0u;
        // 0x4a23e4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a23e0) {
            ctx->pc = 0x4A2428u;
            goto label_4a2428;
        }
    }
    ctx->pc = 0x4A23E8u;
    // 0x4a23e8: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4a23e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a23ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a23ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a23f0: 0x34a50012  ori         $a1, $a1, 0x12
    ctx->pc = 0x4a23f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18);
    // 0x4a23f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a23f8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4a23f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a23fc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4a23fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a2400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a2404: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4a2404u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2408: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a240c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a240cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a2410: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a2410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a2414: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a2414u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a2418: 0xc124136  jal         func_4904D8
    ctx->pc = 0x4A2418u;
    SET_GPR_U32(ctx, 31, 0x4A2420u);
    ctx->pc = 0x4A241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2418u;
    // 0x4a241c: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904D8u, 0x4A2418u, 0x4A2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2420u;
label_4a2420:
    // 0x4a2420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A2420u;
    {
        const bool branch_taken_0x4a2420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2420u;
        // 0x4a2424: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2420) {
            ctx->pc = 0x4A242Cu;
            goto label_4a242c;
        }
    }
    ctx->pc = 0x4A2428u;
label_4a2428:
    // 0x4a2428: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x4a2428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_4a242c:
    // 0x4a242c: 0x8e09012c  lw          $t1, 0x12C($s0)
    ctx->pc = 0x4a242cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x4a2430: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2434: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x4a2434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4a2438: 0x1313025  or          $a2, $t1, $s1
    ctx->pc = 0x4a2438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4a243c: 0x2608011e  addiu       $t0, $s0, 0x11E
    ctx->pc = 0x4a243cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 286));
    // 0x4a2440: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4a2440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4a2444: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a2444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a2448: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a2448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a244c: 0x96030130  lhu         $v1, 0x130($s0)
    ctx->pc = 0x4a244cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4a2450: 0x86040132  lh          $a0, 0x132($s0)
    ctx->pc = 0x4a2450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x4a2454: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a2454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a2458: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a2458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a245c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a245cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a2460: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a2460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a2464: 0xc34824  and         $t1, $a2, $v1
    ctx->pc = 0x4a2464u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4a2468: 0x3522ffff  ori         $v0, $t1, 0xFFFF
    ctx->pc = 0x4a2468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a246c: 0x444824  and         $t1, $v0, $a0
    ctx->pc = 0x4a246cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a2470: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4a2470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4a2474: 0x1313025  or          $a2, $t1, $s1
    ctx->pc = 0x4a2474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4a2478: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4a2478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4a247c: 0x96020134  lhu         $v0, 0x134($s0)
    ctx->pc = 0x4a247cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x4a2480: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4a2480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a2484: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2488: 0x86050136  lh          $a1, 0x136($s0)
    ctx->pc = 0x4a2488u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x4a248c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a248cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a2490: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4a2490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a2494: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a2494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a2498: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a2498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a249c: 0xc24824  and         $t1, $a2, $v0
    ctx->pc = 0x4a249cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a24a0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4a24a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a24a4: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4a24a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4a24a8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4a24a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4a24ac: 0x3526ffff  ori         $a2, $t1, 0xFFFF
    ctx->pc = 0x4a24acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a24b0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x4a24b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a24b4: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x4a24b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a24b8: 0xc54824  and         $t1, $a2, $a1
    ctx->pc = 0x4a24b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4a24bc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4a24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4a24c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a24c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a24c4: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x4a24c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a24c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a24c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a24cc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a24d0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4a24d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a24d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a24d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a24d8: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4a24d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a24dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A24DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A24DCu;
        // 0x4a24e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A24DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A24E4u;
    // 0x4a24e4: 0x0  nop
    ctx->pc = 0x4a24e4u;
    // NOP
    ctx->pc = 0x4a24e8u;
}
