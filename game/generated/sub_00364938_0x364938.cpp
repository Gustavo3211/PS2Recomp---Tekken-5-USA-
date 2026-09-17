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

// Function: sub_00364938
// Address: 0x364938 - 0x364aa0
void sub_00364938_0x364938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364938_0x364938");
#endif

    switch (ctx->pc) {
        case 0x3649fcu: goto label_3649fc;
        case 0x364a0cu: goto label_364a0c;
        case 0x364a44u: goto label_364a44;
        case 0x364a64u: goto label_364a64;
        default: break;
    }

    ctx->pc = 0x364938u;

    // 0x364938: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x364938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36493c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364940: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x364940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x364944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364948: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x364948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x36494c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36494cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364950: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x364950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x364954: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x364954u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x364958: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x364958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x36495c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x36495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x364960: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x364960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x364964: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x364964u;
    {
        const bool branch_taken_0x364964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x364968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364964u;
        // 0x364968: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364964) {
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x36496Cu;
    // 0x36496c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x36496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x364970: 0x50620043  beql        $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x364970u;
    {
        const bool branch_taken_0x364970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x364970) {
            ctx->pc = 0x364974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364970u;
            // 0x364974: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364A80u;
            goto label_364a80;
        }
    }
    ctx->pc = 0x364978u;
    // 0x364978: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x364978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x36497c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x36497Cu;
    {
        const bool branch_taken_0x36497c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36497c) {
            ctx->pc = 0x364980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36497Cu;
            // 0x364980: 0x960b0006  lhu         $t3, 0x6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3649B0u;
            goto label_3649b0;
        }
    }
    ctx->pc = 0x364984u;
    // 0x364984: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x364984u;
    {
        const bool branch_taken_0x364984 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x364988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364984u;
        // 0x364988: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364984) {
            ctx->pc = 0x3649A0u;
            goto label_3649a0;
        }
    }
    ctx->pc = 0x36498Cu;
    // 0x36498c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36498Cu;
    {
        const bool branch_taken_0x36498c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x364990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36498Cu;
        // 0x364990: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36498c) {
            ctx->pc = 0x3649ACu;
            goto label_3649ac;
        }
    }
    ctx->pc = 0x364994u;
    // 0x364994: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x364994u;
    {
        const bool branch_taken_0x364994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364994u;
        // 0x364998: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364994) {
            ctx->pc = 0x364A84u;
            goto label_364a84;
        }
    }
    ctx->pc = 0x36499Cu;
    // 0x36499c: 0x0  nop
    ctx->pc = 0x36499cu;
    // NOP
label_3649a0:
    // 0x3649a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3649a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3649a4: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3649A4u;
    {
        const bool branch_taken_0x3649a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3649A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3649A4u;
        // 0x3649a8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3649a4) {
            ctx->pc = 0x364A80u;
            goto label_364a80;
        }
    }
    ctx->pc = 0x3649ACu;
label_3649ac:
    // 0x3649ac: 0x960b0006  lhu         $t3, 0x6($s0)
    ctx->pc = 0x3649acu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3649b0:
    // 0x3649b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3649b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649b4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3649b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3649b8: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x3649b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3649bc: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x3649bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x3649c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3649c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3649c4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3649c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3649c8: 0x9607001c  lhu         $a3, 0x1C($s0)
    ctx->pc = 0x3649c8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3649cc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3649ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3649d0: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x3649d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3649d4: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x3649d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3649d8: 0xa7a30014  sh          $v1, 0x14($sp)
    ctx->pc = 0x3649d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3649dc: 0xa7ab0006  sh          $t3, 0x6($sp)
    ctx->pc = 0x3649dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 11));
    // 0x3649e0: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x3649e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x3649e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3649e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3649e8: 0xa7a7001c  sh          $a3, 0x1C($sp)
    ctx->pc = 0x3649e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 7));
    // 0x3649ec: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x3649ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x3649f0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x3649f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x3649f4: 0xc0d8f5e  jal         func_363D78
    ctx->pc = 0x3649F4u;
    SET_GPR_U32(ctx, 31, 0x3649FCu);
    ctx->pc = 0x3649F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3649F4u;
    // 0x3649f8: 0xafaa0018  sw          $t2, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D78u, 0x3649F4u, 0x3649FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3649FCu;
label_3649fc:
    // 0x3649fc: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x3649fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x364a00: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x364a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x364a04: 0xc0d8f70  jal         func_363DC0
    ctx->pc = 0x364A04u;
    SET_GPR_U32(ctx, 31, 0x364A0Cu);
    ctx->pc = 0x364A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A04u;
    // 0x364a08: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363DC0u, 0x364A04u, 0x364A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A0Cu;
label_364a0c:
    // 0x364a0c: 0x8f85c81c  lw          $a1, -0x37E4($gp)
    ctx->pc = 0x364a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952988)));
    // 0x364a10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x364a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x364a14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364a18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x364a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x364a1c: 0x28a40010  slti        $a0, $a1, 0x10
    ctx->pc = 0x364a1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x364a20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x364a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x364a24: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x364A24u;
    {
        const bool branch_taken_0x364a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x364A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A24u;
        // 0x364a28: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a24) {
            ctx->pc = 0x364A74u;
            goto label_364a74;
        }
    }
    ctx->pc = 0x364A2Cu;
    // 0x364a2c: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x364A2Cu;
    {
        const bool branch_taken_0x364a2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x364A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A2Cu;
        // 0x364a30: 0xaf85c81c  sw          $a1, -0x37E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952988), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a2c) {
            ctx->pc = 0x364A50u;
            goto label_364a50;
        }
    }
    ctx->pc = 0x364A34u;
    // 0x364a34: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x364a34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x364a38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x364a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a3c: 0xc0d8f3c  jal         func_363CF0
    ctx->pc = 0x364A3Cu;
    SET_GPR_U32(ctx, 31, 0x364A44u);
    ctx->pc = 0x364A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A3Cu;
    // 0x364a40: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363CF0u, 0x364A3Cu, 0x364A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A44u;
label_364a44:
    // 0x364a44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x364A44u;
    {
        const bool branch_taken_0x364a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A44u;
        // 0x364a48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a44) {
            ctx->pc = 0x364A68u;
            goto label_364a68;
        }
    }
    ctx->pc = 0x364A4Cu;
    // 0x364a4c: 0x0  nop
    ctx->pc = 0x364a4cu;
    // NOP
label_364a50:
    // 0x364a50: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x364a50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x364a54: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x364a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a58: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x364a58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x364a5c: 0xc0d8f4a  jal         func_363D28
    ctx->pc = 0x364A5Cu;
    SET_GPR_U32(ctx, 31, 0x364A64u);
    ctx->pc = 0x364A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A5Cu;
    // 0x364a60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D28u, 0x364A5Cu, 0x364A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A64u;
label_364a64:
    // 0x364a64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364a68:
    // 0x364a68: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x364a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x364a6c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x364a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x364a70: 0x8f85c81c  lw          $a1, -0x37E4($gp)
    ctx->pc = 0x364a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952988)));
label_364a74:
    // 0x364a74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x364a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x364a78: 0xaf85c81c  sw          $a1, -0x37E4($gp)
    ctx->pc = 0x364a78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952988), GPR_U32(ctx, 5));
label_364a7c:
    // 0x364a7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x364a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_364a80:
    // 0x364a80: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x364a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_364a84:
    // 0x364a84: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x364a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a88: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x364a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x364a8c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x364a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x364a90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x364a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x364a94: 0x3e00008  jr          $ra
    ctx->pc = 0x364A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A94u;
        // 0x364a98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364A9Cu;
    // 0x364a9c: 0x0  nop
    ctx->pc = 0x364a9cu;
    // NOP
    ctx->pc = 0x364aa0u;
}
