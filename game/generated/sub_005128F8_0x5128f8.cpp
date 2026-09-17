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

// Function: sub_005128F8
// Address: 0x5128f8 - 0x512a58
void sub_005128F8_0x5128f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005128F8_0x5128f8");
#endif

    switch (ctx->pc) {
        case 0x512978u: goto label_512978;
        case 0x51299cu: goto label_51299c;
        default: break;
    }

    ctx->pc = 0x5128f8u;

    // 0x5128f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5128f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5128fc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x5128fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x512900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x512904: 0x2447ca0c  addiu       $a3, $v0, -0x35F4
    ctx->pc = 0x512904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953484));
    // 0x512908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x512908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x51290c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x51290cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x512910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x512910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x512914: 0x2466ca08  addiu       $a2, $v1, -0x35F8
    ctx->pc = 0x512914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953480));
    // 0x512918: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x512918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x51291c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x51291cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x512920: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x512920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x512924: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x512924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x512928: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x512928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8ECA0Cu));
    // 0x51292c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x51292cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8ECA08u));
    // 0x512930: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x512930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x512934: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x512934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x512938: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x512938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x51293c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x51293cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8ECA0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8ECA0Cu, _value); } while (0);
    // 0x512940: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x512940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x512944: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x512944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x512948: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x512948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x51294c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x51294cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x512950: 0x4400031  bltz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x512950u;
    {
        const bool branch_taken_0x512950 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x512954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512950u;
        // 0x512954: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512950) {
            ctx->pc = 0x512A18u;
            goto label_512a18;
        }
    }
    ctx->pc = 0x512958u;
    // 0x512958: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x512958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x51295c: 0x2452ca00  addiu       $s2, $v0, -0x3600
    ctx->pc = 0x51295cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953472));
    // 0x512960: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x512960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512964: 0x2473ca10  addiu       $s3, $v1, -0x35F0
    ctx->pc = 0x512964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x512968: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x512968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51296c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x51296cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x512970: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x512970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x512974: 0x0  nop
    ctx->pc = 0x512974u;
    // NOP
label_512978:
    // 0x512978: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x512978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x51297c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x51297cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x512980: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x512980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x512984: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x512984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x512988: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x512988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x51298c: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x51298cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x512990: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x512990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x512994: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x512994u;
    SET_GPR_U32(ctx, 31, 0x51299Cu);
    ctx->pc = 0x512998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512994u;
    // 0x512998: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x512994u, 0x51299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51299Cu;
label_51299c:
    // 0x51299c: 0x24423e00  addiu       $v0, $v0, 0x3E00
    ctx->pc = 0x51299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15872));
    // 0x5129a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5129a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5129a4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x5129a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5129a8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5129a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x5129ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5129acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x5129b0: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x5129b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5129b4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x5129b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5129b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5129b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5129bc: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x5129bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x5129c0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x5129c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x5129c4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x5129c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x5129c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x5129c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5129cc: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x5129ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5129d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x5129d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x5129d4: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x5129d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x5129d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5129d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x5129dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x5129dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x5129e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x5129e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5129e4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x5129e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5129e8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x5129e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5129ec: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x5129ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x5129f0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x5129f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5129f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5129f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5129f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5129f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x5129fc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x5129fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x512a00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x512a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x512a04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x512a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x512a08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x512a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x512a0c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x512a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x512a10: 0x443ffd9  bgezl       $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x512A10u;
    {
        const bool branch_taken_0x512a10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x512a10) {
            ctx->pc = 0x512A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x512A10u;
            // 0x512a14: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x512978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_512978;
        }
    }
    ctx->pc = 0x512A18u;
label_512a18:
    // 0x512a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512a1c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x512a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x512a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x512a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x512a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x512a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x512a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x512a2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x512a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x512a30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x512a30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x512a34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x512a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x512a38: 0xac6207c0  sw          $v0, 0x7C0($v1)
    ctx->pc = 0x512a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F07C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F07C0u, _value); } while (0);
    // 0x512a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x512A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512A3Cu;
        // 0x512a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512A44u;
    // 0x512a44: 0x0  nop
    ctx->pc = 0x512a44u;
    // NOP
    // 0x512a48: 0x3e00008  jr          $ra
    ctx->pc = 0x512A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512A50u;
    // 0x512a50: 0x3e00008  jr          $ra
    ctx->pc = 0x512A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512A58u;
}
