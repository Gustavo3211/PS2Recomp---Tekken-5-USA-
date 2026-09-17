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

// Function: sub_00327878
// Address: 0x327878 - 0x327998
void sub_00327878_0x327878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327878_0x327878");
#endif

    switch (ctx->pc) {
        case 0x3278f0u: goto label_3278f0;
        case 0x32790cu: goto label_32790c;
        case 0x32797cu: goto label_32797c;
        default: break;
    }

    ctx->pc = 0x327878u;

    // 0x327878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32787c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32787cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x327880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x327884: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x327884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32788c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327890: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x327894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x327894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x327898: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x327898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x32789c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x32789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3278a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3278A0u;
    {
        const bool branch_taken_0x3278a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278A0u;
        // 0x3278a4: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278a0) {
            ctx->pc = 0x3278B8u;
            goto label_3278b8;
        }
    }
    ctx->pc = 0x3278A8u;
    // 0x3278a8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3278a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3278ac: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3278acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3278b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3278B0u;
    {
        const bool branch_taken_0x3278b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278B0u;
        // 0x3278b4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278b0) {
            ctx->pc = 0x3278C8u;
            goto label_3278c8;
        }
    }
    ctx->pc = 0x3278B8u;
label_3278b8:
    // 0x3278b8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3278b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3278bc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3278bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3278c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3278c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3278c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3278c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3278c8:
    // 0x3278c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3278c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3278cc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3278ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3278d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3278d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3278d4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x3278d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3278d8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3278d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3278dc: 0x8e51002c  lw          $s1, 0x2C($s2)
    ctx->pc = 0x3278dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x3278e0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3278E0u;
    {
        const bool branch_taken_0x3278e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278E0u;
        // 0x3278e4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278e0) {
            ctx->pc = 0x32792Cu;
            goto label_32792c;
        }
    }
    ctx->pc = 0x3278E8u;
    // 0x3278e8: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x3278e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3278ec: 0x0  nop
    ctx->pc = 0x3278ecu;
    // NOP
label_3278f0:
    // 0x3278f0: 0x2e22000d  sltiu       $v0, $s1, 0xD
    ctx->pc = 0x3278f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x3278f4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3278f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3278f8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x3278f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x3278fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3278fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x327900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327904: 0xc0ca09e  jal         func_328278
    ctx->pc = 0x327904u;
    SET_GPR_U32(ctx, 31, 0x32790Cu);
    ctx->pc = 0x327908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327904u;
    // 0x327908: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328278u, 0x327904u, 0x32790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32790Cu;
label_32790c:
    // 0x32790c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x32790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x327910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327914: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x327914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327918: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x327918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32791c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32791cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327924: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x327924u;
    {
        const bool branch_taken_0x327924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x327928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327924u;
        // 0x327928: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327924) {
            ctx->pc = 0x3278F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3278f0;
        }
    }
    ctx->pc = 0x32792Cu;
label_32792c:
    // 0x32792c: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x32792cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x327930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327934: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x327934u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x327938: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x327938u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x32793c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32793cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x327940: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x327940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x327944: 0x8f83ccd0  lw          $v1, -0x3330($gp)
    ctx->pc = 0x327944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
    // 0x327948: 0xac850414  sw          $a1, 0x414($a0)
    ctx->pc = 0x327948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x32794c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32794cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x327950: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x327950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x327954: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x327954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x327958: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x327958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x32795c: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x32795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x327960: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x327960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x327964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x327964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32796c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x32796cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x327970: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x327970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x327974: 0xc0c819c  jal         func_320670
    ctx->pc = 0x327974u;
    SET_GPR_U32(ctx, 31, 0x32797Cu);
    ctx->pc = 0x327978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327974u;
    // 0x327978: 0xdc480010  ld          $t0, 0x10($v0) (Delay Slot)
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320670u, 0x327974u, 0x32797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32797Cu;
label_32797c:
    // 0x32797c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32797cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32798c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32798cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327990: 0x3e00008  jr          $ra
    ctx->pc = 0x327990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327990u;
        // 0x327994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327998u;
}
