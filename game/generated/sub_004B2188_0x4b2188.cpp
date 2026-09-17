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

// Function: sub_004B2188
// Address: 0x4b2188 - 0x4b3438
void sub_004B2188_0x4b2188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2188_0x4b2188");
#endif

    switch (ctx->pc) {
        case 0x4b21a0u: goto label_4b21a0;
        case 0x4b21b0u: goto label_4b21b0;
        case 0x4b2370u: goto label_4b2370;
        case 0x4b23f4u: goto label_4b23f4;
        case 0x4b2404u: goto label_4b2404;
        case 0x4b2440u: goto label_4b2440;
        case 0x4b2598u: goto label_4b2598;
        case 0x4b2708u: goto label_4b2708;
        case 0x4b2710u: goto label_4b2710;
        case 0x4b2718u: goto label_4b2718;
        case 0x4b29a0u: goto label_4b29a0;
        case 0x4b2a00u: goto label_4b2a00;
        case 0x4b2a60u: goto label_4b2a60;
        case 0x4b2bb4u: goto label_4b2bb4;
        case 0x4b2bc4u: goto label_4b2bc4;
        case 0x4b2c94u: goto label_4b2c94;
        case 0x4b2c9cu: goto label_4b2c9c;
        case 0x4b2ca4u: goto label_4b2ca4;
        case 0x4b2d60u: goto label_4b2d60;
        case 0x4b2d68u: goto label_4b2d68;
        case 0x4b2d70u: goto label_4b2d70;
        case 0x4b3244u: goto label_4b3244;
        case 0x4b3288u: goto label_4b3288;
        case 0x4b3310u: goto label_4b3310;
        case 0x4b338cu: goto label_4b338c;
        case 0x4b3394u: goto label_4b3394;
        case 0x4b33b0u: goto label_4b33b0;
        case 0x4b33d8u: goto label_4b33d8;
        case 0x4b33e0u: goto label_4b33e0;
        case 0x4b33e8u: goto label_4b33e8;
        case 0x4b33f0u: goto label_4b33f0;
        case 0x4b3400u: goto label_4b3400;
        case 0x4b3410u: goto label_4b3410;
        default: break;
    }

    ctx->pc = 0x4b2188u;

    // 0x4b2188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b218c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b218cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b2190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b2194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b2194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2198: 0x812caf6  j           func_4B2BD8
    ctx->pc = 0x4B2198u;
    ctx->pc = 0x4B219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2198u;
    // 0x4b219c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2BD8u;
    goto label_4b2bd8;
    ctx->pc = 0x4B21A0u;
label_4b21a0:
    // 0x4b21a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b21a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b21a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b21a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b21a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B21A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21A8u;
        // 0x4b21ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B21A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B21B0u;
label_4b21b0:
    // 0x4b21b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b21b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b21b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b21b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b21bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b21bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b21c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b21c4: 0x24580d4c  addiu       $t8, $v0, 0xD4C
    ctx->pc = 0x4b21c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 3404));
    // 0x4b21c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b21cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b21ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b21d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b21d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b21d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b21d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b21dc: 0x8ea30140  lw          $v1, 0x140($s5)
    ctx->pc = 0x4b21dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x4b21e0: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x4b21e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D4Cu, _value); } while (0);
    // 0x4b21e4: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4b21e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4b21e8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B21E8u;
    {
        const bool branch_taken_0x4b21e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B21E8u;
        // 0x4b21ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b21e8) {
            ctx->pc = 0x4B2210u;
            goto label_4b2210;
        }
    }
    ctx->pc = 0x4B21F0u;
    // 0x4b21f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b21f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b21f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b21f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b21f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b21f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b21fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b21fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2200: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b2200u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b2204: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b2204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2208: 0x812d9fe  j           func_4B67F8
    ctx->pc = 0x4B2208u;
    ctx->pc = 0x4B220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2208u;
    // 0x4b220c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B67F8u, 0x4B2208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B2210u;
label_4b2210:
    // 0x4b2210: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b2210u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b2214: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b2214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2218: 0x254a0d30  addiu       $t2, $t2, 0xD30
    ctx->pc = 0x4b2218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3376));
    // 0x4b221c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b221cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b2220: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x4b2220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D30u, _value); } while (0);
    // 0x4b2224: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b2224u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b2228: 0xa6a0015e  sh          $zero, 0x15E($s5)
    ctx->pc = 0x4b2228u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b222c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b222cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b2230: 0xa6a00160  sh          $zero, 0x160($s5)
    ctx->pc = 0x4b2230u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b2234: 0x26730d3c  addiu       $s3, $s3, 0xD3C
    ctx->pc = 0x4b2234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3388));
    // 0x4b2238: 0xa6a00162  sh          $zero, 0x162($s5)
    ctx->pc = 0x4b2238u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b223c: 0x26520d40  addiu       $s2, $s2, 0xD40
    ctx->pc = 0x4b223cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b2240: 0xa6a00164  sh          $zero, 0x164($s5)
    ctx->pc = 0x4b2240u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b2244: 0x24c60d34  addiu       $a2, $a2, 0xD34
    ctx->pc = 0x4b2244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3380));
    // 0x4b2248: 0xa6a00166  sh          $zero, 0x166($s5)
    ctx->pc = 0x4b2248u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b224c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b224cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b2250: 0xa6a00168  sh          $zero, 0x168($s5)
    ctx->pc = 0x4b2250u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b2254: 0x26310d44  addiu       $s1, $s1, 0xD44
    ctx->pc = 0x4b2254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3396));
    // 0x4b2258: 0x86a201be  lh          $v0, 0x1BE($s5)
    ctx->pc = 0x4b2258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 446)));
    // 0x4b225c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b225cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b2260: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4b2260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b2264: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4b2264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2268: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b2268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b226c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4b226cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0D34u));
    // 0x4b2270: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2274: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x4b2274u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b2278: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b227c: 0x8e4e0000  lw          $t6, 0x0($s2)
    ctx->pc = 0x4b227cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2280: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b2280u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b2284: 0x346bffff  ori         $t3, $v1, 0xFFFF
    ctx->pc = 0x4b2284u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2288: 0x1104024  and         $t0, $t0, $s0
    ctx->pc = 0x4b2288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 16));
    // 0x4b228c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4b228cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b2290: 0x85490000  lh          $t1, 0x0($t2)
    ctx->pc = 0x4b2290u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2294: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x4b2294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x4b2298: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x4b2298u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b229c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x4b229cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x4b22a0: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x4b22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x4b22a4: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x4b22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x4b22a8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4b22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4b22ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x4b22acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b22b4: 0x8f140000  lw          $s4, 0x0($t8)
    ctx->pc = 0x4b22b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b22b8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b22b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b22bc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x4b22bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x4b22c0: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4b22c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4b22c4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x4b22c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4b22c8: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x4b22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x4b22cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4b22ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22d0: 0x24e70d38  addiu       $a3, $a3, 0xD38
    ctx->pc = 0x4b22d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3384));
    // 0x4b22d4: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4b22d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b22d8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x4b22d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b22dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b22e0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b22e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b22e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b22e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4b22e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4b22ec: 0x24216d48  addiu       $at, $at, 0x6D48
    ctx->pc = 0x4b22ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 27976));
    // 0x4b22f0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4b22f4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4b22f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b22f8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b22fc: 0x844b0002  lh          $t3, 0x2($v0)
    ctx->pc = 0x4b22fcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4b2300: 0x844c0000  lh          $t4, 0x0($v0)
    ctx->pc = 0x4b2300u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b2304: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b2304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b2308: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4b2308u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4b230c: 0x1e37824  and         $t7, $t7, $v1
    ctx->pc = 0x4b230cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x4b2310: 0x1906025  or          $t4, $t4, $s0
    ctx->pc = 0x4b2310u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 16));
    // 0x4b2314: 0x1ab6824  and         $t5, $t5, $t3
    ctx->pc = 0x4b2314u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x4b2318: 0x1cc7024  and         $t6, $t6, $t4
    ctx->pc = 0x4b2318u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x4b231c: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x4b231cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x4b2320: 0xae4e0000  sw          $t6, 0x0($s2)
    ctx->pc = 0x4b2320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 14));
    // 0x4b2324: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x4b2324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
    // 0x4b2328: 0x96820022  lhu         $v0, 0x22($s4)
    ctx->pc = 0x4b2328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x4b232c: 0xa6a20022  sh          $v0, 0x22($s5)
    ctx->pc = 0x4b232cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2330: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4b2330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b2334: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x4b2334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x4b2338: 0xa6a20024  sh          $v0, 0x24($s5)
    ctx->pc = 0x4b2338u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b233c: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4b233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b2340: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x4b2340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x4b2344: 0xa6a20026  sh          $v0, 0x26($s5)
    ctx->pc = 0x4b2344u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2348: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4b2348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b234c: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x4b234cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x4b2350: 0xa6a20028  sh          $v0, 0x28($s5)
    ctx->pc = 0x4b2350u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2354: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4b2354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b2358: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x4b2358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x4b235c: 0xa6a2002a  sh          $v0, 0x2A($s5)
    ctx->pc = 0x4b235cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2360: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x4b2360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b2364: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x4b2364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x4b2368: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4B2368u;
    SET_GPR_U32(ctx, 31, 0x4B2370u);
    ctx->pc = 0x4B236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2368u;
    // 0x4b236c: 0xa6a2002c  sh          $v0, 0x2C($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4B2368u, 0x4B2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2370u;
label_4b2370:
    // 0x4b2370: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b2370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2374: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4b2374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4b2378: 0xa6a20130  sh          $v0, 0x130($s5)
    ctx->pc = 0x4b2378u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b237c: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x4b237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4b2380: 0x248a249c  addiu       $t2, $a0, 0x249C
    ctx->pc = 0x4b2380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 9372));
    // 0x4b2384: 0x24892494  addiu       $t1, $a0, 0x2494
    ctx->pc = 0x4b2384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 9364));
    // 0x4b2388: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b2388u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b238c: 0x24842498  addiu       $a0, $a0, 0x2498
    ctx->pc = 0x4b238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9368));
    // 0x4b2390: 0xa6a30132  sh          $v1, 0x132($s5)
    ctx->pc = 0x4b2390u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b2394: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b2394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b2398: 0xa6a20134  sh          $v0, 0x134($s5)
    ctx->pc = 0x4b2398u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b239c: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x4b239cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b23a0: 0x96470000  lhu         $a3, 0x0($s2)
    ctx->pc = 0x4b23a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b23a4: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x4b23a4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b23a8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4b23a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b23ac: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4b23acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b23b0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4b23b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b23b4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b23b8: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4b23b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4b23bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b23c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b23c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b23c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b23c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b23c8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b23c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b23cc: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4b23ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4b23d0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b23d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b23d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b23d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b23d8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4b23d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4b23dc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4b23dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4b23e0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b23e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b23e4: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4b23e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x4b23e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b23e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b23ec: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B23ECu;
    SET_GPR_U32(ctx, 31, 0x4B23F4u);
    ctx->pc = 0x4B23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B23ECu;
    // 0x4b23f0: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B23ECu, 0x4B23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B23F4u;
label_4b23f4:
    // 0x4b23f4: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x4b23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4b23f8: 0xa6a2015a  sh          $v0, 0x15A($s5)
    ctx->pc = 0x4b23f8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b23fc: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4B23FCu;
    SET_GPR_U32(ctx, 31, 0x4B2404u);
    ctx->pc = 0x4B2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B23FCu;
    // 0x4b2400: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4B23FCu, 0x4B2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2404u;
label_4b2404:
    // 0x4b2404: 0x26a301bc  addiu       $v1, $s5, 0x1BC
    ctx->pc = 0x4b2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 444));
    // 0x4b2408: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b2408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b240c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b2410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b2414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b2418: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b2418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b241c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b241cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2420: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b2420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b2424: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b2424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2428: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b2428u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b242c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2430: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b2430u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2434: 0x812c910  j           func_4B2440
    ctx->pc = 0x4B2434u;
    ctx->pc = 0x4B2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2434u;
    // 0x4b2438: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2440u;
    goto label_4b2440;
    ctx->pc = 0x4B243Cu;
    // 0x4b243c: 0x0  nop
    ctx->pc = 0x4b243cu;
    // NOP
label_4b2440:
    // 0x4b2440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b2444: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b2448: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b2448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b244c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4b244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4b2450: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4b2450u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4b2454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b2454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b2458: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b2458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b245c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b2460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b2460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b2464: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b2464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b2468: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b2468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b246c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b2470: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b2470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b2474: 0x8e830140  lw          $v1, 0x140($s4)
    ctx->pc = 0x4b2474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x4b2478: 0xafc30d4c  sw          $v1, 0xD4C($fp)
    ctx->pc = 0x4b2478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D4Cu, _value); } while (0);
    // 0x4b247c: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4b247cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4b2480: 0x4410055  bgez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4B2480u;
    {
        const bool branch_taken_0x4b2480 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2480u;
        // 0x4b2484: 0x3c11007f  lui         $s1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2480) {
            ctx->pc = 0x4B25D8u;
            goto label_4b25d8;
        }
    }
    ctx->pc = 0x4B2488u;
    // 0x4b2488: 0x86820130  lh          $v0, 0x130($s4)
    ctx->pc = 0x4b2488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x4b248c: 0x262d0d3c  addiu       $t5, $s1, 0xD3C
    ctx->pc = 0x4b248cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 3388));
    // 0x4b2490: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4b2490u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2494: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4b2494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b2498: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4b2498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4b249c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b249cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b24a0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b24a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b24a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b24a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b24a8: 0x264c0d40  addiu       $t4, $s2, 0xD40
    ctx->pc = 0x4b24a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b24ac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b24acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b24b0: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4b24b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b24b4: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4b24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4b24b8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b24b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b24bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b24bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b24c0: 0x266e0d44  addiu       $t6, $s3, 0xD44
    ctx->pc = 0x4b24c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 3396));
    // 0x4b24c4: 0x86820132  lh          $v0, 0x132($s4)
    ctx->pc = 0x4b24c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 306)));
    // 0x4b24c8: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b24c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b24cc: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x4b24ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b24d0: 0x25290d34  addiu       $t1, $t1, 0xD34
    ctx->pc = 0x4b24d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
    // 0x4b24d4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4b24d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4b24d8: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x4b24d8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b24dc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b24dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b24e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b24e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b24e4: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4b24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4b24e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b24e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b24ec: 0x2696015e  addiu       $s6, $s4, 0x15E
    ctx->pc = 0x4b24ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 350));
    // 0x4b24f0: 0x26950162  addiu       $s5, $s4, 0x162
    ctx->pc = 0x4b24f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 354));
    // 0x4b24f4: 0x86820134  lh          $v0, 0x134($s4)
    ctx->pc = 0x4b24f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x4b24f8: 0x26970166  addiu       $s7, $s4, 0x166
    ctx->pc = 0x4b24f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 358));
    // 0x4b24fc: 0x85880000  lh          $t0, 0x0($t4)
    ctx->pc = 0x4b24fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b2500: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4b2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4b2504: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4b2504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2508: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4b2508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4b250c: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4b250cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4b2510: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b2510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b2514: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2518: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4b2518u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b251c: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4b251cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b2520: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4b2520u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4b2524: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x4b2524u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x4b2528: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4b2528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4b252c: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4b252cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4b2530: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4b2530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b2534: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4b2534u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b2538: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x4b2538u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x4b253c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4b253cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4b2540: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4b2540u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4b2544: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4b2544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b2548: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4b2548u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b254c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x4b254cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x4b2550: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4b2550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b2554: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x4b2554u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x4b2558: 0x8682015a  lh          $v0, 0x15A($s4)
    ctx->pc = 0x4b2558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 346)));
    // 0x4b255c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4b255cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4b2560: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2564: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b2564u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b2568: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b256c: 0x81220001  lb          $v0, 0x1($t1)
    ctx->pc = 0x4b256cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x4b2570: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4b2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4b2574: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2578: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b2578u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b257c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2580: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4b2580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2584: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4b2584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4b2588: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b258c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b258cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b2590: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B2590u;
    SET_GPR_U32(ctx, 31, 0x4B2598u);
    ctx->pc = 0x4B2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2590u;
    // 0x4b2594: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B2590u, 0x4B2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2598u;
label_4b2598:
    // 0x4b2598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b2598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b259c: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B259Cu;
    {
        const bool branch_taken_0x4b259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b259c) {
            ctx->pc = 0x4B25A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B259Cu;
            // 0x4b25a0: 0x96c20000  lhu         $v0, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B25F0u;
            goto label_4b25f0;
        }
    }
    ctx->pc = 0x4B25A4u;
    // 0x4b25a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b25a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b25a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b25a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b25ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b25acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b25b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b25b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b25b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b25b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b25b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b25b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b25bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b25bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b25c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b25c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b25c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b25c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b25c8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b25c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b25cc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b25ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b25d0: 0x812ca0a  j           func_4B2828
    ctx->pc = 0x4B25D0u;
    ctx->pc = 0x4B25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B25D0u;
    // 0x4b25d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2828u;
    goto label_4b2828;
    ctx->pc = 0x4B25D8u;
label_4b25d8:
    // 0x4b25d8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b25d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b25dc: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b25dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b25e0: 0x2696015e  addiu       $s6, $s4, 0x15E
    ctx->pc = 0x4b25e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 350));
    // 0x4b25e4: 0x26950162  addiu       $s5, $s4, 0x162
    ctx->pc = 0x4b25e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 354));
    // 0x4b25e8: 0x26970166  addiu       $s7, $s4, 0x166
    ctx->pc = 0x4b25e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 358));
    // 0x4b25ec: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4b25ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4b25f0:
    // 0x4b25f0: 0x26310d3c  addiu       $s1, $s1, 0xD3C
    ctx->pc = 0x4b25f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3388));
    // 0x4b25f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4b25f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b25f8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b25f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b25fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b2600: 0x26890160  addiu       $t1, $s4, 0x160
    ctx->pc = 0x4b2600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x4b2604: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4b2604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4b2608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b260c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b260cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2610: 0x26520d40  addiu       $s2, $s2, 0xD40
    ctx->pc = 0x4b2610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b2614: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b2614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b2618: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b261c: 0x26730d44  addiu       $s3, $s3, 0xD44
    ctx->pc = 0x4b261cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3396));
    // 0x4b2620: 0x26870164  addiu       $a3, $s4, 0x164
    ctx->pc = 0x4b2620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
    // 0x4b2624: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4b2624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2628: 0x26880168  addiu       $t0, $s4, 0x168
    ctx->pc = 0x4b2628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 360));
    // 0x4b262c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4b262cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b2630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2634: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b2634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b2638: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b2638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b263c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2640: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4b2640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4b2644: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b2644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b2648: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b2648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b264c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4b264cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b2650: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b2650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b2654: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b2658: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b2658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b265c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b265cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b2660: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b2660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b2664: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b2664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b2668: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b2668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b266c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b266cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b2670: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b2670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b2674: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4b2674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b2678: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b2678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b267c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b2680: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2684: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b2684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b2688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b268c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4b268cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b2690: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b2694: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2698: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b2698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b269c: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x4b269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x4b26a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b26a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b26a4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b26a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b26a8: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x4b26a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4b26ac: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x4b26acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x4b26b0: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x4b26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x4b26b4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b26b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b26b8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b26bc: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x4b26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x4b26c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b26c4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b26c8: 0xa6c50000  sh          $a1, 0x0($s6)
    ctx->pc = 0x4b26c8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b26cc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b26ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b26d0: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4b26d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b26d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4b26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b26d8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b26d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b26dc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b26e0: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4b26e0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b26e4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b26e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b26e8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4b26e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b26ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b26f0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b26f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b26f4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b26f8: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4b26f8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b26fc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4b26fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2700: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2700u;
    SET_GPR_U32(ctx, 31, 0x4B2708u);
    ctx->pc = 0x4B2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2700u;
    // 0x4b2704: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2700u, 0x4B2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2708u;
label_4b2708:
    // 0x4b2708: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2708u;
    SET_GPR_U32(ctx, 31, 0x4B2710u);
    ctx->pc = 0x4B270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2708u;
    // 0x4b270c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2708u, 0x4B2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2710u;
label_4b2710:
    // 0x4b2710: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2710u;
    SET_GPR_U32(ctx, 31, 0x4B2718u);
    ctx->pc = 0x4B2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2710u;
    // 0x4b2714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2710u, 0x4B2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2718u;
label_4b2718:
    // 0x4b2718: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4b2718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b271c: 0x8fca0d4c  lw          $t2, 0xD4C($fp)
    ctx->pc = 0x4b271cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3404)));
    // 0x4b2720: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x4b2720u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4b2724: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4b2724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b2728: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b272c: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x4b272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4b2730: 0x268c0014  addiu       $t4, $s4, 0x14
    ctx->pc = 0x4b2730u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4b2734: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4b2734u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2738: 0x268d0018  addiu       $t5, $s4, 0x18
    ctx->pc = 0x4b2738u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4b273c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b2740: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4b2740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2744: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b2748: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4b2748u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b274c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b2750: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4b2750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2754: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4b2754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4b2758: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b2758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b275c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4b275cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b2760: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b2760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b2764: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4b2764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4b2768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b2768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b276c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b276cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b2770: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x4b2770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x4b2774: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b2774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b2778: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b2778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b277c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b277cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2780: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b2784: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b2784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b2788: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b2788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b278c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2790: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4b2790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4b2794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b2794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b2798: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4b2798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4b279c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b279cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b27a0: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b27a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b27a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b27a8: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x4b27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x4b27ac: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b27acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b27b0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b27b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b27b4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b27b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b27b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b27b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b27bc: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4b27bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4b27c0: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4b27c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4b27c4: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x4b27c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x4b27c8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4b27c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4b27cc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4b27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b27d0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b27d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b27d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b27d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b27d8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4b27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4b27dc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b27dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b27e0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4b27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b27e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b27e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b27e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b27ec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b27ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b27f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b27f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b27f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b27f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b27f8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4b27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4b27fc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4b27fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2800: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4b2800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b2804: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b2804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b2808: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b2808u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b280c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b280cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b2810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b2810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2814: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2818: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b281c: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4b281cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4b2820: 0x812cba6  j           func_4B2E98
    ctx->pc = 0x4B2820u;
    ctx->pc = 0x4B2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2820u;
    // 0x4b2824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2E98u;
    goto label_4b2e98;
    ctx->pc = 0x4B2828u;
label_4b2828:
    // 0x4b2828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b2828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b282c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b282cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b2830: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b2830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b2834: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b2834u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b2838: 0x26520d30  addiu       $s2, $s2, 0xD30
    ctx->pc = 0x4b2838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x4b283c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b2840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b2840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b2844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b2844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2848: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4b2848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4b284c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4b284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4b2850: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4b2850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D30u, _value); } while (0);
    // 0x4b2854: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b2854u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2858: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x4b2858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4b285c: 0x262d0018  addiu       $t5, $s1, 0x18
    ctx->pc = 0x4b285cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4b2860: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b2860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b2864: 0x25290d3c  addiu       $t1, $t1, 0xD3C
    ctx->pc = 0x4b2864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3388));
    // 0x4b2868: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4b2868u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4b286c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b286cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b2870: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b2874: 0x256b0d40  addiu       $t3, $t3, 0xD40
    ctx->pc = 0x4b2874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3392));
    // 0x4b2878: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b2878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b287c: 0x254a0d44  addiu       $t2, $t2, 0xD44
    ctx->pc = 0x4b287cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3396));
    // 0x4b2880: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b2880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b2884: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b2884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b2888: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b288c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b2890: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b2894: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4b2894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4b2898: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4b2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b289c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b28a0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4b28a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4b28a4: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4b28a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4b28a8: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x4b28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x4b28ac: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x4b28acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
    // 0x4b28b0: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x4b28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    // 0x4b28b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b28b8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4b28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b28bc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b28bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b28c0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x4b28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b28c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b28c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b28c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b28c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b28cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b28ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b28d0: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4b28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b28d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b28d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b28d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b28d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b28dc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b28e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b28e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b28e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b28e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b28e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b28ec: 0x8cec0d64  lw          $t4, 0xD64($a3)
    ctx->pc = 0x4b28ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3428)));
    // 0x4b28f0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b28f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b28f4: 0x85270000  lh          $a3, 0x0($t1)
    ctx->pc = 0x4b28f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b28f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b28f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b28fc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b28fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b2900: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b2900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b2904: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4b2904u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4b2908: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b2908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b290c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4b290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b2910: 0x85680000  lh          $t0, 0x0($t3)
    ctx->pc = 0x4b2910u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b2914: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b2914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b2918: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2918u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b291c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b2920: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2924: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4b2924u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4b2928: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b292c: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4b292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4b2930: 0x85460000  lh          $a2, 0x0($t2)
    ctx->pc = 0x4b2930u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2934: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b2934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b2938: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b293c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4b293cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b2940: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4b2940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4b2944: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4b2944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4b2948: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b2948u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b294c: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4b294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4b2950: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4b2950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2954: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b2954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b2958: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b295c: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4b295cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b2960: 0x1104025  or          $t0, $t0, $s0
    ctx->pc = 0x4b2960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x4b2964: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4b2964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4b2968: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4b2968u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4b296c: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4b296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4b2970: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b2970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b2974: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b2978: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4b2978u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b297c: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4b297cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4b2980: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b2980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b2984: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4b2984u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4b2988: 0xa6230130  sh          $v1, 0x130($s1)
    ctx->pc = 0x4b2988u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b298c: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4b298cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b2990: 0xa6220132  sh          $v0, 0x132($s1)
    ctx->pc = 0x4b2990u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2994: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4b2994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2998: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B2998u;
    SET_GPR_U32(ctx, 31, 0x4B29A0u);
    ctx->pc = 0x4B299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2998u;
    // 0x4b299c: 0xa6230134  sh          $v1, 0x134($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B2998u, 0x4B29A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B29A0u;
label_4b29a0:
    // 0x4b29a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b29a4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b29a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b29a8: 0x262601bc  addiu       $a2, $s1, 0x1BC
    ctx->pc = 0x4b29a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4b29ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b29acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b29b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b29b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b29b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b29b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4b29b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b29bc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b29bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b29c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b29c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b29c4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b29c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b29c8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4b29c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4b29cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4b29ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b29d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b29d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b29d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b29d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b29d8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b29dc: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4b29dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b29e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b29e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b29e4: 0xa625014a  sh          $a1, 0x14A($s1)
    ctx->pc = 0x4b29e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 330), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b29e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b29e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b29ec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b29ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b29f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b29f4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4b29f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b29f8: 0x812ca80  j           func_4B2A00
    ctx->pc = 0x4B29F8u;
    ctx->pc = 0x4B29FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B29F8u;
    // 0x4b29fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2A00u;
    goto label_4b2a00;
    ctx->pc = 0x4B2A00u;
label_4b2a00:
    // 0x4b2a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b2a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b2a04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b2a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b2a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b2a0c: 0x24c2014a  addiu       $v0, $a2, 0x14A
    ctx->pc = 0x4b2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 330));
    // 0x4b2a10: 0x24c701bc  addiu       $a3, $a2, 0x1BC
    ctx->pc = 0x4b2a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
    // 0x4b2a14: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b2a14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b2a18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b2a1c: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4b2a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b2a20: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B2A20u;
    {
        const bool branch_taken_0x4b2a20 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4B2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A20u;
        // 0x4b2a24: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a20) {
            ctx->pc = 0x4B2A38u;
            goto label_4b2a38;
        }
    }
    ctx->pc = 0x4B2A28u;
    // 0x4b2a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b2a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2a2c: 0x812caf6  j           func_4B2BD8
    ctx->pc = 0x4B2A2Cu;
    ctx->pc = 0x4B2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2A2Cu;
    // 0x4b2a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2BD8u;
    goto label_4b2bd8;
    ctx->pc = 0x4B2A34u;
    // 0x4b2a34: 0x0  nop
    ctx->pc = 0x4b2a34u;
    // NOP
label_4b2a38:
    // 0x4b2a38: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4b2a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b2a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b2a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2a44: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b2a48: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4b2a48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2a4c: 0xa4c3011a  sh          $v1, 0x11A($a2)
    ctx->pc = 0x4b2a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b2a50: 0xa4c0016a  sh          $zero, 0x16A($a2)
    ctx->pc = 0x4b2a50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 362), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b2a54: 0x812ca98  j           func_4B2A60
    ctx->pc = 0x4B2A54u;
    ctx->pc = 0x4B2A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2A54u;
    // 0x4b2a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2A60u;
    goto label_4b2a60;
    ctx->pc = 0x4B2A5Cu;
    // 0x4b2a5c: 0x0  nop
    ctx->pc = 0x4b2a5cu;
    // NOP
label_4b2a60:
    // 0x4b2a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b2a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b2a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b2a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b2a68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b2a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2a6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b2a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b2a70: 0x8602011a  lh          $v0, 0x11A($s0)
    ctx->pc = 0x4b2a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x4b2a74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B2A74u;
    {
        const bool branch_taken_0x4b2a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A74u;
        // 0x4b2a78: 0x260301bc  addiu       $v1, $s0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a74) {
            ctx->pc = 0x4B2A90u;
            goto label_4b2a90;
        }
    }
    ctx->pc = 0x4B2A7Cu;
    // 0x4b2a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b2a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2a80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b2a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b2a84: 0x812caf6  j           func_4B2BD8
    ctx->pc = 0x4B2A84u;
    ctx->pc = 0x4B2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2A84u;
    // 0x4b2a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2BD8u;
    goto label_4b2bd8;
    ctx->pc = 0x4B2A8Cu;
    // 0x4b2a8c: 0x0  nop
    ctx->pc = 0x4b2a8cu;
    // NOP
label_4b2a90:
    // 0x4b2a90: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b2a90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b2a94: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b2a94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b2a98: 0x25290d3c  addiu       $t1, $t1, 0xD3C
    ctx->pc = 0x4b2a98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3388));
    // 0x4b2a9c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b2a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2aa0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b2aa4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b2aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b2aa8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b2aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2aac: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b2aacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b2ab0: 0x254a0d44  addiu       $t2, $t2, 0xD44
    ctx->pc = 0x4b2ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3396));
    // 0x4b2ab4: 0x24e70d40  addiu       $a3, $a3, 0xD40
    ctx->pc = 0x4b2ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3392));
    // 0x4b2ab8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4b2ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b2abc: 0x3c0b0073  lui         $t3, 0x73
    ctx->pc = 0x4b2abcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)115 << 16));
    // 0x4b2ac0: 0x86020130  lh          $v0, 0x130($s0)
    ctx->pc = 0x4b2ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4b2ac4: 0x256bd680  addiu       $t3, $t3, -0x2980
    ctx->pc = 0x4b2ac4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956672));
    // 0x4b2ac8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b2ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b2acc: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4b2accu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D44u));
    // 0x4b2ad0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2ad4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4b2ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b2ad8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b2ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b2adc: 0x256d2494  addiu       $t5, $t3, 0x2494
    ctx->pc = 0x4b2adcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 9364));
    // 0x4b2ae0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4b2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4b2ae4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b2ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b2ae8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2aec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b2aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b2af0: 0x86020132  lh          $v0, 0x132($s0)
    ctx->pc = 0x4b2af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x4b2af4: 0x256e249c  addiu       $t6, $t3, 0x249C
    ctx->pc = 0x4b2af4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 9372));
    // 0x4b2af8: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4b2af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2afc: 0x256b2498  addiu       $t3, $t3, 0x2498
    ctx->pc = 0x4b2afcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9368));
    // 0x4b2b00: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2b04: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x4b2b04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b2b08: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2b0c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4b2b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4b2b10: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b2b10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b2b14: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2b18: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4b2b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4b2b1c: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x4b2b1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x4b2b20: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x4b2b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x4b2b24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b2b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b2b28: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4b2b28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b2b2c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2b30: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4b2b30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4b2b34: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b2b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b2b38: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4b2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4b2b3c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4b2b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4b2b40: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b2b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b2b44: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4b2b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4b2b48: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b2b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2b4c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4b2b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b2b50: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b2b50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b2b54: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b2b58: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2b5c: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4b2b5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2b60: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b2b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b2b64: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4b2b64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b2b68: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4b2b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b2b6c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b2b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b2b70: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4b2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4b2b74: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4b2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4b2b78: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2b7c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4b2b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4b2b80: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4b2b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2b84: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b2b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b2b88: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4b2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b2b8c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4b2b8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b2b90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b2b94: 0x1856024  and         $t4, $t4, $a1
    ctx->pc = 0x4b2b94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 5));
    // 0x4b2b98: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4b2b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4b2b9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b2ba0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2ba4: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x4b2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x4b2ba8: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4b2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4b2bac: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B2BACu;
    SET_GPR_U32(ctx, 31, 0x4B2BB4u);
    ctx->pc = 0x4B2BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2BACu;
    // 0x4b2bb0: 0xadc30000  sw          $v1, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B2BACu, 0x4B2BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2BB4u;
label_4b2bb4:
    // 0x4b2bb4: 0x24022800  addiu       $v0, $zero, 0x2800
    ctx->pc = 0x4b2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x4b2bb8: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4b2bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2bbc: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4B2BBCu;
    SET_GPR_U32(ctx, 31, 0x4B2BC4u);
    ctx->pc = 0x4B2BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2BBCu;
    // 0x4b2bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4B2BBCu, 0x4B2BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2BC4u;
label_4b2bc4:
    // 0x4b2bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2bc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b2bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b2bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b2bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2bd0: 0x812caf6  j           func_4B2BD8
    ctx->pc = 0x4B2BD0u;
    ctx->pc = 0x4B2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2BD0u;
    // 0x4b2bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2BD8u;
    goto label_4b2bd8;
    ctx->pc = 0x4B2BD8u;
label_4b2bd8:
    // 0x4b2bd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b2bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b2bdc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4b2bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4b2be0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b2be0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2be4: 0x26820130  addiu       $v0, $s4, 0x130
    ctx->pc = 0x4b2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x4b2be8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b2be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b2bec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4b2becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4b2bf0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4b2bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2bf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b2bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b2bf8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b2bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b2bfc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4b2bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4b2c00: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b2c00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b2c04: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4b2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4b2c08: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x4b2c08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4b2c0c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4b2c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4b2c10: 0x26960014  addiu       $s6, $s4, 0x14
    ctx->pc = 0x4b2c10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4b2c14: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4b2c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4b2c18: 0x26970018  addiu       $s7, $s4, 0x18
    ctx->pc = 0x4b2c18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4b2c1c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4b2c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4b2c20: 0x269e0134  addiu       $fp, $s4, 0x134
    ctx->pc = 0x4b2c20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 308));
    // 0x4b2c24: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4b2c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4b2c28: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b2c28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b2c2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4b2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4b2c30: 0x26100d3c  addiu       $s0, $s0, 0xD3C
    ctx->pc = 0x4b2c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3388));
    // 0x4b2c34: 0x26840132  addiu       $a0, $s4, 0x132
    ctx->pc = 0x4b2c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 306));
    // 0x4b2c38: 0x26730d40  addiu       $s3, $s3, 0xD40
    ctx->pc = 0x4b2c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3392));
    // 0x4b2c3c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4b2c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b2c40: 0x26520d44  addiu       $s2, $s2, 0xD44
    ctx->pc = 0x4b2c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3396));
    // 0x4b2c44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b2c48: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b2c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b2c4c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x4b2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x4b2c50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b2c54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b2c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b2c58: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4b2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2c5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b2c60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2c64: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b2c64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b2c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2c6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2c70: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2c74: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2c78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2c7c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4b2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4b2c80: 0x87c20000  lh          $v0, 0x0($fp)
    ctx->pc = 0x4b2c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b2c84: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2c88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2c8c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2C8Cu;
    SET_GPR_U32(ctx, 31, 0x4B2C94u);
    ctx->pc = 0x4B2C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2C8Cu;
    // 0x4b2c90: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2C8Cu, 0x4B2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2C94u;
label_4b2c94:
    // 0x4b2c94: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2C94u;
    SET_GPR_U32(ctx, 31, 0x4B2C9Cu);
    ctx->pc = 0x4B2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2C94u;
    // 0x4b2c98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2C94u, 0x4B2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2C9Cu;
label_4b2c9c:
    // 0x4b2c9c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2C9Cu;
    SET_GPR_U32(ctx, 31, 0x4B2CA4u);
    ctx->pc = 0x4B2CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2C9Cu;
    // 0x4b2ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2C9Cu, 0x4B2CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2CA4u;
label_4b2ca4:
    // 0x4b2ca4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b2ca8: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4b2ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b2cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2cb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2cb4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4b2cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2cb8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2cbc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4b2cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2cc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2cc4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2cc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b2ccc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b2cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b2cd0: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4b2cd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b2cd4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2cd8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2cdc: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4b2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4b2ce0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4b2ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b2ce4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2ce8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b2ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b2cec: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b2cf0: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x4b2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x4b2cf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b2cf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b2cfc: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x4b2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x4b2d00: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4b2d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b2d04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b2d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b2d08: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4b2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4b2d0c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b2d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b2d10: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x4b2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x4b2d14: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b2d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b2d18: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4b2d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4b2d1c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b2d20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b2d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b2d24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b2d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b2d28: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b2d28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b2d2c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4b2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b2d30: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b2d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2d34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2d38: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2d3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2d40: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b2d44: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4b2d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b2d48: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b2d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2d4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2d50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2d54: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2d58: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2D58u;
    SET_GPR_U32(ctx, 31, 0x4B2D60u);
    ctx->pc = 0x4B2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2D58u;
    // 0x4b2d5c: 0xaee50000  sw          $a1, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2D58u, 0x4B2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2D60u;
label_4b2d60:
    // 0x4b2d60: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2D60u;
    SET_GPR_U32(ctx, 31, 0x4B2D68u);
    ctx->pc = 0x4B2D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2D60u;
    // 0x4b2d64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2D60u, 0x4B2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2D68u;
label_4b2d68:
    // 0x4b2d68: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B2D68u;
    SET_GPR_U32(ctx, 31, 0x4B2D70u);
    ctx->pc = 0x4B2D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2D68u;
    // 0x4b2d6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B2D68u, 0x4B2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2D70u;
label_4b2d70:
    // 0x4b2d70: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4b2d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b2d74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4b2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2d78: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b2d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b2d7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b2d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2d80: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4b2d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2d84: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4b2d84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b2d88: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4b2d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b2d8c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b2d8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2d90: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4b2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b2d94: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b2d94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2d98: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b2d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2d9c: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x4b2d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b2da0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4b2da0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b2da4: 0x8ca90d64  lw          $t1, 0xD64($a1)
    ctx->pc = 0x4b2da4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0D64u));
    // 0x4b2da8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4b2da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b2dac: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x4b2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x4b2db0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4b2db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b2db4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b2db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b2db8: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4b2db8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2dbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2dbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b2dc0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2dc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b2dc8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4b2dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2dcc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b2dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b2dd0: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x4b2dd0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2dd4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4b2dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b2dd8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b2dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b2ddc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4b2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4b2de0: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x4b2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x4b2de4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2de8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b2de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b2dec: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4b2decu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b2df0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b2df4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2df8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b2df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b2dfc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b2dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b2e00: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4b2e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4b2e04: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2e08: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4b2e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4b2e0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4b2e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2e10: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4b2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4b2e14: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x4b2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x4b2e18: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b2e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b2e1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b2e20: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b2e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b2e24: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4b2e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4b2e28: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4b2e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4b2e2c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4b2e30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4b2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b2e34: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2e38: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b2e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b2e3c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b2e40: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4b2e40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b2e44: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4b2e44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b2e48: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4b2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b2e4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b2e50: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4b2e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b2e54: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2e58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2e5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b2e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b2e60: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4b2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4b2e64: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4b2e64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b2e68: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b2e68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2e6c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4b2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b2e70: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b2e74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b2e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2e78: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b2e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b2e7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4b2e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b2e80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2e84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b2e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b2e88: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4b2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4b2e8c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4b2e8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b2e90: 0x812cba6  j           func_4B2E98
    ctx->pc = 0x4B2E90u;
    ctx->pc = 0x4B2E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2E90u;
    // 0x4b2e94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2E98u;
    goto label_4b2e98;
    ctx->pc = 0x4B2E98u;
label_4b2e98:
    // 0x4b2e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b2e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b2e9c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4b2e9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b2ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b2ea4: 0x256a011a  addiu       $t2, $t3, 0x11A
    ctx->pc = 0x4b2ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 282));
    // 0x4b2ea8: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b2ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2eac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4B2EACu;
    {
        const bool branch_taken_0x4b2eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EACu;
        // 0x4b2eb0: 0x2569016a  addiu       $t1, $t3, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 362));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2eac) {
            ctx->pc = 0x4B2F30u;
            goto label_4b2f30;
        }
    }
    ctx->pc = 0x4B2EB4u;
    // 0x4b2eb4: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b2eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b2eb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2ebc: 0x25870d38  addiu       $a3, $t4, 0xD38
    ctx->pc = 0x4b2ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 3384));
    // 0x4b2ec0: 0x34420559  ori         $v0, $v0, 0x559
    ctx->pc = 0x4b2ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1369);
    // 0x4b2ec4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D38u));
    // 0x4b2ec8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4b2ec8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4b2ecc: 0x25a60d30  addiu       $a2, $t5, 0xD30
    ctx->pc = 0x4b2eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 3376));
    // 0x4b2ed0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b2ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2ed4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2ed8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b2ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b2edc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b2edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b2ee0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b2ee4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2ee8: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4b2ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2eec: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2ef0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2ef4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4b2ef8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2efc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b2efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b2f00: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4b2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4b2f04: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2f08: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2f0c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4b2f10: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b2f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b2f14: 0x2c420500  sltiu       $v0, $v0, 0x500
    ctx->pc = 0x4b2f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1280) ? 1 : 0);
    // 0x4b2f18: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B2F18u;
    {
        const bool branch_taken_0x4b2f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2f18) {
            ctx->pc = 0x4B2F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2F18u;
            // 0x4b2f1c: 0xa5400000  sh          $zero, 0x0($t2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2F3Cu;
            goto label_4b2f3c;
        }
    }
    ctx->pc = 0x4B2F20u;
    // 0x4b2f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b2f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2f24: 0x812cc08  j           func_4B3020
    ctx->pc = 0x4B2F24u;
    ctx->pc = 0x4B2F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2F24u;
    // 0x4b2f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3020u;
    goto label_4b3020;
    ctx->pc = 0x4B2F2Cu;
    // 0x4b2f2c: 0x0  nop
    ctx->pc = 0x4b2f2cu;
    // NOP
label_4b2f30:
    // 0x4b2f30: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4b2f30u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4b2f34: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b2f34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b2f38: 0x25870d38  addiu       $a3, $t4, 0xD38
    ctx->pc = 0x4b2f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 3384));
label_4b2f3c:
    // 0x4b2f3c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b2f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2f40: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b2f44: 0x34a50538  ori         $a1, $a1, 0x538
    ctx->pc = 0x4b2f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1336);
    // 0x4b2f48: 0x25a60d30  addiu       $a2, $t5, 0xD30
    ctx->pc = 0x4b2f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 3376));
    // 0x4b2f4c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b2f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b2f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b2f54: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4b2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b2f58: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b2f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b2f5c: 0x244c0d34  addiu       $t4, $v0, 0xD34
    ctx->pc = 0x4b2f5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 3380));
    // 0x4b2f60: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b2f64: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b2f64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2f68: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b2f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b2f6c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4b2f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b2f70: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2f74: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b2f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b2f78: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4b2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4b2f7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b2f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b2f80: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b2f80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b2f84: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4b2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4b2f88: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2f8c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b2f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b2f90: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4b2f90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4b2f94: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b2f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b2f98: 0x2c420300  sltiu       $v0, $v0, 0x300
    ctx->pc = 0x4b2f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
    // 0x4b2f9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2F9Cu;
    {
        const bool branch_taken_0x4b2f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2F9Cu;
        // 0x4b2fa0: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2f9c) {
            ctx->pc = 0x4B2FB0u;
            goto label_4b2fb0;
        }
    }
    ctx->pc = 0x4B2FA4u;
    // 0x4b2fa4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2FA8u;
    {
        const bool branch_taken_0x4b2fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2FA8u;
        // 0x4b2fac: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2fa8) {
            ctx->pc = 0x4B2FB8u;
            goto label_4b2fb8;
        }
    }
    ctx->pc = 0x4B2FB0u;
label_4b2fb0:
    // 0x4b2fb0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b2fb4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4b2fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4b2fb8:
    // 0x4b2fb8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4b2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4b2fbc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b2fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2fc0: 0x25a70d30  addiu       $a3, $t5, 0xD30
    ctx->pc = 0x4b2fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 3376));
    // 0x4b2fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b2fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2fc8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4b2fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b2fcc: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x4b2fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2fd0: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4b2fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b2fd4: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x4b2fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x4b2fd8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4b2fd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b2fdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b2fe0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b2fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b2fe4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b2fe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b2fe8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4b2fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b2fec: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b2fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b2ff0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b2ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b2ff4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b2ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b2ff8: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4b2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4b2ffc: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4b2ffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b3000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3004: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b3004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b3008: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4b3008u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b300c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4b300cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4b3010: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4b3010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4b3014: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x4b3014u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x4b3018: 0x812cc08  j           func_4B3020
    ctx->pc = 0x4B3018u;
    ctx->pc = 0x4B301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3018u;
    // 0x4b301c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3020u;
    goto label_4b3020;
    ctx->pc = 0x4B3020u;
label_4b3020:
    // 0x4b3020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b3024: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b3024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b3028: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b3028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b302c: 0x24530d30  addiu       $s3, $v0, 0xD30
    ctx->pc = 0x4b302cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    // 0x4b3030: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b3030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0D30u));
    // 0x4b3034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b3034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b3038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b3038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b303c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b303cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b3040: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4b3040u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3048: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b3048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b304c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b3050: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b3050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b3054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b3058: 0xa642016a  sh          $v0, 0x16A($s2)
    ctx->pc = 0x4b3058u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b305c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b305cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b3060: 0x82620001  lb          $v0, 0x1($s3)
    ctx->pc = 0x4b3060u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x7F0D31u));
    // 0x4b3064: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3068: 0x84850d38  lh          $a1, 0xD38($a0)
    ctx->pc = 0x4b3068u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0D38u));
    // 0x4b306c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3070: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3074: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b3074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b3078: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b307c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4b307cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b3080: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3084: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3088: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b3088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b308c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3090: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b3090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b3094: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b3094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b3098: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b3098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b309c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b30a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b30a4: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4b30a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b30a8: 0x864201b4  lh          $v0, 0x1B4($s2)
    ctx->pc = 0x4b30a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x4b30ac: 0xa644000c  sh          $a0, 0xC($s2)
    ctx->pc = 0x4b30acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b30b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b30b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b30b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b30b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b30bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b30bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b30c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b30c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b30c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b30c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b30c8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b30c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b30cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b30ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b30d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b30d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b30d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b30d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b30d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b30dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b30dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b30e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b30e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b30e4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b30e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b30e8: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4B30E8u;
    {
        const bool branch_taken_0x4b30e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B30E8u;
        // 0x4b30ec: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b30e8) {
            ctx->pc = 0x4B338Cu;
            goto label_4b338c;
        }
    }
    ctx->pc = 0x4B30F0u;
    // 0x4b30f0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b30f4: 0x8c470d64  lw          $a3, 0xD64($v0)
    ctx->pc = 0x4b30f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3428)));
    // 0x4b30f8: 0x24750d3c  addiu       $s5, $v1, 0xD3C
    ctx->pc = 0x4b30f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3388));
    // 0x4b30fc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4b30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b3100: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b3100u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b3104: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b3108: 0x25290d44  addiu       $t1, $t1, 0xD44
    ctx->pc = 0x4b3108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3396));
    // 0x4b310c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b310cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b3110: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4b3110u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D44u));
    // 0x4b3114: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b3114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b3118: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b3118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b311c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b311cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b3120: 0x24740d40  addiu       $s4, $v1, 0xD40
    ctx->pc = 0x4b3120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3392));
    // 0x4b3124: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b3124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3128: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4b3128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b312c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b312cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b3130: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4b3130u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4b3134: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b3134u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b3138: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b3138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b313c: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4b313cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4b3140: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b3140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b3144: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4b3144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4b3148: 0x260d2494  addiu       $t5, $s0, 0x2494
    ctx->pc = 0x4b3148u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4b314c: 0x260e2498  addiu       $t6, $s0, 0x2498
    ctx->pc = 0x4b314cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4b3150: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x4b3150u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x72FB14u));
    // 0x4b3154: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b3154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b3158: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x4b3158u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b315c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b315cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b3160: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b3160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b3164: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b3164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3168: 0x260f249c  addiu       $t7, $s0, 0x249C
    ctx->pc = 0x4b3168u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4b316c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b316cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b3170: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4b3170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b3174: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b3174u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b3178: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b3178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b317c: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4b317cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4b3180: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x4b3180u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x4b3184: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4b3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4b3188: 0x8dec0000  lw          $t4, 0x0($t7)
    ctx->pc = 0x4b3188u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b318c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b3190: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4b3190u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3194: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b3194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b3198: 0x1916025  or          $t4, $t4, $s1
    ctx->pc = 0x4b3198u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 17));
    // 0x4b319c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b31a0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b31a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b31a4: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4b31a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4b31a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b31a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b31ac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4b31acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4b31b0: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x4b31b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b31b4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b31b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b31b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b31b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b31bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4b31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b31c0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b31c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b31c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b31c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b31c8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b31cc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4b31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4b31d0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4b31d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b31d4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b31d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b31d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b31d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b31dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b31e0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4b31e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b31e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b31e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b31e8: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4b31e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4b31ec: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4b31ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4b31f0: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4b31f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4b31f4: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b31f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b31f8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4b31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4b31fc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b31fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3200: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b3200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b3204: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x4b3204u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4b3208: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b3208u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b320c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b320cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b3210: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4b3210u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b3214: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3218: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4b3218u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4b321c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x4b321cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x4b3220: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4b3220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4b3224: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x4b3224u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x4b3228: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4b3228u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4b322c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4b322cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b3230: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b3238: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x4b3238u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x4b323c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B323Cu;
    SET_GPR_U32(ctx, 31, 0x4B3244u);
    ctx->pc = 0x4B3240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B323Cu;
    // 0x4b3240: 0xadec0000  sw          $t4, 0x0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B323Cu, 0x4B3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3244u;
label_4b3244:
    // 0x4b3244: 0x860524a2  lh          $a1, 0x24A2($s0)
    ctx->pc = 0x4b3244u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4b3248: 0x860224a0  lh          $v0, 0x24A0($s0)
    ctx->pc = 0x4b3248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4b324c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4b324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b3250: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4b3250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4b3254: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4b3254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3258: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b3258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b325c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b325cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b3260: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3264: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b3264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b3268: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b3268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b326c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b326cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b3270: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b3270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b3274: 0x8642011a  lh          $v0, 0x11A($s2)
    ctx->pc = 0x4b3274u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 282)));
    // 0x4b3278: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x4B3278u;
    {
        const bool branch_taken_0x4b3278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3278) {
            ctx->pc = 0x4B327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3278u;
            // 0x4b327c: 0x96a30000  lhu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3378u;
            goto label_4b3378;
        }
    }
    ctx->pc = 0x4B3280u;
    // 0x4b3280: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B3280u;
    SET_GPR_U32(ctx, 31, 0x4B3288u);
    ctx->pc = 0x4B3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3280u;
    // 0x4b3284: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B3280u, 0x4B3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3288u;
label_4b3288:
    // 0x4b3288: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b3288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b328c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3290: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3294: 0x26100d34  addiu       $s0, $s0, 0xD34
    ctx->pc = 0x4b3294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3380));
    // 0x4b3298: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b329c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4b329cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b32a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b32a4: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x4b32a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b32a8: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4b32a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4b32ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4b32acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b32b0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b32b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b32b4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4b32b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4b32b8: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4b32b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b32bc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4b32bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b32c0: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4b32c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4b32c4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4b32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4b32c8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b32c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b32cc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b32ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b32d0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4b32d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b32d4: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4b32d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4b32d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b32d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b32dc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b32e0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b32e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b32e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b32e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b32e8: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x4b32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x4b32ec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b32ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b32f0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b32f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b32f4: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4b32f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4b32f8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b32f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b32fc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b32fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b3300: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4b3300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4b3304: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4b3304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4b3308: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4B3308u;
    SET_GPR_U32(ctx, 31, 0x4B3310u);
    ctx->pc = 0x4B330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3308u;
    // 0x4b330c: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4B3308u, 0x4B3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3310u;
label_4b3310:
    // 0x4b3310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b3310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3314: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b3314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3318: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4b3318u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b331c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b331cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3320: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4b3320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3324: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3328: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b3328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b332c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3330: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b3330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b3334: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b3334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3338: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4b3338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4b333c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3340: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3344: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b3344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b3348: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b334c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b334cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3350: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x4b3350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x4b3354: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b3354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3358: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b335c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b3360: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b3360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3364: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b3364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b3368: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4b3368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4b336c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b336cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b3370: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4b3370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4b3374: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4b3374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4b3378:
    // 0x4b3378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b337c: 0xa6430118  sh          $v1, 0x118($s2)
    ctx->pc = 0x4b337cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3380: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4b3380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3384: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B3384u;
    SET_GPR_U32(ctx, 31, 0x4B338Cu);
    ctx->pc = 0x4B3388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3384u;
    // 0x4b3388: 0xa642011c  sh          $v0, 0x11C($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 284), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B3384u, 0x4B338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B338Cu;
label_4b338c:
    // 0x4b338c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4B338Cu;
    SET_GPR_U32(ctx, 31, 0x4B3394u);
    ctx->pc = 0x4B3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B338Cu;
    // 0x4b3390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4B338Cu, 0x4B3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3394u;
label_4b3394:
    // 0x4b3394: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4B3394u;
    {
        const bool branch_taken_0x4b3394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3394u;
        // 0x4b3398: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3394) {
            ctx->pc = 0x4B3410u;
            goto label_4b3410;
        }
    }
    ctx->pc = 0x4B339Cu;
    // 0x4b339c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33a0: 0x24500d4c  addiu       $s0, $v0, 0xD4C
    ctx->pc = 0x4b33a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3404));
    // 0x4b33a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4b33a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b33a8: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B33A8u;
    SET_GPR_U32(ctx, 31, 0x4B33B0u);
    ctx->pc = 0x4B33ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33A8u;
    // 0x4b33ac: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B33A8u, 0x4B33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33B0u;
label_4b33b0:
    // 0x4b33b0: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B33B0u;
    {
        const bool branch_taken_0x4b33b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4b33b0) {
            ctx->pc = 0x4B33B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B33B0u;
            // 0x4b33b4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B33F8u;
            goto label_4b33f8;
        }
    }
    ctx->pc = 0x4B33B8u;
    // 0x4b33b8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b33bc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x4b33bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4b33c0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b33c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b33c4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4b33c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4b33c8: 0xa443232c  sh          $v1, 0x232C($v0)
    ctx->pc = 0x4b33c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4b33cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b33ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33d0: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4B33D0u;
    SET_GPR_U32(ctx, 31, 0x4B33D8u);
    ctx->pc = 0x4B33D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33D0u;
    // 0x4b33d4: 0xa44523c4  sh          $a1, 0x23C4($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4B33D0u, 0x4B33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33D8u;
label_4b33d8:
    // 0x4b33d8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B33D8u;
    SET_GPR_U32(ctx, 31, 0x4B33E0u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B33D8u, 0x4B33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33E0u;
label_4b33e0:
    // 0x4b33e0: 0xc126d66  jal         func_49B598
    ctx->pc = 0x4B33E0u;
    SET_GPR_U32(ctx, 31, 0x4B33E8u);
    ctx->pc = 0x4B33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33E0u;
    // 0x4b33e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4B33E0u, 0x4B33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33E8u;
label_4b33e8:
    // 0x4b33e8: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B33E8u;
    SET_GPR_U32(ctx, 31, 0x4B33F0u);
    ctx->pc = 0x4B33ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33E8u;
    // 0x4b33ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B33E8u, 0x4B33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B33F0u;
label_4b33f0:
    // 0x4b33f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B33F0u;
    {
        const bool branch_taken_0x4b33f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B33F0u;
        // 0x4b33f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b33f0) {
            ctx->pc = 0x4B3414u;
            goto label_4b3414;
        }
    }
    ctx->pc = 0x4B33F8u;
label_4b33f8:
    // 0x4b33f8: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4B33F8u;
    SET_GPR_U32(ctx, 31, 0x4B3400u);
    ctx->pc = 0x4B33FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B33F8u;
    // 0x4b33fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4B33F8u, 0x4B3400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3400u;
label_4b3400:
    // 0x4b3400: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3400u;
    {
        const bool branch_taken_0x4b3400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4b3400) {
            ctx->pc = 0x4B3404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3400u;
            // 0x4b3404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3414u;
            goto label_4b3414;
        }
    }
    ctx->pc = 0x4B3408u;
    // 0x4b3408: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B3408u;
    SET_GPR_U32(ctx, 31, 0x4B3410u);
    ctx->pc = 0x4B340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3408u;
    // 0x4b340c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B3408u, 0x4B3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3410u;
label_4b3410:
    // 0x4b3410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b3414:
    // 0x4b3414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b3414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b3418: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b3418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b341c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b341cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b3420: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b3420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3424: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b3424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b3428: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b3428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b342c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B342Cu;
        // 0x4b3430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B342Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3434u;
    // 0x4b3434: 0x0  nop
    ctx->pc = 0x4b3434u;
    // NOP
    ctx->pc = 0x4b3438u;
}
