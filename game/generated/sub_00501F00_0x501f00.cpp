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

// Function: sub_00501F00
// Address: 0x501f00 - 0x5033f0
void sub_00501F00_0x501f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501F00_0x501f00");
#endif

    switch (ctx->pc) {
        case 0x501fe4u: goto label_501fe4;
        case 0x501ff0u: goto label_501ff0;
        case 0x502044u: goto label_502044;
        case 0x502050u: goto label_502050;
        case 0x502094u: goto label_502094;
        case 0x5020a0u: goto label_5020a0;
        case 0x5020d4u: goto label_5020d4;
        case 0x5020d8u: goto label_5020d8;
        case 0x502110u: goto label_502110;
        case 0x50211cu: goto label_50211c;
        case 0x502120u: goto label_502120;
        case 0x502160u: goto label_502160;
        case 0x50216cu: goto label_50216c;
        case 0x502170u: goto label_502170;
        case 0x5021a4u: goto label_5021a4;
        case 0x5021a8u: goto label_5021a8;
        case 0x5021dcu: goto label_5021dc;
        case 0x5021e0u: goto label_5021e0;
        case 0x502214u: goto label_502214;
        case 0x502218u: goto label_502218;
        case 0x50224cu: goto label_50224c;
        case 0x502250u: goto label_502250;
        case 0x502284u: goto label_502284;
        case 0x502288u: goto label_502288;
        case 0x5022bcu: goto label_5022bc;
        case 0x5022c0u: goto label_5022c0;
        case 0x5022f4u: goto label_5022f4;
        case 0x5022f8u: goto label_5022f8;
        case 0x50232cu: goto label_50232c;
        case 0x502330u: goto label_502330;
        case 0x502364u: goto label_502364;
        case 0x502368u: goto label_502368;
        case 0x50239cu: goto label_50239c;
        case 0x5023a0u: goto label_5023a0;
        case 0x5023d4u: goto label_5023d4;
        case 0x5023d8u: goto label_5023d8;
        case 0x50240cu: goto label_50240c;
        case 0x502410u: goto label_502410;
        case 0x502444u: goto label_502444;
        case 0x502448u: goto label_502448;
        case 0x50247cu: goto label_50247c;
        case 0x502480u: goto label_502480;
        case 0x5024b4u: goto label_5024b4;
        case 0x5024b8u: goto label_5024b8;
        case 0x5024ecu: goto label_5024ec;
        case 0x5024f0u: goto label_5024f0;
        case 0x502524u: goto label_502524;
        case 0x502528u: goto label_502528;
        case 0x50255cu: goto label_50255c;
        case 0x502560u: goto label_502560;
        case 0x502594u: goto label_502594;
        case 0x502598u: goto label_502598;
        case 0x5025ccu: goto label_5025cc;
        case 0x5025d0u: goto label_5025d0;
        case 0x502604u: goto label_502604;
        case 0x502608u: goto label_502608;
        case 0x50263cu: goto label_50263c;
        case 0x502640u: goto label_502640;
        case 0x502674u: goto label_502674;
        case 0x502678u: goto label_502678;
        case 0x5026acu: goto label_5026ac;
        case 0x5026b0u: goto label_5026b0;
        case 0x5026e4u: goto label_5026e4;
        case 0x5026e8u: goto label_5026e8;
        case 0x50271cu: goto label_50271c;
        case 0x502720u: goto label_502720;
        case 0x502754u: goto label_502754;
        case 0x502758u: goto label_502758;
        case 0x50278cu: goto label_50278c;
        case 0x502790u: goto label_502790;
        case 0x5027c4u: goto label_5027c4;
        case 0x5027c8u: goto label_5027c8;
        case 0x5027fcu: goto label_5027fc;
        case 0x502800u: goto label_502800;
        case 0x502834u: goto label_502834;
        case 0x502838u: goto label_502838;
        case 0x50286cu: goto label_50286c;
        case 0x502870u: goto label_502870;
        case 0x5028a4u: goto label_5028a4;
        case 0x5028a8u: goto label_5028a8;
        case 0x5028dcu: goto label_5028dc;
        case 0x5028e0u: goto label_5028e0;
        case 0x502914u: goto label_502914;
        case 0x502918u: goto label_502918;
        case 0x50294cu: goto label_50294c;
        case 0x502950u: goto label_502950;
        case 0x502984u: goto label_502984;
        case 0x502988u: goto label_502988;
        case 0x5029bcu: goto label_5029bc;
        case 0x5029c0u: goto label_5029c0;
        case 0x5029f4u: goto label_5029f4;
        case 0x5029f8u: goto label_5029f8;
        case 0x502a2cu: goto label_502a2c;
        case 0x502a30u: goto label_502a30;
        case 0x502a64u: goto label_502a64;
        case 0x502a68u: goto label_502a68;
        case 0x502a9cu: goto label_502a9c;
        case 0x502aa0u: goto label_502aa0;
        case 0x502ad4u: goto label_502ad4;
        case 0x502ad8u: goto label_502ad8;
        case 0x502b0cu: goto label_502b0c;
        case 0x502b10u: goto label_502b10;
        case 0x502b44u: goto label_502b44;
        case 0x502b48u: goto label_502b48;
        case 0x502b7cu: goto label_502b7c;
        case 0x502b80u: goto label_502b80;
        case 0x502bb4u: goto label_502bb4;
        case 0x502bb8u: goto label_502bb8;
        case 0x502becu: goto label_502bec;
        case 0x502bf0u: goto label_502bf0;
        case 0x502c24u: goto label_502c24;
        case 0x502c28u: goto label_502c28;
        case 0x502c5cu: goto label_502c5c;
        case 0x502c60u: goto label_502c60;
        case 0x502c94u: goto label_502c94;
        case 0x502c98u: goto label_502c98;
        case 0x502cccu: goto label_502ccc;
        case 0x502cd0u: goto label_502cd0;
        case 0x502d04u: goto label_502d04;
        case 0x502d08u: goto label_502d08;
        case 0x502d3cu: goto label_502d3c;
        case 0x502d40u: goto label_502d40;
        case 0x502d74u: goto label_502d74;
        case 0x502d78u: goto label_502d78;
        case 0x502dacu: goto label_502dac;
        case 0x502db0u: goto label_502db0;
        case 0x502de4u: goto label_502de4;
        case 0x502de8u: goto label_502de8;
        case 0x502e1cu: goto label_502e1c;
        case 0x502e20u: goto label_502e20;
        case 0x502e54u: goto label_502e54;
        case 0x502e58u: goto label_502e58;
        case 0x502e8cu: goto label_502e8c;
        case 0x502e90u: goto label_502e90;
        case 0x502ec4u: goto label_502ec4;
        case 0x502ec8u: goto label_502ec8;
        case 0x502efcu: goto label_502efc;
        case 0x502f00u: goto label_502f00;
        case 0x502f34u: goto label_502f34;
        case 0x502f38u: goto label_502f38;
        case 0x502f6cu: goto label_502f6c;
        case 0x502f70u: goto label_502f70;
        case 0x502fa4u: goto label_502fa4;
        case 0x502fa8u: goto label_502fa8;
        case 0x502fdcu: goto label_502fdc;
        case 0x502fe0u: goto label_502fe0;
        case 0x503014u: goto label_503014;
        case 0x503018u: goto label_503018;
        case 0x50304cu: goto label_50304c;
        case 0x503050u: goto label_503050;
        case 0x503084u: goto label_503084;
        case 0x503088u: goto label_503088;
        case 0x5030bcu: goto label_5030bc;
        case 0x5030c0u: goto label_5030c0;
        case 0x5030f4u: goto label_5030f4;
        case 0x5030f8u: goto label_5030f8;
        case 0x50312cu: goto label_50312c;
        case 0x503130u: goto label_503130;
        case 0x503164u: goto label_503164;
        case 0x503168u: goto label_503168;
        case 0x50319cu: goto label_50319c;
        case 0x5031a0u: goto label_5031a0;
        case 0x5031d4u: goto label_5031d4;
        case 0x5031d8u: goto label_5031d8;
        case 0x50320cu: goto label_50320c;
        case 0x503210u: goto label_503210;
        case 0x503244u: goto label_503244;
        case 0x503248u: goto label_503248;
        case 0x50327cu: goto label_50327c;
        case 0x503280u: goto label_503280;
        case 0x5032b4u: goto label_5032b4;
        case 0x5032b8u: goto label_5032b8;
        case 0x5032ecu: goto label_5032ec;
        case 0x5032f0u: goto label_5032f0;
        case 0x503324u: goto label_503324;
        case 0x503328u: goto label_503328;
        case 0x50335cu: goto label_50335c;
        case 0x503360u: goto label_503360;
        case 0x503394u: goto label_503394;
        case 0x503398u: goto label_503398;
        case 0x5033ccu: goto label_5033cc;
        case 0x5033d0u: goto label_5033d0;
        default: break;
    }

    ctx->pc = 0x501f00u;

    // 0x501f00: 0x24850fff  addiu       $a1, $a0, 0xFFF
    ctx->pc = 0x501f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x501f04: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x501f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x501f08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x501f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501f0c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x501f0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x501f10: 0x22b03  sra         $a1, $v0, 12
    ctx->pc = 0x501f10u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 12));
    // 0x501f14: 0x51b00  sll         $v1, $a1, 12
    ctx->pc = 0x501f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x501f18: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x501f18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x501f1c: 0x24a41000  addiu       $a0, $a1, 0x1000
    ctx->pc = 0x501f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
    // 0x501f20: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x501f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x501f24: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x501f24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x501f28: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x501f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x501f2c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x501f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x501f30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x501F30u;
    {
        const bool branch_taken_0x501f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x501F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501F30u;
        // 0x501f34: 0x28a30800  slti        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x501f30) {
            ctx->pc = 0x501F48u;
            goto label_501f48;
        }
    }
    ctx->pc = 0x501F38u;
    // 0x501f38: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x501f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x501f3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x501f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x501f40: 0x3e00008  jr          $ra
    ctx->pc = 0x501F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501F40u;
        // 0x501f44: 0x8442bd70  lh          $v0, -0x4290($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950256)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501F48u;
label_501f48:
    // 0x501f48: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x501F48u;
    {
        const bool branch_taken_0x501f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x501f48) {
            ctx->pc = 0x501F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x501F48u;
            // 0x501f4c: 0x28a20c00  slti        $v0, $a1, 0xC00 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3072) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501F70u;
            goto label_501f70;
        }
    }
    ctx->pc = 0x501F50u;
    // 0x501f50: 0x240307ff  addiu       $v1, $zero, 0x7FF
    ctx->pc = 0x501f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x501f54: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x501f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x501f58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x501f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x501f5c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x501f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x501f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x501f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x501f64: 0x3e00008  jr          $ra
    ctx->pc = 0x501F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501F64u;
        // 0x501f68: 0x8442bd70  lh          $v0, -0x4290($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950256)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501F6Cu;
    // 0x501f6c: 0x0  nop
    ctx->pc = 0x501f6cu;
    // NOP
label_501f70:
    // 0x501f70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x501F70u;
    {
        const bool branch_taken_0x501f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x501F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501F70u;
        // 0x501f74: 0x24030fff  addiu       $v1, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        if (branch_taken_0x501f70) {
            ctx->pc = 0x501F90u;
            goto label_501f90;
        }
    }
    ctx->pc = 0x501F78u;
    // 0x501f78: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x501f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x501f7c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x501f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x501f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x501f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x501f84: 0x8442ad70  lh          $v0, -0x5290($v0)
    ctx->pc = 0x501f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294946160)));
    // 0x501f88: 0x3e00008  jr          $ra
    ctx->pc = 0x501F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501F88u;
        // 0x501f8c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501F90u;
label_501f90:
    // 0x501f90: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x501f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x501f94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x501f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x501f98: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x501f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x501f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x501f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x501fa0: 0x8442bd70  lh          $v0, -0x4290($v0)
    ctx->pc = 0x501fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950256)));
    // 0x501fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x501FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x501FA4u;
        // 0x501fa8: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x501FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x501FACu;
    // 0x501fac: 0x0  nop
    ctx->pc = 0x501facu;
    // NOP
    // 0x501fb0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x501fb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x501fb4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x501fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x501fb8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x501fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x501fbc: 0x34210fdc  ori         $at, $at, 0xFDC
    ctx->pc = 0x501fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4060);
    // 0x501fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x501fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x501fc4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x501fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x501fc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x501fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x501fcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501fd4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x501fd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x501fd8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x501fd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x501fdc: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x501FDCu;
    SET_GPR_U32(ctx, 31, 0x501FE4u);
    ctx->pc = 0x501FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501FDCu;
    // 0x501fe0: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x501FDCu, 0x501FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501FE4u;
label_501fe4:
    // 0x501fe4: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501fe8: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501FE8u;
    SET_GPR_U32(ctx, 31, 0x501FF0u);
    ctx->pc = 0x501FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501FE8u;
    // 0x501fec: 0x2484c8e0  addiu       $a0, $a0, -0x3720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501FE8u, 0x501FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501FF0u;
label_501ff0:
    // 0x501ff0: 0x0  nop
    ctx->pc = 0x501ff0u;
    // NOP
    // 0x501ff4: 0x0  nop
    ctx->pc = 0x501ff4u;
    // NOP
    // 0x501ff8: 0x0  nop
    ctx->pc = 0x501ff8u;
    // NOP
    // 0x501ffc: 0x0  nop
    ctx->pc = 0x501ffcu;
    // NOP
    // 0x502000: 0x0  nop
    ctx->pc = 0x502000u;
    // NOP
    // 0x502004: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502004u;
    {
        const bool branch_taken_0x502004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502004) {
            ctx->pc = 0x501FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501ff0;
        }
    }
    ctx->pc = 0x50200Cu;
    // 0x50200c: 0x0  nop
    ctx->pc = 0x50200cu;
    // NOP
    // 0x502010: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x502010u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x502014: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x502014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x502018: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x502018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x50201c: 0x34210fdc  ori         $at, $at, 0xFDC
    ctx->pc = 0x50201cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4060);
    // 0x502020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x502020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x502024: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x502024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x502028: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x502028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x50202c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50202cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502034: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x502034u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x502038: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x502038u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x50203c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x50203Cu;
    SET_GPR_U32(ctx, 31, 0x502044u);
    ctx->pc = 0x502040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50203Cu;
    // 0x502040: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x50203Cu, 0x502044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502044u;
label_502044:
    // 0x502044: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502048: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502048u;
    SET_GPR_U32(ctx, 31, 0x502050u);
    ctx->pc = 0x50204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502048u;
    // 0x50204c: 0x2484c8f0  addiu       $a0, $a0, -0x3710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502048u, 0x502050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502050u;
label_502050:
    // 0x502050: 0x0  nop
    ctx->pc = 0x502050u;
    // NOP
    // 0x502054: 0x0  nop
    ctx->pc = 0x502054u;
    // NOP
    // 0x502058: 0x0  nop
    ctx->pc = 0x502058u;
    // NOP
    // 0x50205c: 0x0  nop
    ctx->pc = 0x50205cu;
    // NOP
    // 0x502060: 0x0  nop
    ctx->pc = 0x502060u;
    // NOP
    // 0x502064: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502064u;
    {
        const bool branch_taken_0x502064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502064) {
            ctx->pc = 0x502050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502050;
        }
    }
    ctx->pc = 0x50206Cu;
    // 0x50206c: 0x0  nop
    ctx->pc = 0x50206cu;
    // NOP
    // 0x502070: 0x24830fff  addiu       $v1, $a0, 0xFFF
    ctx->pc = 0x502070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x502074: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x502074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x502078: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x502078u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x50207c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50207cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502080: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x502080u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x502084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502088: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x502088u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x50208c: 0xc047540  jal         func_11D500
    ctx->pc = 0x50208Cu;
    SET_GPR_U32(ctx, 31, 0x502094u);
    ctx->pc = 0x502090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50208Cu;
    // 0x502090: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D500u, 0x50208Cu, 0x502094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502094u;
label_502094:
    // 0x502094: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502098: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502098u;
    SET_GPR_U32(ctx, 31, 0x5020A0u);
    ctx->pc = 0x50209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502098u;
    // 0x50209c: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502098u, 0x5020A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5020A0u;
label_5020a0:
    // 0x5020a0: 0x0  nop
    ctx->pc = 0x5020a0u;
    // NOP
    // 0x5020a4: 0x0  nop
    ctx->pc = 0x5020a4u;
    // NOP
    // 0x5020a8: 0x0  nop
    ctx->pc = 0x5020a8u;
    // NOP
    // 0x5020ac: 0x0  nop
    ctx->pc = 0x5020acu;
    // NOP
    // 0x5020b0: 0x0  nop
    ctx->pc = 0x5020b0u;
    // NOP
    // 0x5020b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5020B4u;
    {
        const bool branch_taken_0x5020b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5020b4) {
            ctx->pc = 0x5020A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5020a0;
        }
    }
    ctx->pc = 0x5020BCu;
    // 0x5020bc: 0x0  nop
    ctx->pc = 0x5020bcu;
    // NOP
    // 0x5020c0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5020c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5020c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5020c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5020c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5020c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5020cc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5020CCu;
    SET_GPR_U32(ctx, 31, 0x5020D4u);
    ctx->pc = 0x5020D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5020CCu;
    // 0x5020d0: 0x2484c910  addiu       $a0, $a0, -0x36F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5020CCu, 0x5020D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5020D4u;
label_5020d4:
    // 0x5020d4: 0x0  nop
    ctx->pc = 0x5020d4u;
    // NOP
label_5020d8:
    // 0x5020d8: 0x0  nop
    ctx->pc = 0x5020d8u;
    // NOP
    // 0x5020dc: 0x0  nop
    ctx->pc = 0x5020dcu;
    // NOP
    // 0x5020e0: 0x0  nop
    ctx->pc = 0x5020e0u;
    // NOP
    // 0x5020e4: 0x0  nop
    ctx->pc = 0x5020e4u;
    // NOP
    // 0x5020e8: 0x0  nop
    ctx->pc = 0x5020e8u;
    // NOP
    // 0x5020ec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5020ECu;
    {
        const bool branch_taken_0x5020ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5020ec) {
            ctx->pc = 0x5020D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5020d8;
        }
    }
    ctx->pc = 0x5020F4u;
    // 0x5020f4: 0x0  nop
    ctx->pc = 0x5020f4u;
    // NOP
    // 0x5020f8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x5020f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x5020fc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x5020fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x502100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502108: 0xc0473c8  jal         func_11CF20
    ctx->pc = 0x502108u;
    SET_GPR_U32(ctx, 31, 0x502110u);
    ctx->pc = 0x11CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CF20u, 0x502108u, 0x502110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502110u;
label_502110:
    // 0x502110: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502114: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502114u;
    SET_GPR_U32(ctx, 31, 0x50211Cu);
    ctx->pc = 0x502118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502114u;
    // 0x502118: 0x2484c920  addiu       $a0, $a0, -0x36E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502114u, 0x50211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50211Cu;
label_50211c:
    // 0x50211c: 0x0  nop
    ctx->pc = 0x50211cu;
    // NOP
label_502120:
    // 0x502120: 0x0  nop
    ctx->pc = 0x502120u;
    // NOP
    // 0x502124: 0x0  nop
    ctx->pc = 0x502124u;
    // NOP
    // 0x502128: 0x0  nop
    ctx->pc = 0x502128u;
    // NOP
    // 0x50212c: 0x0  nop
    ctx->pc = 0x50212cu;
    // NOP
    // 0x502130: 0x0  nop
    ctx->pc = 0x502130u;
    // NOP
    // 0x502134: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502134u;
    {
        const bool branch_taken_0x502134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502134) {
            ctx->pc = 0x502120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502120;
        }
    }
    ctx->pc = 0x50213Cu;
    // 0x50213c: 0x0  nop
    ctx->pc = 0x50213cu;
    // NOP
    // 0x502140: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x502140u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x502144: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x502144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x502148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50214c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x50214cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x502150: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x502150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x502154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502158: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x502158u;
    SET_GPR_U32(ctx, 31, 0x502160u);
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x502158u, 0x502160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502160u;
label_502160:
    // 0x502160: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502164: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502164u;
    SET_GPR_U32(ctx, 31, 0x50216Cu);
    ctx->pc = 0x502168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502164u;
    // 0x502168: 0x2484c930  addiu       $a0, $a0, -0x36D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502164u, 0x50216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50216Cu;
label_50216c:
    // 0x50216c: 0x0  nop
    ctx->pc = 0x50216cu;
    // NOP
label_502170:
    // 0x502170: 0x0  nop
    ctx->pc = 0x502170u;
    // NOP
    // 0x502174: 0x0  nop
    ctx->pc = 0x502174u;
    // NOP
    // 0x502178: 0x0  nop
    ctx->pc = 0x502178u;
    // NOP
    // 0x50217c: 0x0  nop
    ctx->pc = 0x50217cu;
    // NOP
    // 0x502180: 0x0  nop
    ctx->pc = 0x502180u;
    // NOP
    // 0x502184: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502184u;
    {
        const bool branch_taken_0x502184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502184) {
            ctx->pc = 0x502170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502170;
        }
    }
    ctx->pc = 0x50218Cu;
    // 0x50218c: 0x0  nop
    ctx->pc = 0x50218cu;
    // NOP
    // 0x502190: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50219c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50219Cu;
    SET_GPR_U32(ctx, 31, 0x5021A4u);
    ctx->pc = 0x5021A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50219Cu;
    // 0x5021a0: 0x2484c940  addiu       $a0, $a0, -0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50219Cu, 0x5021A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5021A4u;
label_5021a4:
    // 0x5021a4: 0x0  nop
    ctx->pc = 0x5021a4u;
    // NOP
label_5021a8:
    // 0x5021a8: 0x0  nop
    ctx->pc = 0x5021a8u;
    // NOP
    // 0x5021ac: 0x0  nop
    ctx->pc = 0x5021acu;
    // NOP
    // 0x5021b0: 0x0  nop
    ctx->pc = 0x5021b0u;
    // NOP
    // 0x5021b4: 0x0  nop
    ctx->pc = 0x5021b4u;
    // NOP
    // 0x5021b8: 0x0  nop
    ctx->pc = 0x5021b8u;
    // NOP
    // 0x5021bc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5021BCu;
    {
        const bool branch_taken_0x5021bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5021bc) {
            ctx->pc = 0x5021A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5021a8;
        }
    }
    ctx->pc = 0x5021C4u;
    // 0x5021c4: 0x0  nop
    ctx->pc = 0x5021c4u;
    // NOP
    // 0x5021c8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5021c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5021cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5021ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5021d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5021d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5021d4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5021D4u;
    SET_GPR_U32(ctx, 31, 0x5021DCu);
    ctx->pc = 0x5021D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5021D4u;
    // 0x5021d8: 0x2484c958  addiu       $a0, $a0, -0x36A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5021D4u, 0x5021DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5021DCu;
label_5021dc:
    // 0x5021dc: 0x0  nop
    ctx->pc = 0x5021dcu;
    // NOP
label_5021e0:
    // 0x5021e0: 0x0  nop
    ctx->pc = 0x5021e0u;
    // NOP
    // 0x5021e4: 0x0  nop
    ctx->pc = 0x5021e4u;
    // NOP
    // 0x5021e8: 0x0  nop
    ctx->pc = 0x5021e8u;
    // NOP
    // 0x5021ec: 0x0  nop
    ctx->pc = 0x5021ecu;
    // NOP
    // 0x5021f0: 0x0  nop
    ctx->pc = 0x5021f0u;
    // NOP
    // 0x5021f4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5021F4u;
    {
        const bool branch_taken_0x5021f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5021f4) {
            ctx->pc = 0x5021E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5021e0;
        }
    }
    ctx->pc = 0x5021FCu;
    // 0x5021fc: 0x0  nop
    ctx->pc = 0x5021fcu;
    // NOP
    // 0x502200: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502204: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50220c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50220Cu;
    SET_GPR_U32(ctx, 31, 0x502214u);
    ctx->pc = 0x502210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50220Cu;
    // 0x502210: 0x2484c970  addiu       $a0, $a0, -0x3690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50220Cu, 0x502214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502214u;
label_502214:
    // 0x502214: 0x0  nop
    ctx->pc = 0x502214u;
    // NOP
label_502218:
    // 0x502218: 0x0  nop
    ctx->pc = 0x502218u;
    // NOP
    // 0x50221c: 0x0  nop
    ctx->pc = 0x50221cu;
    // NOP
    // 0x502220: 0x0  nop
    ctx->pc = 0x502220u;
    // NOP
    // 0x502224: 0x0  nop
    ctx->pc = 0x502224u;
    // NOP
    // 0x502228: 0x0  nop
    ctx->pc = 0x502228u;
    // NOP
    // 0x50222c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50222Cu;
    {
        const bool branch_taken_0x50222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50222c) {
            ctx->pc = 0x502218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502218;
        }
    }
    ctx->pc = 0x502234u;
    // 0x502234: 0x0  nop
    ctx->pc = 0x502234u;
    // NOP
    // 0x502238: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50223c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50223cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502244: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502244u;
    SET_GPR_U32(ctx, 31, 0x50224Cu);
    ctx->pc = 0x502248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502244u;
    // 0x502248: 0x2484c988  addiu       $a0, $a0, -0x3678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502244u, 0x50224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50224Cu;
label_50224c:
    // 0x50224c: 0x0  nop
    ctx->pc = 0x50224cu;
    // NOP
label_502250:
    // 0x502250: 0x0  nop
    ctx->pc = 0x502250u;
    // NOP
    // 0x502254: 0x0  nop
    ctx->pc = 0x502254u;
    // NOP
    // 0x502258: 0x0  nop
    ctx->pc = 0x502258u;
    // NOP
    // 0x50225c: 0x0  nop
    ctx->pc = 0x50225cu;
    // NOP
    // 0x502260: 0x0  nop
    ctx->pc = 0x502260u;
    // NOP
    // 0x502264: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502264u;
    {
        const bool branch_taken_0x502264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502264) {
            ctx->pc = 0x502250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502250;
        }
    }
    ctx->pc = 0x50226Cu;
    // 0x50226c: 0x0  nop
    ctx->pc = 0x50226cu;
    // NOP
    // 0x502270: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502274: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50227c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50227Cu;
    SET_GPR_U32(ctx, 31, 0x502284u);
    ctx->pc = 0x502280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50227Cu;
    // 0x502280: 0x2484c9a0  addiu       $a0, $a0, -0x3660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50227Cu, 0x502284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502284u;
label_502284:
    // 0x502284: 0x0  nop
    ctx->pc = 0x502284u;
    // NOP
label_502288:
    // 0x502288: 0x0  nop
    ctx->pc = 0x502288u;
    // NOP
    // 0x50228c: 0x0  nop
    ctx->pc = 0x50228cu;
    // NOP
    // 0x502290: 0x0  nop
    ctx->pc = 0x502290u;
    // NOP
    // 0x502294: 0x0  nop
    ctx->pc = 0x502294u;
    // NOP
    // 0x502298: 0x0  nop
    ctx->pc = 0x502298u;
    // NOP
    // 0x50229c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50229Cu;
    {
        const bool branch_taken_0x50229c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50229c) {
            ctx->pc = 0x502288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502288;
        }
    }
    ctx->pc = 0x5022A4u;
    // 0x5022a4: 0x0  nop
    ctx->pc = 0x5022a4u;
    // NOP
    // 0x5022a8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5022a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5022ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5022acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5022b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5022b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5022b4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5022B4u;
    SET_GPR_U32(ctx, 31, 0x5022BCu);
    ctx->pc = 0x5022B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5022B4u;
    // 0x5022b8: 0x2484c9b8  addiu       $a0, $a0, -0x3648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5022B4u, 0x5022BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5022BCu;
label_5022bc:
    // 0x5022bc: 0x0  nop
    ctx->pc = 0x5022bcu;
    // NOP
label_5022c0:
    // 0x5022c0: 0x0  nop
    ctx->pc = 0x5022c0u;
    // NOP
    // 0x5022c4: 0x0  nop
    ctx->pc = 0x5022c4u;
    // NOP
    // 0x5022c8: 0x0  nop
    ctx->pc = 0x5022c8u;
    // NOP
    // 0x5022cc: 0x0  nop
    ctx->pc = 0x5022ccu;
    // NOP
    // 0x5022d0: 0x0  nop
    ctx->pc = 0x5022d0u;
    // NOP
    // 0x5022d4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5022D4u;
    {
        const bool branch_taken_0x5022d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5022d4) {
            ctx->pc = 0x5022C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5022c0;
        }
    }
    ctx->pc = 0x5022DCu;
    // 0x5022dc: 0x0  nop
    ctx->pc = 0x5022dcu;
    // NOP
    // 0x5022e0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5022e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5022e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5022e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5022e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5022e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5022ec: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5022ECu;
    SET_GPR_U32(ctx, 31, 0x5022F4u);
    ctx->pc = 0x5022F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5022ECu;
    // 0x5022f0: 0x2484c9d0  addiu       $a0, $a0, -0x3630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5022ECu, 0x5022F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5022F4u;
label_5022f4:
    // 0x5022f4: 0x0  nop
    ctx->pc = 0x5022f4u;
    // NOP
label_5022f8:
    // 0x5022f8: 0x0  nop
    ctx->pc = 0x5022f8u;
    // NOP
    // 0x5022fc: 0x0  nop
    ctx->pc = 0x5022fcu;
    // NOP
    // 0x502300: 0x0  nop
    ctx->pc = 0x502300u;
    // NOP
    // 0x502304: 0x0  nop
    ctx->pc = 0x502304u;
    // NOP
    // 0x502308: 0x0  nop
    ctx->pc = 0x502308u;
    // NOP
    // 0x50230c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50230Cu;
    {
        const bool branch_taken_0x50230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50230c) {
            ctx->pc = 0x5022F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5022f8;
        }
    }
    ctx->pc = 0x502314u;
    // 0x502314: 0x0  nop
    ctx->pc = 0x502314u;
    // NOP
    // 0x502318: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50231c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50231cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502324: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502324u;
    SET_GPR_U32(ctx, 31, 0x50232Cu);
    ctx->pc = 0x502328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502324u;
    // 0x502328: 0x2484c9e8  addiu       $a0, $a0, -0x3618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502324u, 0x50232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50232Cu;
label_50232c:
    // 0x50232c: 0x0  nop
    ctx->pc = 0x50232cu;
    // NOP
label_502330:
    // 0x502330: 0x0  nop
    ctx->pc = 0x502330u;
    // NOP
    // 0x502334: 0x0  nop
    ctx->pc = 0x502334u;
    // NOP
    // 0x502338: 0x0  nop
    ctx->pc = 0x502338u;
    // NOP
    // 0x50233c: 0x0  nop
    ctx->pc = 0x50233cu;
    // NOP
    // 0x502340: 0x0  nop
    ctx->pc = 0x502340u;
    // NOP
    // 0x502344: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502344u;
    {
        const bool branch_taken_0x502344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502344) {
            ctx->pc = 0x502330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502330;
        }
    }
    ctx->pc = 0x50234Cu;
    // 0x50234c: 0x0  nop
    ctx->pc = 0x50234cu;
    // NOP
    // 0x502350: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502354: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50235c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50235Cu;
    SET_GPR_U32(ctx, 31, 0x502364u);
    ctx->pc = 0x502360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50235Cu;
    // 0x502360: 0x2484ca00  addiu       $a0, $a0, -0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50235Cu, 0x502364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502364u;
label_502364:
    // 0x502364: 0x0  nop
    ctx->pc = 0x502364u;
    // NOP
label_502368:
    // 0x502368: 0x0  nop
    ctx->pc = 0x502368u;
    // NOP
    // 0x50236c: 0x0  nop
    ctx->pc = 0x50236cu;
    // NOP
    // 0x502370: 0x0  nop
    ctx->pc = 0x502370u;
    // NOP
    // 0x502374: 0x0  nop
    ctx->pc = 0x502374u;
    // NOP
    // 0x502378: 0x0  nop
    ctx->pc = 0x502378u;
    // NOP
    // 0x50237c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50237Cu;
    {
        const bool branch_taken_0x50237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50237c) {
            ctx->pc = 0x502368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502368;
        }
    }
    ctx->pc = 0x502384u;
    // 0x502384: 0x0  nop
    ctx->pc = 0x502384u;
    // NOP
    // 0x502388: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50238c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50238cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502394: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502394u;
    SET_GPR_U32(ctx, 31, 0x50239Cu);
    ctx->pc = 0x502398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502394u;
    // 0x502398: 0x2484ca18  addiu       $a0, $a0, -0x35E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502394u, 0x50239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50239Cu;
label_50239c:
    // 0x50239c: 0x0  nop
    ctx->pc = 0x50239cu;
    // NOP
label_5023a0:
    // 0x5023a0: 0x0  nop
    ctx->pc = 0x5023a0u;
    // NOP
    // 0x5023a4: 0x0  nop
    ctx->pc = 0x5023a4u;
    // NOP
    // 0x5023a8: 0x0  nop
    ctx->pc = 0x5023a8u;
    // NOP
    // 0x5023ac: 0x0  nop
    ctx->pc = 0x5023acu;
    // NOP
    // 0x5023b0: 0x0  nop
    ctx->pc = 0x5023b0u;
    // NOP
    // 0x5023b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5023B4u;
    {
        const bool branch_taken_0x5023b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5023b4) {
            ctx->pc = 0x5023A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5023a0;
        }
    }
    ctx->pc = 0x5023BCu;
    // 0x5023bc: 0x0  nop
    ctx->pc = 0x5023bcu;
    // NOP
    // 0x5023c0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5023c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5023c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5023c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5023c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5023c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5023cc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5023CCu;
    SET_GPR_U32(ctx, 31, 0x5023D4u);
    ctx->pc = 0x5023D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5023CCu;
    // 0x5023d0: 0x2484ca30  addiu       $a0, $a0, -0x35D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5023CCu, 0x5023D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5023D4u;
label_5023d4:
    // 0x5023d4: 0x0  nop
    ctx->pc = 0x5023d4u;
    // NOP
label_5023d8:
    // 0x5023d8: 0x0  nop
    ctx->pc = 0x5023d8u;
    // NOP
    // 0x5023dc: 0x0  nop
    ctx->pc = 0x5023dcu;
    // NOP
    // 0x5023e0: 0x0  nop
    ctx->pc = 0x5023e0u;
    // NOP
    // 0x5023e4: 0x0  nop
    ctx->pc = 0x5023e4u;
    // NOP
    // 0x5023e8: 0x0  nop
    ctx->pc = 0x5023e8u;
    // NOP
    // 0x5023ec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5023ECu;
    {
        const bool branch_taken_0x5023ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5023ec) {
            ctx->pc = 0x5023D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5023d8;
        }
    }
    ctx->pc = 0x5023F4u;
    // 0x5023f4: 0x0  nop
    ctx->pc = 0x5023f4u;
    // NOP
    // 0x5023f8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5023f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5023fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5023fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502404: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502404u;
    SET_GPR_U32(ctx, 31, 0x50240Cu);
    ctx->pc = 0x502408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502404u;
    // 0x502408: 0x2484ca48  addiu       $a0, $a0, -0x35B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502404u, 0x50240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50240Cu;
label_50240c:
    // 0x50240c: 0x0  nop
    ctx->pc = 0x50240cu;
    // NOP
label_502410:
    // 0x502410: 0x0  nop
    ctx->pc = 0x502410u;
    // NOP
    // 0x502414: 0x0  nop
    ctx->pc = 0x502414u;
    // NOP
    // 0x502418: 0x0  nop
    ctx->pc = 0x502418u;
    // NOP
    // 0x50241c: 0x0  nop
    ctx->pc = 0x50241cu;
    // NOP
    // 0x502420: 0x0  nop
    ctx->pc = 0x502420u;
    // NOP
    // 0x502424: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502424u;
    {
        const bool branch_taken_0x502424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502424) {
            ctx->pc = 0x502410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502410;
        }
    }
    ctx->pc = 0x50242Cu;
    // 0x50242c: 0x0  nop
    ctx->pc = 0x50242cu;
    // NOP
    // 0x502430: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502434: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50243c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50243Cu;
    SET_GPR_U32(ctx, 31, 0x502444u);
    ctx->pc = 0x502440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50243Cu;
    // 0x502440: 0x2484ca60  addiu       $a0, $a0, -0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50243Cu, 0x502444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502444u;
label_502444:
    // 0x502444: 0x0  nop
    ctx->pc = 0x502444u;
    // NOP
label_502448:
    // 0x502448: 0x0  nop
    ctx->pc = 0x502448u;
    // NOP
    // 0x50244c: 0x0  nop
    ctx->pc = 0x50244cu;
    // NOP
    // 0x502450: 0x0  nop
    ctx->pc = 0x502450u;
    // NOP
    // 0x502454: 0x0  nop
    ctx->pc = 0x502454u;
    // NOP
    // 0x502458: 0x0  nop
    ctx->pc = 0x502458u;
    // NOP
    // 0x50245c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50245Cu;
    {
        const bool branch_taken_0x50245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50245c) {
            ctx->pc = 0x502448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502448;
        }
    }
    ctx->pc = 0x502464u;
    // 0x502464: 0x0  nop
    ctx->pc = 0x502464u;
    // NOP
    // 0x502468: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50246c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50246cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502474: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502474u;
    SET_GPR_U32(ctx, 31, 0x50247Cu);
    ctx->pc = 0x502478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502474u;
    // 0x502478: 0x2484ca78  addiu       $a0, $a0, -0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502474u, 0x50247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50247Cu;
label_50247c:
    // 0x50247c: 0x0  nop
    ctx->pc = 0x50247cu;
    // NOP
label_502480:
    // 0x502480: 0x0  nop
    ctx->pc = 0x502480u;
    // NOP
    // 0x502484: 0x0  nop
    ctx->pc = 0x502484u;
    // NOP
    // 0x502488: 0x0  nop
    ctx->pc = 0x502488u;
    // NOP
    // 0x50248c: 0x0  nop
    ctx->pc = 0x50248cu;
    // NOP
    // 0x502490: 0x0  nop
    ctx->pc = 0x502490u;
    // NOP
    // 0x502494: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502494u;
    {
        const bool branch_taken_0x502494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502494) {
            ctx->pc = 0x502480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502480;
        }
    }
    ctx->pc = 0x50249Cu;
    // 0x50249c: 0x0  nop
    ctx->pc = 0x50249cu;
    // NOP
    // 0x5024a0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5024a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5024a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5024a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5024a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5024ac: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5024ACu;
    SET_GPR_U32(ctx, 31, 0x5024B4u);
    ctx->pc = 0x5024B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5024ACu;
    // 0x5024b0: 0x2484ca90  addiu       $a0, $a0, -0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5024ACu, 0x5024B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5024B4u;
label_5024b4:
    // 0x5024b4: 0x0  nop
    ctx->pc = 0x5024b4u;
    // NOP
label_5024b8:
    // 0x5024b8: 0x0  nop
    ctx->pc = 0x5024b8u;
    // NOP
    // 0x5024bc: 0x0  nop
    ctx->pc = 0x5024bcu;
    // NOP
    // 0x5024c0: 0x0  nop
    ctx->pc = 0x5024c0u;
    // NOP
    // 0x5024c4: 0x0  nop
    ctx->pc = 0x5024c4u;
    // NOP
    // 0x5024c8: 0x0  nop
    ctx->pc = 0x5024c8u;
    // NOP
    // 0x5024cc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5024CCu;
    {
        const bool branch_taken_0x5024cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5024cc) {
            ctx->pc = 0x5024B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5024b8;
        }
    }
    ctx->pc = 0x5024D4u;
    // 0x5024d4: 0x0  nop
    ctx->pc = 0x5024d4u;
    // NOP
    // 0x5024d8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5024d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5024dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5024dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5024e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5024e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5024e4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5024E4u;
    SET_GPR_U32(ctx, 31, 0x5024ECu);
    ctx->pc = 0x5024E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5024E4u;
    // 0x5024e8: 0x2484caa8  addiu       $a0, $a0, -0x3558 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5024E4u, 0x5024ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5024ECu;
label_5024ec:
    // 0x5024ec: 0x0  nop
    ctx->pc = 0x5024ecu;
    // NOP
label_5024f0:
    // 0x5024f0: 0x0  nop
    ctx->pc = 0x5024f0u;
    // NOP
    // 0x5024f4: 0x0  nop
    ctx->pc = 0x5024f4u;
    // NOP
    // 0x5024f8: 0x0  nop
    ctx->pc = 0x5024f8u;
    // NOP
    // 0x5024fc: 0x0  nop
    ctx->pc = 0x5024fcu;
    // NOP
    // 0x502500: 0x0  nop
    ctx->pc = 0x502500u;
    // NOP
    // 0x502504: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502504u;
    {
        const bool branch_taken_0x502504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502504) {
            ctx->pc = 0x5024F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5024f0;
        }
    }
    ctx->pc = 0x50250Cu;
    // 0x50250c: 0x0  nop
    ctx->pc = 0x50250cu;
    // NOP
    // 0x502510: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50251c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50251Cu;
    SET_GPR_U32(ctx, 31, 0x502524u);
    ctx->pc = 0x502520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50251Cu;
    // 0x502520: 0x2484cac0  addiu       $a0, $a0, -0x3540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50251Cu, 0x502524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502524u;
label_502524:
    // 0x502524: 0x0  nop
    ctx->pc = 0x502524u;
    // NOP
label_502528:
    // 0x502528: 0x0  nop
    ctx->pc = 0x502528u;
    // NOP
    // 0x50252c: 0x0  nop
    ctx->pc = 0x50252cu;
    // NOP
    // 0x502530: 0x0  nop
    ctx->pc = 0x502530u;
    // NOP
    // 0x502534: 0x0  nop
    ctx->pc = 0x502534u;
    // NOP
    // 0x502538: 0x0  nop
    ctx->pc = 0x502538u;
    // NOP
    // 0x50253c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50253Cu;
    {
        const bool branch_taken_0x50253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50253c) {
            ctx->pc = 0x502528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502528;
        }
    }
    ctx->pc = 0x502544u;
    // 0x502544: 0x0  nop
    ctx->pc = 0x502544u;
    // NOP
    // 0x502548: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50254c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50254cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502554: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502554u;
    SET_GPR_U32(ctx, 31, 0x50255Cu);
    ctx->pc = 0x502558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502554u;
    // 0x502558: 0x2484cad8  addiu       $a0, $a0, -0x3528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502554u, 0x50255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50255Cu;
label_50255c:
    // 0x50255c: 0x0  nop
    ctx->pc = 0x50255cu;
    // NOP
label_502560:
    // 0x502560: 0x0  nop
    ctx->pc = 0x502560u;
    // NOP
    // 0x502564: 0x0  nop
    ctx->pc = 0x502564u;
    // NOP
    // 0x502568: 0x0  nop
    ctx->pc = 0x502568u;
    // NOP
    // 0x50256c: 0x0  nop
    ctx->pc = 0x50256cu;
    // NOP
    // 0x502570: 0x0  nop
    ctx->pc = 0x502570u;
    // NOP
    // 0x502574: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502574u;
    {
        const bool branch_taken_0x502574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502574) {
            ctx->pc = 0x502560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502560;
        }
    }
    ctx->pc = 0x50257Cu;
    // 0x50257c: 0x0  nop
    ctx->pc = 0x50257cu;
    // NOP
    // 0x502580: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502584: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50258c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50258Cu;
    SET_GPR_U32(ctx, 31, 0x502594u);
    ctx->pc = 0x502590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50258Cu;
    // 0x502590: 0x2484cae8  addiu       $a0, $a0, -0x3518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50258Cu, 0x502594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502594u;
label_502594:
    // 0x502594: 0x0  nop
    ctx->pc = 0x502594u;
    // NOP
label_502598:
    // 0x502598: 0x0  nop
    ctx->pc = 0x502598u;
    // NOP
    // 0x50259c: 0x0  nop
    ctx->pc = 0x50259cu;
    // NOP
    // 0x5025a0: 0x0  nop
    ctx->pc = 0x5025a0u;
    // NOP
    // 0x5025a4: 0x0  nop
    ctx->pc = 0x5025a4u;
    // NOP
    // 0x5025a8: 0x0  nop
    ctx->pc = 0x5025a8u;
    // NOP
    // 0x5025ac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5025ACu;
    {
        const bool branch_taken_0x5025ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5025ac) {
            ctx->pc = 0x502598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502598;
        }
    }
    ctx->pc = 0x5025B4u;
    // 0x5025b4: 0x0  nop
    ctx->pc = 0x5025b4u;
    // NOP
    // 0x5025b8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5025b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5025bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5025bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5025c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5025c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5025c4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5025C4u;
    SET_GPR_U32(ctx, 31, 0x5025CCu);
    ctx->pc = 0x5025C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5025C4u;
    // 0x5025c8: 0x2484cb00  addiu       $a0, $a0, -0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5025C4u, 0x5025CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5025CCu;
label_5025cc:
    // 0x5025cc: 0x0  nop
    ctx->pc = 0x5025ccu;
    // NOP
label_5025d0:
    // 0x5025d0: 0x0  nop
    ctx->pc = 0x5025d0u;
    // NOP
    // 0x5025d4: 0x0  nop
    ctx->pc = 0x5025d4u;
    // NOP
    // 0x5025d8: 0x0  nop
    ctx->pc = 0x5025d8u;
    // NOP
    // 0x5025dc: 0x0  nop
    ctx->pc = 0x5025dcu;
    // NOP
    // 0x5025e0: 0x0  nop
    ctx->pc = 0x5025e0u;
    // NOP
    // 0x5025e4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5025E4u;
    {
        const bool branch_taken_0x5025e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5025e4) {
            ctx->pc = 0x5025D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5025d0;
        }
    }
    ctx->pc = 0x5025ECu;
    // 0x5025ec: 0x0  nop
    ctx->pc = 0x5025ecu;
    // NOP
    // 0x5025f0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5025f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5025f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5025f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5025f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5025f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5025fc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5025FCu;
    SET_GPR_U32(ctx, 31, 0x502604u);
    ctx->pc = 0x502600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5025FCu;
    // 0x502600: 0x2484cb10  addiu       $a0, $a0, -0x34F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5025FCu, 0x502604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502604u;
label_502604:
    // 0x502604: 0x0  nop
    ctx->pc = 0x502604u;
    // NOP
label_502608:
    // 0x502608: 0x0  nop
    ctx->pc = 0x502608u;
    // NOP
    // 0x50260c: 0x0  nop
    ctx->pc = 0x50260cu;
    // NOP
    // 0x502610: 0x0  nop
    ctx->pc = 0x502610u;
    // NOP
    // 0x502614: 0x0  nop
    ctx->pc = 0x502614u;
    // NOP
    // 0x502618: 0x0  nop
    ctx->pc = 0x502618u;
    // NOP
    // 0x50261c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50261Cu;
    {
        const bool branch_taken_0x50261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50261c) {
            ctx->pc = 0x502608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502608;
        }
    }
    ctx->pc = 0x502624u;
    // 0x502624: 0x0  nop
    ctx->pc = 0x502624u;
    // NOP
    // 0x502628: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50262c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502634: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502634u;
    SET_GPR_U32(ctx, 31, 0x50263Cu);
    ctx->pc = 0x502638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502634u;
    // 0x502638: 0x2484cb28  addiu       $a0, $a0, -0x34D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502634u, 0x50263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50263Cu;
label_50263c:
    // 0x50263c: 0x0  nop
    ctx->pc = 0x50263cu;
    // NOP
label_502640:
    // 0x502640: 0x0  nop
    ctx->pc = 0x502640u;
    // NOP
    // 0x502644: 0x0  nop
    ctx->pc = 0x502644u;
    // NOP
    // 0x502648: 0x0  nop
    ctx->pc = 0x502648u;
    // NOP
    // 0x50264c: 0x0  nop
    ctx->pc = 0x50264cu;
    // NOP
    // 0x502650: 0x0  nop
    ctx->pc = 0x502650u;
    // NOP
    // 0x502654: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502654u;
    {
        const bool branch_taken_0x502654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502654) {
            ctx->pc = 0x502640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502640;
        }
    }
    ctx->pc = 0x50265Cu;
    // 0x50265c: 0x0  nop
    ctx->pc = 0x50265cu;
    // NOP
    // 0x502660: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50266c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50266Cu;
    SET_GPR_U32(ctx, 31, 0x502674u);
    ctx->pc = 0x502670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50266Cu;
    // 0x502670: 0x2484cb40  addiu       $a0, $a0, -0x34C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50266Cu, 0x502674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502674u;
label_502674:
    // 0x502674: 0x0  nop
    ctx->pc = 0x502674u;
    // NOP
label_502678:
    // 0x502678: 0x0  nop
    ctx->pc = 0x502678u;
    // NOP
    // 0x50267c: 0x0  nop
    ctx->pc = 0x50267cu;
    // NOP
    // 0x502680: 0x0  nop
    ctx->pc = 0x502680u;
    // NOP
    // 0x502684: 0x0  nop
    ctx->pc = 0x502684u;
    // NOP
    // 0x502688: 0x0  nop
    ctx->pc = 0x502688u;
    // NOP
    // 0x50268c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50268Cu;
    {
        const bool branch_taken_0x50268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50268c) {
            ctx->pc = 0x502678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502678;
        }
    }
    ctx->pc = 0x502694u;
    // 0x502694: 0x0  nop
    ctx->pc = 0x502694u;
    // NOP
    // 0x502698: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50269c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50269cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5026a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5026a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5026a4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5026A4u;
    SET_GPR_U32(ctx, 31, 0x5026ACu);
    ctx->pc = 0x5026A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5026A4u;
    // 0x5026a8: 0x2484cb58  addiu       $a0, $a0, -0x34A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5026A4u, 0x5026ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5026ACu;
label_5026ac:
    // 0x5026ac: 0x0  nop
    ctx->pc = 0x5026acu;
    // NOP
label_5026b0:
    // 0x5026b0: 0x0  nop
    ctx->pc = 0x5026b0u;
    // NOP
    // 0x5026b4: 0x0  nop
    ctx->pc = 0x5026b4u;
    // NOP
    // 0x5026b8: 0x0  nop
    ctx->pc = 0x5026b8u;
    // NOP
    // 0x5026bc: 0x0  nop
    ctx->pc = 0x5026bcu;
    // NOP
    // 0x5026c0: 0x0  nop
    ctx->pc = 0x5026c0u;
    // NOP
    // 0x5026c4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5026C4u;
    {
        const bool branch_taken_0x5026c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5026c4) {
            ctx->pc = 0x5026B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5026b0;
        }
    }
    ctx->pc = 0x5026CCu;
    // 0x5026cc: 0x0  nop
    ctx->pc = 0x5026ccu;
    // NOP
    // 0x5026d0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5026d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5026d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5026d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5026d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5026d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5026dc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5026DCu;
    SET_GPR_U32(ctx, 31, 0x5026E4u);
    ctx->pc = 0x5026E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5026DCu;
    // 0x5026e0: 0x2484cb70  addiu       $a0, $a0, -0x3490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5026DCu, 0x5026E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5026E4u;
label_5026e4:
    // 0x5026e4: 0x0  nop
    ctx->pc = 0x5026e4u;
    // NOP
label_5026e8:
    // 0x5026e8: 0x0  nop
    ctx->pc = 0x5026e8u;
    // NOP
    // 0x5026ec: 0x0  nop
    ctx->pc = 0x5026ecu;
    // NOP
    // 0x5026f0: 0x0  nop
    ctx->pc = 0x5026f0u;
    // NOP
    // 0x5026f4: 0x0  nop
    ctx->pc = 0x5026f4u;
    // NOP
    // 0x5026f8: 0x0  nop
    ctx->pc = 0x5026f8u;
    // NOP
    // 0x5026fc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5026FCu;
    {
        const bool branch_taken_0x5026fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5026fc) {
            ctx->pc = 0x5026E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5026e8;
        }
    }
    ctx->pc = 0x502704u;
    // 0x502704: 0x0  nop
    ctx->pc = 0x502704u;
    // NOP
    // 0x502708: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50270c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50270cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502714: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502714u;
    SET_GPR_U32(ctx, 31, 0x50271Cu);
    ctx->pc = 0x502718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502714u;
    // 0x502718: 0x2484cb88  addiu       $a0, $a0, -0x3478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502714u, 0x50271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50271Cu;
label_50271c:
    // 0x50271c: 0x0  nop
    ctx->pc = 0x50271cu;
    // NOP
label_502720:
    // 0x502720: 0x0  nop
    ctx->pc = 0x502720u;
    // NOP
    // 0x502724: 0x0  nop
    ctx->pc = 0x502724u;
    // NOP
    // 0x502728: 0x0  nop
    ctx->pc = 0x502728u;
    // NOP
    // 0x50272c: 0x0  nop
    ctx->pc = 0x50272cu;
    // NOP
    // 0x502730: 0x0  nop
    ctx->pc = 0x502730u;
    // NOP
    // 0x502734: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502734u;
    {
        const bool branch_taken_0x502734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502734) {
            ctx->pc = 0x502720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502720;
        }
    }
    ctx->pc = 0x50273Cu;
    // 0x50273c: 0x0  nop
    ctx->pc = 0x50273cu;
    // NOP
    // 0x502740: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502744: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50274c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50274Cu;
    SET_GPR_U32(ctx, 31, 0x502754u);
    ctx->pc = 0x502750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50274Cu;
    // 0x502750: 0x2484cb98  addiu       $a0, $a0, -0x3468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50274Cu, 0x502754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502754u;
label_502754:
    // 0x502754: 0x0  nop
    ctx->pc = 0x502754u;
    // NOP
label_502758:
    // 0x502758: 0x0  nop
    ctx->pc = 0x502758u;
    // NOP
    // 0x50275c: 0x0  nop
    ctx->pc = 0x50275cu;
    // NOP
    // 0x502760: 0x0  nop
    ctx->pc = 0x502760u;
    // NOP
    // 0x502764: 0x0  nop
    ctx->pc = 0x502764u;
    // NOP
    // 0x502768: 0x0  nop
    ctx->pc = 0x502768u;
    // NOP
    // 0x50276c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50276Cu;
    {
        const bool branch_taken_0x50276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50276c) {
            ctx->pc = 0x502758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502758;
        }
    }
    ctx->pc = 0x502774u;
    // 0x502774: 0x0  nop
    ctx->pc = 0x502774u;
    // NOP
    // 0x502778: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50277c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50277cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502784: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502784u;
    SET_GPR_U32(ctx, 31, 0x50278Cu);
    ctx->pc = 0x502788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502784u;
    // 0x502788: 0x2484cbb0  addiu       $a0, $a0, -0x3450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502784u, 0x50278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50278Cu;
label_50278c:
    // 0x50278c: 0x0  nop
    ctx->pc = 0x50278cu;
    // NOP
label_502790:
    // 0x502790: 0x0  nop
    ctx->pc = 0x502790u;
    // NOP
    // 0x502794: 0x0  nop
    ctx->pc = 0x502794u;
    // NOP
    // 0x502798: 0x0  nop
    ctx->pc = 0x502798u;
    // NOP
    // 0x50279c: 0x0  nop
    ctx->pc = 0x50279cu;
    // NOP
    // 0x5027a0: 0x0  nop
    ctx->pc = 0x5027a0u;
    // NOP
    // 0x5027a4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5027A4u;
    {
        const bool branch_taken_0x5027a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5027a4) {
            ctx->pc = 0x502790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502790;
        }
    }
    ctx->pc = 0x5027ACu;
    // 0x5027ac: 0x0  nop
    ctx->pc = 0x5027acu;
    // NOP
    // 0x5027b0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5027b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5027b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5027b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5027b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5027b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5027bc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5027BCu;
    SET_GPR_U32(ctx, 31, 0x5027C4u);
    ctx->pc = 0x5027C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5027BCu;
    // 0x5027c0: 0x2484cbc0  addiu       $a0, $a0, -0x3440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5027BCu, 0x5027C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5027C4u;
label_5027c4:
    // 0x5027c4: 0x0  nop
    ctx->pc = 0x5027c4u;
    // NOP
label_5027c8:
    // 0x5027c8: 0x0  nop
    ctx->pc = 0x5027c8u;
    // NOP
    // 0x5027cc: 0x0  nop
    ctx->pc = 0x5027ccu;
    // NOP
    // 0x5027d0: 0x0  nop
    ctx->pc = 0x5027d0u;
    // NOP
    // 0x5027d4: 0x0  nop
    ctx->pc = 0x5027d4u;
    // NOP
    // 0x5027d8: 0x0  nop
    ctx->pc = 0x5027d8u;
    // NOP
    // 0x5027dc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5027DCu;
    {
        const bool branch_taken_0x5027dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5027dc) {
            ctx->pc = 0x5027C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5027c8;
        }
    }
    ctx->pc = 0x5027E4u;
    // 0x5027e4: 0x0  nop
    ctx->pc = 0x5027e4u;
    // NOP
    // 0x5027e8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5027e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5027ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5027ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5027f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5027f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5027f4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5027F4u;
    SET_GPR_U32(ctx, 31, 0x5027FCu);
    ctx->pc = 0x5027F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5027F4u;
    // 0x5027f8: 0x2484cbd8  addiu       $a0, $a0, -0x3428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5027F4u, 0x5027FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5027FCu;
label_5027fc:
    // 0x5027fc: 0x0  nop
    ctx->pc = 0x5027fcu;
    // NOP
label_502800:
    // 0x502800: 0x0  nop
    ctx->pc = 0x502800u;
    // NOP
    // 0x502804: 0x0  nop
    ctx->pc = 0x502804u;
    // NOP
    // 0x502808: 0x0  nop
    ctx->pc = 0x502808u;
    // NOP
    // 0x50280c: 0x0  nop
    ctx->pc = 0x50280cu;
    // NOP
    // 0x502810: 0x0  nop
    ctx->pc = 0x502810u;
    // NOP
    // 0x502814: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502814u;
    {
        const bool branch_taken_0x502814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502814) {
            ctx->pc = 0x502800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502800;
        }
    }
    ctx->pc = 0x50281Cu;
    // 0x50281c: 0x0  nop
    ctx->pc = 0x50281cu;
    // NOP
    // 0x502820: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50282c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50282Cu;
    SET_GPR_U32(ctx, 31, 0x502834u);
    ctx->pc = 0x502830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50282Cu;
    // 0x502830: 0x2484cbf0  addiu       $a0, $a0, -0x3410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50282Cu, 0x502834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502834u;
label_502834:
    // 0x502834: 0x0  nop
    ctx->pc = 0x502834u;
    // NOP
label_502838:
    // 0x502838: 0x0  nop
    ctx->pc = 0x502838u;
    // NOP
    // 0x50283c: 0x0  nop
    ctx->pc = 0x50283cu;
    // NOP
    // 0x502840: 0x0  nop
    ctx->pc = 0x502840u;
    // NOP
    // 0x502844: 0x0  nop
    ctx->pc = 0x502844u;
    // NOP
    // 0x502848: 0x0  nop
    ctx->pc = 0x502848u;
    // NOP
    // 0x50284c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50284Cu;
    {
        const bool branch_taken_0x50284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50284c) {
            ctx->pc = 0x502838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502838;
        }
    }
    ctx->pc = 0x502854u;
    // 0x502854: 0x0  nop
    ctx->pc = 0x502854u;
    // NOP
    // 0x502858: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50285c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50285cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502864: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502864u;
    SET_GPR_U32(ctx, 31, 0x50286Cu);
    ctx->pc = 0x502868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502864u;
    // 0x502868: 0x2484cc08  addiu       $a0, $a0, -0x33F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502864u, 0x50286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50286Cu;
label_50286c:
    // 0x50286c: 0x0  nop
    ctx->pc = 0x50286cu;
    // NOP
label_502870:
    // 0x502870: 0x0  nop
    ctx->pc = 0x502870u;
    // NOP
    // 0x502874: 0x0  nop
    ctx->pc = 0x502874u;
    // NOP
    // 0x502878: 0x0  nop
    ctx->pc = 0x502878u;
    // NOP
    // 0x50287c: 0x0  nop
    ctx->pc = 0x50287cu;
    // NOP
    // 0x502880: 0x0  nop
    ctx->pc = 0x502880u;
    // NOP
    // 0x502884: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502884u;
    {
        const bool branch_taken_0x502884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502884) {
            ctx->pc = 0x502870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502870;
        }
    }
    ctx->pc = 0x50288Cu;
    // 0x50288c: 0x0  nop
    ctx->pc = 0x50288cu;
    // NOP
    // 0x502890: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502894: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50289c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50289Cu;
    SET_GPR_U32(ctx, 31, 0x5028A4u);
    ctx->pc = 0x5028A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50289Cu;
    // 0x5028a0: 0x2484cc20  addiu       $a0, $a0, -0x33E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50289Cu, 0x5028A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5028A4u;
label_5028a4:
    // 0x5028a4: 0x0  nop
    ctx->pc = 0x5028a4u;
    // NOP
label_5028a8:
    // 0x5028a8: 0x0  nop
    ctx->pc = 0x5028a8u;
    // NOP
    // 0x5028ac: 0x0  nop
    ctx->pc = 0x5028acu;
    // NOP
    // 0x5028b0: 0x0  nop
    ctx->pc = 0x5028b0u;
    // NOP
    // 0x5028b4: 0x0  nop
    ctx->pc = 0x5028b4u;
    // NOP
    // 0x5028b8: 0x0  nop
    ctx->pc = 0x5028b8u;
    // NOP
    // 0x5028bc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5028BCu;
    {
        const bool branch_taken_0x5028bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5028bc) {
            ctx->pc = 0x5028A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5028a8;
        }
    }
    ctx->pc = 0x5028C4u;
    // 0x5028c4: 0x0  nop
    ctx->pc = 0x5028c4u;
    // NOP
    // 0x5028c8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5028c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5028cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5028ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5028d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5028d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5028d4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5028D4u;
    SET_GPR_U32(ctx, 31, 0x5028DCu);
    ctx->pc = 0x5028D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5028D4u;
    // 0x5028d8: 0x2484cc38  addiu       $a0, $a0, -0x33C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5028D4u, 0x5028DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5028DCu;
label_5028dc:
    // 0x5028dc: 0x0  nop
    ctx->pc = 0x5028dcu;
    // NOP
label_5028e0:
    // 0x5028e0: 0x0  nop
    ctx->pc = 0x5028e0u;
    // NOP
    // 0x5028e4: 0x0  nop
    ctx->pc = 0x5028e4u;
    // NOP
    // 0x5028e8: 0x0  nop
    ctx->pc = 0x5028e8u;
    // NOP
    // 0x5028ec: 0x0  nop
    ctx->pc = 0x5028ecu;
    // NOP
    // 0x5028f0: 0x0  nop
    ctx->pc = 0x5028f0u;
    // NOP
    // 0x5028f4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5028F4u;
    {
        const bool branch_taken_0x5028f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5028f4) {
            ctx->pc = 0x5028E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5028e0;
        }
    }
    ctx->pc = 0x5028FCu;
    // 0x5028fc: 0x0  nop
    ctx->pc = 0x5028fcu;
    // NOP
    // 0x502900: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50290c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50290Cu;
    SET_GPR_U32(ctx, 31, 0x502914u);
    ctx->pc = 0x502910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50290Cu;
    // 0x502910: 0x2484cc58  addiu       $a0, $a0, -0x33A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50290Cu, 0x502914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502914u;
label_502914:
    // 0x502914: 0x0  nop
    ctx->pc = 0x502914u;
    // NOP
label_502918:
    // 0x502918: 0x0  nop
    ctx->pc = 0x502918u;
    // NOP
    // 0x50291c: 0x0  nop
    ctx->pc = 0x50291cu;
    // NOP
    // 0x502920: 0x0  nop
    ctx->pc = 0x502920u;
    // NOP
    // 0x502924: 0x0  nop
    ctx->pc = 0x502924u;
    // NOP
    // 0x502928: 0x0  nop
    ctx->pc = 0x502928u;
    // NOP
    // 0x50292c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50292Cu;
    {
        const bool branch_taken_0x50292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50292c) {
            ctx->pc = 0x502918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502918;
        }
    }
    ctx->pc = 0x502934u;
    // 0x502934: 0x0  nop
    ctx->pc = 0x502934u;
    // NOP
    // 0x502938: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50293c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50293cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502944: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502944u;
    SET_GPR_U32(ctx, 31, 0x50294Cu);
    ctx->pc = 0x502948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502944u;
    // 0x502948: 0x2484cc78  addiu       $a0, $a0, -0x3388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502944u, 0x50294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50294Cu;
label_50294c:
    // 0x50294c: 0x0  nop
    ctx->pc = 0x50294cu;
    // NOP
label_502950:
    // 0x502950: 0x0  nop
    ctx->pc = 0x502950u;
    // NOP
    // 0x502954: 0x0  nop
    ctx->pc = 0x502954u;
    // NOP
    // 0x502958: 0x0  nop
    ctx->pc = 0x502958u;
    // NOP
    // 0x50295c: 0x0  nop
    ctx->pc = 0x50295cu;
    // NOP
    // 0x502960: 0x0  nop
    ctx->pc = 0x502960u;
    // NOP
    // 0x502964: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502964u;
    {
        const bool branch_taken_0x502964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502964) {
            ctx->pc = 0x502950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502950;
        }
    }
    ctx->pc = 0x50296Cu;
    // 0x50296c: 0x0  nop
    ctx->pc = 0x50296cu;
    // NOP
    // 0x502970: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502974: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50297c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50297Cu;
    SET_GPR_U32(ctx, 31, 0x502984u);
    ctx->pc = 0x502980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50297Cu;
    // 0x502980: 0x2484cc98  addiu       $a0, $a0, -0x3368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50297Cu, 0x502984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502984u;
label_502984:
    // 0x502984: 0x0  nop
    ctx->pc = 0x502984u;
    // NOP
label_502988:
    // 0x502988: 0x0  nop
    ctx->pc = 0x502988u;
    // NOP
    // 0x50298c: 0x0  nop
    ctx->pc = 0x50298cu;
    // NOP
    // 0x502990: 0x0  nop
    ctx->pc = 0x502990u;
    // NOP
    // 0x502994: 0x0  nop
    ctx->pc = 0x502994u;
    // NOP
    // 0x502998: 0x0  nop
    ctx->pc = 0x502998u;
    // NOP
    // 0x50299c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50299Cu;
    {
        const bool branch_taken_0x50299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50299c) {
            ctx->pc = 0x502988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502988;
        }
    }
    ctx->pc = 0x5029A4u;
    // 0x5029a4: 0x0  nop
    ctx->pc = 0x5029a4u;
    // NOP
    // 0x5029a8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5029a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5029ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5029acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5029b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5029b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5029b4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5029B4u;
    SET_GPR_U32(ctx, 31, 0x5029BCu);
    ctx->pc = 0x5029B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5029B4u;
    // 0x5029b8: 0x2484ccb0  addiu       $a0, $a0, -0x3350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5029B4u, 0x5029BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5029BCu;
label_5029bc:
    // 0x5029bc: 0x0  nop
    ctx->pc = 0x5029bcu;
    // NOP
label_5029c0:
    // 0x5029c0: 0x0  nop
    ctx->pc = 0x5029c0u;
    // NOP
    // 0x5029c4: 0x0  nop
    ctx->pc = 0x5029c4u;
    // NOP
    // 0x5029c8: 0x0  nop
    ctx->pc = 0x5029c8u;
    // NOP
    // 0x5029cc: 0x0  nop
    ctx->pc = 0x5029ccu;
    // NOP
    // 0x5029d0: 0x0  nop
    ctx->pc = 0x5029d0u;
    // NOP
    // 0x5029d4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5029D4u;
    {
        const bool branch_taken_0x5029d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5029d4) {
            ctx->pc = 0x5029C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5029c0;
        }
    }
    ctx->pc = 0x5029DCu;
    // 0x5029dc: 0x0  nop
    ctx->pc = 0x5029dcu;
    // NOP
    // 0x5029e0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5029e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5029e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5029e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5029e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5029e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5029ec: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5029ECu;
    SET_GPR_U32(ctx, 31, 0x5029F4u);
    ctx->pc = 0x5029F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5029ECu;
    // 0x5029f0: 0x2484ccd0  addiu       $a0, $a0, -0x3330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5029ECu, 0x5029F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5029F4u;
label_5029f4:
    // 0x5029f4: 0x0  nop
    ctx->pc = 0x5029f4u;
    // NOP
label_5029f8:
    // 0x5029f8: 0x0  nop
    ctx->pc = 0x5029f8u;
    // NOP
    // 0x5029fc: 0x0  nop
    ctx->pc = 0x5029fcu;
    // NOP
    // 0x502a00: 0x0  nop
    ctx->pc = 0x502a00u;
    // NOP
    // 0x502a04: 0x0  nop
    ctx->pc = 0x502a04u;
    // NOP
    // 0x502a08: 0x0  nop
    ctx->pc = 0x502a08u;
    // NOP
    // 0x502a0c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502A0Cu;
    {
        const bool branch_taken_0x502a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502a0c) {
            ctx->pc = 0x5029F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5029f8;
        }
    }
    ctx->pc = 0x502A14u;
    // 0x502a14: 0x0  nop
    ctx->pc = 0x502a14u;
    // NOP
    // 0x502a18: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502a24: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502A24u;
    SET_GPR_U32(ctx, 31, 0x502A2Cu);
    ctx->pc = 0x502A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502A24u;
    // 0x502a28: 0x2484cce8  addiu       $a0, $a0, -0x3318 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502A24u, 0x502A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502A2Cu;
label_502a2c:
    // 0x502a2c: 0x0  nop
    ctx->pc = 0x502a2cu;
    // NOP
label_502a30:
    // 0x502a30: 0x0  nop
    ctx->pc = 0x502a30u;
    // NOP
    // 0x502a34: 0x0  nop
    ctx->pc = 0x502a34u;
    // NOP
    // 0x502a38: 0x0  nop
    ctx->pc = 0x502a38u;
    // NOP
    // 0x502a3c: 0x0  nop
    ctx->pc = 0x502a3cu;
    // NOP
    // 0x502a40: 0x0  nop
    ctx->pc = 0x502a40u;
    // NOP
    // 0x502a44: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502A44u;
    {
        const bool branch_taken_0x502a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502a44) {
            ctx->pc = 0x502A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502a30;
        }
    }
    ctx->pc = 0x502A4Cu;
    // 0x502a4c: 0x0  nop
    ctx->pc = 0x502a4cu;
    // NOP
    // 0x502a50: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502a54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502a5c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502A5Cu;
    SET_GPR_U32(ctx, 31, 0x502A64u);
    ctx->pc = 0x502A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502A5Cu;
    // 0x502a60: 0x2484cd08  addiu       $a0, $a0, -0x32F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502A5Cu, 0x502A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502A64u;
label_502a64:
    // 0x502a64: 0x0  nop
    ctx->pc = 0x502a64u;
    // NOP
label_502a68:
    // 0x502a68: 0x0  nop
    ctx->pc = 0x502a68u;
    // NOP
    // 0x502a6c: 0x0  nop
    ctx->pc = 0x502a6cu;
    // NOP
    // 0x502a70: 0x0  nop
    ctx->pc = 0x502a70u;
    // NOP
    // 0x502a74: 0x0  nop
    ctx->pc = 0x502a74u;
    // NOP
    // 0x502a78: 0x0  nop
    ctx->pc = 0x502a78u;
    // NOP
    // 0x502a7c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502A7Cu;
    {
        const bool branch_taken_0x502a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502a7c) {
            ctx->pc = 0x502A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502a68;
        }
    }
    ctx->pc = 0x502A84u;
    // 0x502a84: 0x0  nop
    ctx->pc = 0x502a84u;
    // NOP
    // 0x502a88: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502a8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502a94: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502A94u;
    SET_GPR_U32(ctx, 31, 0x502A9Cu);
    ctx->pc = 0x502A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502A94u;
    // 0x502a98: 0x2484cd30  addiu       $a0, $a0, -0x32D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502A94u, 0x502A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502A9Cu;
label_502a9c:
    // 0x502a9c: 0x0  nop
    ctx->pc = 0x502a9cu;
    // NOP
label_502aa0:
    // 0x502aa0: 0x0  nop
    ctx->pc = 0x502aa0u;
    // NOP
    // 0x502aa4: 0x0  nop
    ctx->pc = 0x502aa4u;
    // NOP
    // 0x502aa8: 0x0  nop
    ctx->pc = 0x502aa8u;
    // NOP
    // 0x502aac: 0x0  nop
    ctx->pc = 0x502aacu;
    // NOP
    // 0x502ab0: 0x0  nop
    ctx->pc = 0x502ab0u;
    // NOP
    // 0x502ab4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502AB4u;
    {
        const bool branch_taken_0x502ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502ab4) {
            ctx->pc = 0x502AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502aa0;
        }
    }
    ctx->pc = 0x502ABCu;
    // 0x502abc: 0x0  nop
    ctx->pc = 0x502abcu;
    // NOP
    // 0x502ac0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502ac4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502acc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502ACCu;
    SET_GPR_U32(ctx, 31, 0x502AD4u);
    ctx->pc = 0x502AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502ACCu;
    // 0x502ad0: 0x2484cd58  addiu       $a0, $a0, -0x32A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502ACCu, 0x502AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502AD4u;
label_502ad4:
    // 0x502ad4: 0x0  nop
    ctx->pc = 0x502ad4u;
    // NOP
label_502ad8:
    // 0x502ad8: 0x0  nop
    ctx->pc = 0x502ad8u;
    // NOP
    // 0x502adc: 0x0  nop
    ctx->pc = 0x502adcu;
    // NOP
    // 0x502ae0: 0x0  nop
    ctx->pc = 0x502ae0u;
    // NOP
    // 0x502ae4: 0x0  nop
    ctx->pc = 0x502ae4u;
    // NOP
    // 0x502ae8: 0x0  nop
    ctx->pc = 0x502ae8u;
    // NOP
    // 0x502aec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502AECu;
    {
        const bool branch_taken_0x502aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502aec) {
            ctx->pc = 0x502AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502ad8;
        }
    }
    ctx->pc = 0x502AF4u;
    // 0x502af4: 0x0  nop
    ctx->pc = 0x502af4u;
    // NOP
    // 0x502af8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502afc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502b04: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502B04u;
    SET_GPR_U32(ctx, 31, 0x502B0Cu);
    ctx->pc = 0x502B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502B04u;
    // 0x502b08: 0x2484cd78  addiu       $a0, $a0, -0x3288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502B04u, 0x502B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502B0Cu;
label_502b0c:
    // 0x502b0c: 0x0  nop
    ctx->pc = 0x502b0cu;
    // NOP
label_502b10:
    // 0x502b10: 0x0  nop
    ctx->pc = 0x502b10u;
    // NOP
    // 0x502b14: 0x0  nop
    ctx->pc = 0x502b14u;
    // NOP
    // 0x502b18: 0x0  nop
    ctx->pc = 0x502b18u;
    // NOP
    // 0x502b1c: 0x0  nop
    ctx->pc = 0x502b1cu;
    // NOP
    // 0x502b20: 0x0  nop
    ctx->pc = 0x502b20u;
    // NOP
    // 0x502b24: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502B24u;
    {
        const bool branch_taken_0x502b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502b24) {
            ctx->pc = 0x502B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502b10;
        }
    }
    ctx->pc = 0x502B2Cu;
    // 0x502b2c: 0x0  nop
    ctx->pc = 0x502b2cu;
    // NOP
    // 0x502b30: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502b34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502b3c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502B3Cu;
    SET_GPR_U32(ctx, 31, 0x502B44u);
    ctx->pc = 0x502B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502B3Cu;
    // 0x502b40: 0x2484cd98  addiu       $a0, $a0, -0x3268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502B3Cu, 0x502B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502B44u;
label_502b44:
    // 0x502b44: 0x0  nop
    ctx->pc = 0x502b44u;
    // NOP
label_502b48:
    // 0x502b48: 0x0  nop
    ctx->pc = 0x502b48u;
    // NOP
    // 0x502b4c: 0x0  nop
    ctx->pc = 0x502b4cu;
    // NOP
    // 0x502b50: 0x0  nop
    ctx->pc = 0x502b50u;
    // NOP
    // 0x502b54: 0x0  nop
    ctx->pc = 0x502b54u;
    // NOP
    // 0x502b58: 0x0  nop
    ctx->pc = 0x502b58u;
    // NOP
    // 0x502b5c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502B5Cu;
    {
        const bool branch_taken_0x502b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502b5c) {
            ctx->pc = 0x502B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502b48;
        }
    }
    ctx->pc = 0x502B64u;
    // 0x502b64: 0x0  nop
    ctx->pc = 0x502b64u;
    // NOP
    // 0x502b68: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502b6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502b74: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502B74u;
    SET_GPR_U32(ctx, 31, 0x502B7Cu);
    ctx->pc = 0x502B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502B74u;
    // 0x502b78: 0x2484cdb8  addiu       $a0, $a0, -0x3248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502B74u, 0x502B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502B7Cu;
label_502b7c:
    // 0x502b7c: 0x0  nop
    ctx->pc = 0x502b7cu;
    // NOP
label_502b80:
    // 0x502b80: 0x0  nop
    ctx->pc = 0x502b80u;
    // NOP
    // 0x502b84: 0x0  nop
    ctx->pc = 0x502b84u;
    // NOP
    // 0x502b88: 0x0  nop
    ctx->pc = 0x502b88u;
    // NOP
    // 0x502b8c: 0x0  nop
    ctx->pc = 0x502b8cu;
    // NOP
    // 0x502b90: 0x0  nop
    ctx->pc = 0x502b90u;
    // NOP
    // 0x502b94: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502B94u;
    {
        const bool branch_taken_0x502b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502b94) {
            ctx->pc = 0x502B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502b80;
        }
    }
    ctx->pc = 0x502B9Cu;
    // 0x502b9c: 0x0  nop
    ctx->pc = 0x502b9cu;
    // NOP
    // 0x502ba0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502ba4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502bac: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502BACu;
    SET_GPR_U32(ctx, 31, 0x502BB4u);
    ctx->pc = 0x502BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502BACu;
    // 0x502bb0: 0x2484cdd8  addiu       $a0, $a0, -0x3228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502BACu, 0x502BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502BB4u;
label_502bb4:
    // 0x502bb4: 0x0  nop
    ctx->pc = 0x502bb4u;
    // NOP
label_502bb8:
    // 0x502bb8: 0x0  nop
    ctx->pc = 0x502bb8u;
    // NOP
    // 0x502bbc: 0x0  nop
    ctx->pc = 0x502bbcu;
    // NOP
    // 0x502bc0: 0x0  nop
    ctx->pc = 0x502bc0u;
    // NOP
    // 0x502bc4: 0x0  nop
    ctx->pc = 0x502bc4u;
    // NOP
    // 0x502bc8: 0x0  nop
    ctx->pc = 0x502bc8u;
    // NOP
    // 0x502bcc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502BCCu;
    {
        const bool branch_taken_0x502bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502bcc) {
            ctx->pc = 0x502BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502bb8;
        }
    }
    ctx->pc = 0x502BD4u;
    // 0x502bd4: 0x0  nop
    ctx->pc = 0x502bd4u;
    // NOP
    // 0x502bd8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502bdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502be4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502BE4u;
    SET_GPR_U32(ctx, 31, 0x502BECu);
    ctx->pc = 0x502BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502BE4u;
    // 0x502be8: 0x2484cdf8  addiu       $a0, $a0, -0x3208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502BE4u, 0x502BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502BECu;
label_502bec:
    // 0x502bec: 0x0  nop
    ctx->pc = 0x502becu;
    // NOP
label_502bf0:
    // 0x502bf0: 0x0  nop
    ctx->pc = 0x502bf0u;
    // NOP
    // 0x502bf4: 0x0  nop
    ctx->pc = 0x502bf4u;
    // NOP
    // 0x502bf8: 0x0  nop
    ctx->pc = 0x502bf8u;
    // NOP
    // 0x502bfc: 0x0  nop
    ctx->pc = 0x502bfcu;
    // NOP
    // 0x502c00: 0x0  nop
    ctx->pc = 0x502c00u;
    // NOP
    // 0x502c04: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502C04u;
    {
        const bool branch_taken_0x502c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502c04) {
            ctx->pc = 0x502BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502bf0;
        }
    }
    ctx->pc = 0x502C0Cu;
    // 0x502c0c: 0x0  nop
    ctx->pc = 0x502c0cu;
    // NOP
    // 0x502c10: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502c14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502c1c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502C1Cu;
    SET_GPR_U32(ctx, 31, 0x502C24u);
    ctx->pc = 0x502C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502C1Cu;
    // 0x502c20: 0x2484ce18  addiu       $a0, $a0, -0x31E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502C1Cu, 0x502C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502C24u;
label_502c24:
    // 0x502c24: 0x0  nop
    ctx->pc = 0x502c24u;
    // NOP
label_502c28:
    // 0x502c28: 0x0  nop
    ctx->pc = 0x502c28u;
    // NOP
    // 0x502c2c: 0x0  nop
    ctx->pc = 0x502c2cu;
    // NOP
    // 0x502c30: 0x0  nop
    ctx->pc = 0x502c30u;
    // NOP
    // 0x502c34: 0x0  nop
    ctx->pc = 0x502c34u;
    // NOP
    // 0x502c38: 0x0  nop
    ctx->pc = 0x502c38u;
    // NOP
    // 0x502c3c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502C3Cu;
    {
        const bool branch_taken_0x502c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502c3c) {
            ctx->pc = 0x502C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502c28;
        }
    }
    ctx->pc = 0x502C44u;
    // 0x502c44: 0x0  nop
    ctx->pc = 0x502c44u;
    // NOP
    // 0x502c48: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502c4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502c54: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502C54u;
    SET_GPR_U32(ctx, 31, 0x502C5Cu);
    ctx->pc = 0x502C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502C54u;
    // 0x502c58: 0x2484ce38  addiu       $a0, $a0, -0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502C54u, 0x502C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502C5Cu;
label_502c5c:
    // 0x502c5c: 0x0  nop
    ctx->pc = 0x502c5cu;
    // NOP
label_502c60:
    // 0x502c60: 0x0  nop
    ctx->pc = 0x502c60u;
    // NOP
    // 0x502c64: 0x0  nop
    ctx->pc = 0x502c64u;
    // NOP
    // 0x502c68: 0x0  nop
    ctx->pc = 0x502c68u;
    // NOP
    // 0x502c6c: 0x0  nop
    ctx->pc = 0x502c6cu;
    // NOP
    // 0x502c70: 0x0  nop
    ctx->pc = 0x502c70u;
    // NOP
    // 0x502c74: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502C74u;
    {
        const bool branch_taken_0x502c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502c74) {
            ctx->pc = 0x502C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502c60;
        }
    }
    ctx->pc = 0x502C7Cu;
    // 0x502c7c: 0x0  nop
    ctx->pc = 0x502c7cu;
    // NOP
    // 0x502c80: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502c84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502c8c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502C8Cu;
    SET_GPR_U32(ctx, 31, 0x502C94u);
    ctx->pc = 0x502C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502C8Cu;
    // 0x502c90: 0x2484ce58  addiu       $a0, $a0, -0x31A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502C8Cu, 0x502C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502C94u;
label_502c94:
    // 0x502c94: 0x0  nop
    ctx->pc = 0x502c94u;
    // NOP
label_502c98:
    // 0x502c98: 0x0  nop
    ctx->pc = 0x502c98u;
    // NOP
    // 0x502c9c: 0x0  nop
    ctx->pc = 0x502c9cu;
    // NOP
    // 0x502ca0: 0x0  nop
    ctx->pc = 0x502ca0u;
    // NOP
    // 0x502ca4: 0x0  nop
    ctx->pc = 0x502ca4u;
    // NOP
    // 0x502ca8: 0x0  nop
    ctx->pc = 0x502ca8u;
    // NOP
    // 0x502cac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502CACu;
    {
        const bool branch_taken_0x502cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502cac) {
            ctx->pc = 0x502C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502c98;
        }
    }
    ctx->pc = 0x502CB4u;
    // 0x502cb4: 0x0  nop
    ctx->pc = 0x502cb4u;
    // NOP
    // 0x502cb8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502cbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502cc4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502CC4u;
    SET_GPR_U32(ctx, 31, 0x502CCCu);
    ctx->pc = 0x502CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502CC4u;
    // 0x502cc8: 0x2484ce70  addiu       $a0, $a0, -0x3190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502CC4u, 0x502CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502CCCu;
label_502ccc:
    // 0x502ccc: 0x0  nop
    ctx->pc = 0x502cccu;
    // NOP
label_502cd0:
    // 0x502cd0: 0x0  nop
    ctx->pc = 0x502cd0u;
    // NOP
    // 0x502cd4: 0x0  nop
    ctx->pc = 0x502cd4u;
    // NOP
    // 0x502cd8: 0x0  nop
    ctx->pc = 0x502cd8u;
    // NOP
    // 0x502cdc: 0x0  nop
    ctx->pc = 0x502cdcu;
    // NOP
    // 0x502ce0: 0x0  nop
    ctx->pc = 0x502ce0u;
    // NOP
    // 0x502ce4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502CE4u;
    {
        const bool branch_taken_0x502ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502ce4) {
            ctx->pc = 0x502CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502cd0;
        }
    }
    ctx->pc = 0x502CECu;
    // 0x502cec: 0x0  nop
    ctx->pc = 0x502cecu;
    // NOP
    // 0x502cf0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502cf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502cfc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502CFCu;
    SET_GPR_U32(ctx, 31, 0x502D04u);
    ctx->pc = 0x502D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502CFCu;
    // 0x502d00: 0x2484ce88  addiu       $a0, $a0, -0x3178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502CFCu, 0x502D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502D04u;
label_502d04:
    // 0x502d04: 0x0  nop
    ctx->pc = 0x502d04u;
    // NOP
label_502d08:
    // 0x502d08: 0x0  nop
    ctx->pc = 0x502d08u;
    // NOP
    // 0x502d0c: 0x0  nop
    ctx->pc = 0x502d0cu;
    // NOP
    // 0x502d10: 0x0  nop
    ctx->pc = 0x502d10u;
    // NOP
    // 0x502d14: 0x0  nop
    ctx->pc = 0x502d14u;
    // NOP
    // 0x502d18: 0x0  nop
    ctx->pc = 0x502d18u;
    // NOP
    // 0x502d1c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502D1Cu;
    {
        const bool branch_taken_0x502d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502d1c) {
            ctx->pc = 0x502D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502d08;
        }
    }
    ctx->pc = 0x502D24u;
    // 0x502d24: 0x0  nop
    ctx->pc = 0x502d24u;
    // NOP
    // 0x502d28: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502d2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502d34: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502D34u;
    SET_GPR_U32(ctx, 31, 0x502D3Cu);
    ctx->pc = 0x502D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502D34u;
    // 0x502d38: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502D34u, 0x502D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502D3Cu;
label_502d3c:
    // 0x502d3c: 0x0  nop
    ctx->pc = 0x502d3cu;
    // NOP
label_502d40:
    // 0x502d40: 0x0  nop
    ctx->pc = 0x502d40u;
    // NOP
    // 0x502d44: 0x0  nop
    ctx->pc = 0x502d44u;
    // NOP
    // 0x502d48: 0x0  nop
    ctx->pc = 0x502d48u;
    // NOP
    // 0x502d4c: 0x0  nop
    ctx->pc = 0x502d4cu;
    // NOP
    // 0x502d50: 0x0  nop
    ctx->pc = 0x502d50u;
    // NOP
    // 0x502d54: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502D54u;
    {
        const bool branch_taken_0x502d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502d54) {
            ctx->pc = 0x502D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502d40;
        }
    }
    ctx->pc = 0x502D5Cu;
    // 0x502d5c: 0x0  nop
    ctx->pc = 0x502d5cu;
    // NOP
    // 0x502d60: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502d64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502d6c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502D6Cu;
    SET_GPR_U32(ctx, 31, 0x502D74u);
    ctx->pc = 0x502D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502D6Cu;
    // 0x502d70: 0x2484ceb8  addiu       $a0, $a0, -0x3148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502D6Cu, 0x502D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502D74u;
label_502d74:
    // 0x502d74: 0x0  nop
    ctx->pc = 0x502d74u;
    // NOP
label_502d78:
    // 0x502d78: 0x0  nop
    ctx->pc = 0x502d78u;
    // NOP
    // 0x502d7c: 0x0  nop
    ctx->pc = 0x502d7cu;
    // NOP
    // 0x502d80: 0x0  nop
    ctx->pc = 0x502d80u;
    // NOP
    // 0x502d84: 0x0  nop
    ctx->pc = 0x502d84u;
    // NOP
    // 0x502d88: 0x0  nop
    ctx->pc = 0x502d88u;
    // NOP
    // 0x502d8c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502D8Cu;
    {
        const bool branch_taken_0x502d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502d8c) {
            ctx->pc = 0x502D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502d78;
        }
    }
    ctx->pc = 0x502D94u;
    // 0x502d94: 0x0  nop
    ctx->pc = 0x502d94u;
    // NOP
    // 0x502d98: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502d9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502da4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502DA4u;
    SET_GPR_U32(ctx, 31, 0x502DACu);
    ctx->pc = 0x502DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502DA4u;
    // 0x502da8: 0x2484ced0  addiu       $a0, $a0, -0x3130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502DA4u, 0x502DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502DACu;
label_502dac:
    // 0x502dac: 0x0  nop
    ctx->pc = 0x502dacu;
    // NOP
label_502db0:
    // 0x502db0: 0x0  nop
    ctx->pc = 0x502db0u;
    // NOP
    // 0x502db4: 0x0  nop
    ctx->pc = 0x502db4u;
    // NOP
    // 0x502db8: 0x0  nop
    ctx->pc = 0x502db8u;
    // NOP
    // 0x502dbc: 0x0  nop
    ctx->pc = 0x502dbcu;
    // NOP
    // 0x502dc0: 0x0  nop
    ctx->pc = 0x502dc0u;
    // NOP
    // 0x502dc4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502DC4u;
    {
        const bool branch_taken_0x502dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502dc4) {
            ctx->pc = 0x502DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502db0;
        }
    }
    ctx->pc = 0x502DCCu;
    // 0x502dcc: 0x0  nop
    ctx->pc = 0x502dccu;
    // NOP
    // 0x502dd0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502ddc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502DDCu;
    SET_GPR_U32(ctx, 31, 0x502DE4u);
    ctx->pc = 0x502DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502DDCu;
    // 0x502de0: 0x2484cee8  addiu       $a0, $a0, -0x3118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502DDCu, 0x502DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502DE4u;
label_502de4:
    // 0x502de4: 0x0  nop
    ctx->pc = 0x502de4u;
    // NOP
label_502de8:
    // 0x502de8: 0x0  nop
    ctx->pc = 0x502de8u;
    // NOP
    // 0x502dec: 0x0  nop
    ctx->pc = 0x502decu;
    // NOP
    // 0x502df0: 0x0  nop
    ctx->pc = 0x502df0u;
    // NOP
    // 0x502df4: 0x0  nop
    ctx->pc = 0x502df4u;
    // NOP
    // 0x502df8: 0x0  nop
    ctx->pc = 0x502df8u;
    // NOP
    // 0x502dfc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502DFCu;
    {
        const bool branch_taken_0x502dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502dfc) {
            ctx->pc = 0x502DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502de8;
        }
    }
    ctx->pc = 0x502E04u;
    // 0x502e04: 0x0  nop
    ctx->pc = 0x502e04u;
    // NOP
    // 0x502e08: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502e0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502e14: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502E14u;
    SET_GPR_U32(ctx, 31, 0x502E1Cu);
    ctx->pc = 0x502E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502E14u;
    // 0x502e18: 0x2484cf00  addiu       $a0, $a0, -0x3100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502E14u, 0x502E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502E1Cu;
label_502e1c:
    // 0x502e1c: 0x0  nop
    ctx->pc = 0x502e1cu;
    // NOP
label_502e20:
    // 0x502e20: 0x0  nop
    ctx->pc = 0x502e20u;
    // NOP
    // 0x502e24: 0x0  nop
    ctx->pc = 0x502e24u;
    // NOP
    // 0x502e28: 0x0  nop
    ctx->pc = 0x502e28u;
    // NOP
    // 0x502e2c: 0x0  nop
    ctx->pc = 0x502e2cu;
    // NOP
    // 0x502e30: 0x0  nop
    ctx->pc = 0x502e30u;
    // NOP
    // 0x502e34: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502E34u;
    {
        const bool branch_taken_0x502e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502e34) {
            ctx->pc = 0x502E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502e20;
        }
    }
    ctx->pc = 0x502E3Cu;
    // 0x502e3c: 0x0  nop
    ctx->pc = 0x502e3cu;
    // NOP
    // 0x502e40: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502e44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502e4c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502E4Cu;
    SET_GPR_U32(ctx, 31, 0x502E54u);
    ctx->pc = 0x502E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502E4Cu;
    // 0x502e50: 0x2484cf18  addiu       $a0, $a0, -0x30E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502E4Cu, 0x502E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502E54u;
label_502e54:
    // 0x502e54: 0x0  nop
    ctx->pc = 0x502e54u;
    // NOP
label_502e58:
    // 0x502e58: 0x0  nop
    ctx->pc = 0x502e58u;
    // NOP
    // 0x502e5c: 0x0  nop
    ctx->pc = 0x502e5cu;
    // NOP
    // 0x502e60: 0x0  nop
    ctx->pc = 0x502e60u;
    // NOP
    // 0x502e64: 0x0  nop
    ctx->pc = 0x502e64u;
    // NOP
    // 0x502e68: 0x0  nop
    ctx->pc = 0x502e68u;
    // NOP
    // 0x502e6c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502E6Cu;
    {
        const bool branch_taken_0x502e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502e6c) {
            ctx->pc = 0x502E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502e58;
        }
    }
    ctx->pc = 0x502E74u;
    // 0x502e74: 0x0  nop
    ctx->pc = 0x502e74u;
    // NOP
    // 0x502e78: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502e7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502e84: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502E84u;
    SET_GPR_U32(ctx, 31, 0x502E8Cu);
    ctx->pc = 0x502E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502E84u;
    // 0x502e88: 0x2484cf30  addiu       $a0, $a0, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502E84u, 0x502E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502E8Cu;
label_502e8c:
    // 0x502e8c: 0x0  nop
    ctx->pc = 0x502e8cu;
    // NOP
label_502e90:
    // 0x502e90: 0x0  nop
    ctx->pc = 0x502e90u;
    // NOP
    // 0x502e94: 0x0  nop
    ctx->pc = 0x502e94u;
    // NOP
    // 0x502e98: 0x0  nop
    ctx->pc = 0x502e98u;
    // NOP
    // 0x502e9c: 0x0  nop
    ctx->pc = 0x502e9cu;
    // NOP
    // 0x502ea0: 0x0  nop
    ctx->pc = 0x502ea0u;
    // NOP
    // 0x502ea4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502EA4u;
    {
        const bool branch_taken_0x502ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502ea4) {
            ctx->pc = 0x502E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502e90;
        }
    }
    ctx->pc = 0x502EACu;
    // 0x502eac: 0x0  nop
    ctx->pc = 0x502eacu;
    // NOP
    // 0x502eb0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502eb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502ebc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502EBCu;
    SET_GPR_U32(ctx, 31, 0x502EC4u);
    ctx->pc = 0x502EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502EBCu;
    // 0x502ec0: 0x2484cf48  addiu       $a0, $a0, -0x30B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502EBCu, 0x502EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502EC4u;
label_502ec4:
    // 0x502ec4: 0x0  nop
    ctx->pc = 0x502ec4u;
    // NOP
label_502ec8:
    // 0x502ec8: 0x0  nop
    ctx->pc = 0x502ec8u;
    // NOP
    // 0x502ecc: 0x0  nop
    ctx->pc = 0x502eccu;
    // NOP
    // 0x502ed0: 0x0  nop
    ctx->pc = 0x502ed0u;
    // NOP
    // 0x502ed4: 0x0  nop
    ctx->pc = 0x502ed4u;
    // NOP
    // 0x502ed8: 0x0  nop
    ctx->pc = 0x502ed8u;
    // NOP
    // 0x502edc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502EDCu;
    {
        const bool branch_taken_0x502edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502edc) {
            ctx->pc = 0x502EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502ec8;
        }
    }
    ctx->pc = 0x502EE4u;
    // 0x502ee4: 0x0  nop
    ctx->pc = 0x502ee4u;
    // NOP
    // 0x502ee8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502eec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502ef4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502EF4u;
    SET_GPR_U32(ctx, 31, 0x502EFCu);
    ctx->pc = 0x502EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502EF4u;
    // 0x502ef8: 0x2484cf60  addiu       $a0, $a0, -0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502EF4u, 0x502EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502EFCu;
label_502efc:
    // 0x502efc: 0x0  nop
    ctx->pc = 0x502efcu;
    // NOP
label_502f00:
    // 0x502f00: 0x0  nop
    ctx->pc = 0x502f00u;
    // NOP
    // 0x502f04: 0x0  nop
    ctx->pc = 0x502f04u;
    // NOP
    // 0x502f08: 0x0  nop
    ctx->pc = 0x502f08u;
    // NOP
    // 0x502f0c: 0x0  nop
    ctx->pc = 0x502f0cu;
    // NOP
    // 0x502f10: 0x0  nop
    ctx->pc = 0x502f10u;
    // NOP
    // 0x502f14: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502F14u;
    {
        const bool branch_taken_0x502f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502f14) {
            ctx->pc = 0x502F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502f00;
        }
    }
    ctx->pc = 0x502F1Cu;
    // 0x502f1c: 0x0  nop
    ctx->pc = 0x502f1cu;
    // NOP
    // 0x502f20: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502f24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502f2c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502F2Cu;
    SET_GPR_U32(ctx, 31, 0x502F34u);
    ctx->pc = 0x502F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502F2Cu;
    // 0x502f30: 0x2484cf78  addiu       $a0, $a0, -0x3088 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502F2Cu, 0x502F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502F34u;
label_502f34:
    // 0x502f34: 0x0  nop
    ctx->pc = 0x502f34u;
    // NOP
label_502f38:
    // 0x502f38: 0x0  nop
    ctx->pc = 0x502f38u;
    // NOP
    // 0x502f3c: 0x0  nop
    ctx->pc = 0x502f3cu;
    // NOP
    // 0x502f40: 0x0  nop
    ctx->pc = 0x502f40u;
    // NOP
    // 0x502f44: 0x0  nop
    ctx->pc = 0x502f44u;
    // NOP
    // 0x502f48: 0x0  nop
    ctx->pc = 0x502f48u;
    // NOP
    // 0x502f4c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502F4Cu;
    {
        const bool branch_taken_0x502f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502f4c) {
            ctx->pc = 0x502F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502f38;
        }
    }
    ctx->pc = 0x502F54u;
    // 0x502f54: 0x0  nop
    ctx->pc = 0x502f54u;
    // NOP
    // 0x502f58: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502f5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502f64: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502F64u;
    SET_GPR_U32(ctx, 31, 0x502F6Cu);
    ctx->pc = 0x502F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502F64u;
    // 0x502f68: 0x2484cf90  addiu       $a0, $a0, -0x3070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502F64u, 0x502F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502F6Cu;
label_502f6c:
    // 0x502f6c: 0x0  nop
    ctx->pc = 0x502f6cu;
    // NOP
label_502f70:
    // 0x502f70: 0x0  nop
    ctx->pc = 0x502f70u;
    // NOP
    // 0x502f74: 0x0  nop
    ctx->pc = 0x502f74u;
    // NOP
    // 0x502f78: 0x0  nop
    ctx->pc = 0x502f78u;
    // NOP
    // 0x502f7c: 0x0  nop
    ctx->pc = 0x502f7cu;
    // NOP
    // 0x502f80: 0x0  nop
    ctx->pc = 0x502f80u;
    // NOP
    // 0x502f84: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502F84u;
    {
        const bool branch_taken_0x502f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502f84) {
            ctx->pc = 0x502F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502f70;
        }
    }
    ctx->pc = 0x502F8Cu;
    // 0x502f8c: 0x0  nop
    ctx->pc = 0x502f8cu;
    // NOP
    // 0x502f90: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502f94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502f9c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502F9Cu;
    SET_GPR_U32(ctx, 31, 0x502FA4u);
    ctx->pc = 0x502FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502F9Cu;
    // 0x502fa0: 0x2484cfa8  addiu       $a0, $a0, -0x3058 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502F9Cu, 0x502FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502FA4u;
label_502fa4:
    // 0x502fa4: 0x0  nop
    ctx->pc = 0x502fa4u;
    // NOP
label_502fa8:
    // 0x502fa8: 0x0  nop
    ctx->pc = 0x502fa8u;
    // NOP
    // 0x502fac: 0x0  nop
    ctx->pc = 0x502facu;
    // NOP
    // 0x502fb0: 0x0  nop
    ctx->pc = 0x502fb0u;
    // NOP
    // 0x502fb4: 0x0  nop
    ctx->pc = 0x502fb4u;
    // NOP
    // 0x502fb8: 0x0  nop
    ctx->pc = 0x502fb8u;
    // NOP
    // 0x502fbc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502FBCu;
    {
        const bool branch_taken_0x502fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502fbc) {
            ctx->pc = 0x502FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502fa8;
        }
    }
    ctx->pc = 0x502FC4u;
    // 0x502fc4: 0x0  nop
    ctx->pc = 0x502fc4u;
    // NOP
    // 0x502fc8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x502fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x502fcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x502fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x502fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x502fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x502fd4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x502FD4u;
    SET_GPR_U32(ctx, 31, 0x502FDCu);
    ctx->pc = 0x502FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x502FD4u;
    // 0x502fd8: 0x2484cfc0  addiu       $a0, $a0, -0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x502FD4u, 0x502FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x502FDCu;
label_502fdc:
    // 0x502fdc: 0x0  nop
    ctx->pc = 0x502fdcu;
    // NOP
label_502fe0:
    // 0x502fe0: 0x0  nop
    ctx->pc = 0x502fe0u;
    // NOP
    // 0x502fe4: 0x0  nop
    ctx->pc = 0x502fe4u;
    // NOP
    // 0x502fe8: 0x0  nop
    ctx->pc = 0x502fe8u;
    // NOP
    // 0x502fec: 0x0  nop
    ctx->pc = 0x502fecu;
    // NOP
    // 0x502ff0: 0x0  nop
    ctx->pc = 0x502ff0u;
    // NOP
    // 0x502ff4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x502FF4u;
    {
        const bool branch_taken_0x502ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502ff4) {
            ctx->pc = 0x502FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_502fe0;
        }
    }
    ctx->pc = 0x502FFCu;
    // 0x502ffc: 0x0  nop
    ctx->pc = 0x502ffcu;
    // NOP
    // 0x503000: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503004: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50300c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50300Cu;
    SET_GPR_U32(ctx, 31, 0x503014u);
    ctx->pc = 0x503010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50300Cu;
    // 0x503010: 0x2484cfd8  addiu       $a0, $a0, -0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50300Cu, 0x503014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503014u;
label_503014:
    // 0x503014: 0x0  nop
    ctx->pc = 0x503014u;
    // NOP
label_503018:
    // 0x503018: 0x0  nop
    ctx->pc = 0x503018u;
    // NOP
    // 0x50301c: 0x0  nop
    ctx->pc = 0x50301cu;
    // NOP
    // 0x503020: 0x0  nop
    ctx->pc = 0x503020u;
    // NOP
    // 0x503024: 0x0  nop
    ctx->pc = 0x503024u;
    // NOP
    // 0x503028: 0x0  nop
    ctx->pc = 0x503028u;
    // NOP
    // 0x50302c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50302Cu;
    {
        const bool branch_taken_0x50302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50302c) {
            ctx->pc = 0x503018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503018;
        }
    }
    ctx->pc = 0x503034u;
    // 0x503034: 0x0  nop
    ctx->pc = 0x503034u;
    // NOP
    // 0x503038: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50303c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50303cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503044: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x503044u;
    SET_GPR_U32(ctx, 31, 0x50304Cu);
    ctx->pc = 0x503048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503044u;
    // 0x503048: 0x2484cff0  addiu       $a0, $a0, -0x3010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x503044u, 0x50304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50304Cu;
label_50304c:
    // 0x50304c: 0x0  nop
    ctx->pc = 0x50304cu;
    // NOP
label_503050:
    // 0x503050: 0x0  nop
    ctx->pc = 0x503050u;
    // NOP
    // 0x503054: 0x0  nop
    ctx->pc = 0x503054u;
    // NOP
    // 0x503058: 0x0  nop
    ctx->pc = 0x503058u;
    // NOP
    // 0x50305c: 0x0  nop
    ctx->pc = 0x50305cu;
    // NOP
    // 0x503060: 0x0  nop
    ctx->pc = 0x503060u;
    // NOP
    // 0x503064: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x503064u;
    {
        const bool branch_taken_0x503064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x503064) {
            ctx->pc = 0x503050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503050;
        }
    }
    ctx->pc = 0x50306Cu;
    // 0x50306c: 0x0  nop
    ctx->pc = 0x50306cu;
    // NOP
    // 0x503070: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503074: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50307c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50307Cu;
    SET_GPR_U32(ctx, 31, 0x503084u);
    ctx->pc = 0x503080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50307Cu;
    // 0x503080: 0x2484d008  addiu       $a0, $a0, -0x2FF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50307Cu, 0x503084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503084u;
label_503084:
    // 0x503084: 0x0  nop
    ctx->pc = 0x503084u;
    // NOP
label_503088:
    // 0x503088: 0x0  nop
    ctx->pc = 0x503088u;
    // NOP
    // 0x50308c: 0x0  nop
    ctx->pc = 0x50308cu;
    // NOP
    // 0x503090: 0x0  nop
    ctx->pc = 0x503090u;
    // NOP
    // 0x503094: 0x0  nop
    ctx->pc = 0x503094u;
    // NOP
    // 0x503098: 0x0  nop
    ctx->pc = 0x503098u;
    // NOP
    // 0x50309c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50309Cu;
    {
        const bool branch_taken_0x50309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50309c) {
            ctx->pc = 0x503088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503088;
        }
    }
    ctx->pc = 0x5030A4u;
    // 0x5030a4: 0x0  nop
    ctx->pc = 0x5030a4u;
    // NOP
    // 0x5030a8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5030a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5030ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5030acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5030b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5030b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5030b4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5030B4u;
    SET_GPR_U32(ctx, 31, 0x5030BCu);
    ctx->pc = 0x5030B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5030B4u;
    // 0x5030b8: 0x2484d020  addiu       $a0, $a0, -0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5030B4u, 0x5030BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5030BCu;
label_5030bc:
    // 0x5030bc: 0x0  nop
    ctx->pc = 0x5030bcu;
    // NOP
label_5030c0:
    // 0x5030c0: 0x0  nop
    ctx->pc = 0x5030c0u;
    // NOP
    // 0x5030c4: 0x0  nop
    ctx->pc = 0x5030c4u;
    // NOP
    // 0x5030c8: 0x0  nop
    ctx->pc = 0x5030c8u;
    // NOP
    // 0x5030cc: 0x0  nop
    ctx->pc = 0x5030ccu;
    // NOP
    // 0x5030d0: 0x0  nop
    ctx->pc = 0x5030d0u;
    // NOP
    // 0x5030d4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5030D4u;
    {
        const bool branch_taken_0x5030d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5030d4) {
            ctx->pc = 0x5030C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5030c0;
        }
    }
    ctx->pc = 0x5030DCu;
    // 0x5030dc: 0x0  nop
    ctx->pc = 0x5030dcu;
    // NOP
    // 0x5030e0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5030e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5030e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5030e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5030e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5030e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5030ec: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5030ECu;
    SET_GPR_U32(ctx, 31, 0x5030F4u);
    ctx->pc = 0x5030F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5030ECu;
    // 0x5030f0: 0x2484d038  addiu       $a0, $a0, -0x2FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5030ECu, 0x5030F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5030F4u;
label_5030f4:
    // 0x5030f4: 0x0  nop
    ctx->pc = 0x5030f4u;
    // NOP
label_5030f8:
    // 0x5030f8: 0x0  nop
    ctx->pc = 0x5030f8u;
    // NOP
    // 0x5030fc: 0x0  nop
    ctx->pc = 0x5030fcu;
    // NOP
    // 0x503100: 0x0  nop
    ctx->pc = 0x503100u;
    // NOP
    // 0x503104: 0x0  nop
    ctx->pc = 0x503104u;
    // NOP
    // 0x503108: 0x0  nop
    ctx->pc = 0x503108u;
    // NOP
    // 0x50310c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50310Cu;
    {
        const bool branch_taken_0x50310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50310c) {
            ctx->pc = 0x5030F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5030f8;
        }
    }
    ctx->pc = 0x503114u;
    // 0x503114: 0x0  nop
    ctx->pc = 0x503114u;
    // NOP
    // 0x503118: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50311c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50311cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503124: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x503124u;
    SET_GPR_U32(ctx, 31, 0x50312Cu);
    ctx->pc = 0x503128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503124u;
    // 0x503128: 0x2484d050  addiu       $a0, $a0, -0x2FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x503124u, 0x50312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50312Cu;
label_50312c:
    // 0x50312c: 0x0  nop
    ctx->pc = 0x50312cu;
    // NOP
label_503130:
    // 0x503130: 0x0  nop
    ctx->pc = 0x503130u;
    // NOP
    // 0x503134: 0x0  nop
    ctx->pc = 0x503134u;
    // NOP
    // 0x503138: 0x0  nop
    ctx->pc = 0x503138u;
    // NOP
    // 0x50313c: 0x0  nop
    ctx->pc = 0x50313cu;
    // NOP
    // 0x503140: 0x0  nop
    ctx->pc = 0x503140u;
    // NOP
    // 0x503144: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x503144u;
    {
        const bool branch_taken_0x503144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x503144) {
            ctx->pc = 0x503130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503130;
        }
    }
    ctx->pc = 0x50314Cu;
    // 0x50314c: 0x0  nop
    ctx->pc = 0x50314cu;
    // NOP
    // 0x503150: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50315c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50315Cu;
    SET_GPR_U32(ctx, 31, 0x503164u);
    ctx->pc = 0x503160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50315Cu;
    // 0x503160: 0x2484d068  addiu       $a0, $a0, -0x2F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50315Cu, 0x503164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503164u;
label_503164:
    // 0x503164: 0x0  nop
    ctx->pc = 0x503164u;
    // NOP
label_503168:
    // 0x503168: 0x0  nop
    ctx->pc = 0x503168u;
    // NOP
    // 0x50316c: 0x0  nop
    ctx->pc = 0x50316cu;
    // NOP
    // 0x503170: 0x0  nop
    ctx->pc = 0x503170u;
    // NOP
    // 0x503174: 0x0  nop
    ctx->pc = 0x503174u;
    // NOP
    // 0x503178: 0x0  nop
    ctx->pc = 0x503178u;
    // NOP
    // 0x50317c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50317Cu;
    {
        const bool branch_taken_0x50317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50317c) {
            ctx->pc = 0x503168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503168;
        }
    }
    ctx->pc = 0x503184u;
    // 0x503184: 0x0  nop
    ctx->pc = 0x503184u;
    // NOP
    // 0x503188: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50318c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50318cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503194: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x503194u;
    SET_GPR_U32(ctx, 31, 0x50319Cu);
    ctx->pc = 0x503198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503194u;
    // 0x503198: 0x2484d080  addiu       $a0, $a0, -0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x503194u, 0x50319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50319Cu;
label_50319c:
    // 0x50319c: 0x0  nop
    ctx->pc = 0x50319cu;
    // NOP
label_5031a0:
    // 0x5031a0: 0x0  nop
    ctx->pc = 0x5031a0u;
    // NOP
    // 0x5031a4: 0x0  nop
    ctx->pc = 0x5031a4u;
    // NOP
    // 0x5031a8: 0x0  nop
    ctx->pc = 0x5031a8u;
    // NOP
    // 0x5031ac: 0x0  nop
    ctx->pc = 0x5031acu;
    // NOP
    // 0x5031b0: 0x0  nop
    ctx->pc = 0x5031b0u;
    // NOP
    // 0x5031b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5031B4u;
    {
        const bool branch_taken_0x5031b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5031b4) {
            ctx->pc = 0x5031A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5031a0;
        }
    }
    ctx->pc = 0x5031BCu;
    // 0x5031bc: 0x0  nop
    ctx->pc = 0x5031bcu;
    // NOP
    // 0x5031c0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5031c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5031c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5031c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5031c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5031c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5031cc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5031CCu;
    SET_GPR_U32(ctx, 31, 0x5031D4u);
    ctx->pc = 0x5031D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5031CCu;
    // 0x5031d0: 0x2484d098  addiu       $a0, $a0, -0x2F68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5031CCu, 0x5031D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5031D4u;
label_5031d4:
    // 0x5031d4: 0x0  nop
    ctx->pc = 0x5031d4u;
    // NOP
label_5031d8:
    // 0x5031d8: 0x0  nop
    ctx->pc = 0x5031d8u;
    // NOP
    // 0x5031dc: 0x0  nop
    ctx->pc = 0x5031dcu;
    // NOP
    // 0x5031e0: 0x0  nop
    ctx->pc = 0x5031e0u;
    // NOP
    // 0x5031e4: 0x0  nop
    ctx->pc = 0x5031e4u;
    // NOP
    // 0x5031e8: 0x0  nop
    ctx->pc = 0x5031e8u;
    // NOP
    // 0x5031ec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5031ECu;
    {
        const bool branch_taken_0x5031ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5031ec) {
            ctx->pc = 0x5031D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5031d8;
        }
    }
    ctx->pc = 0x5031F4u;
    // 0x5031f4: 0x0  nop
    ctx->pc = 0x5031f4u;
    // NOP
    // 0x5031f8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5031f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5031fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5031fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503204: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x503204u;
    SET_GPR_U32(ctx, 31, 0x50320Cu);
    ctx->pc = 0x503208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503204u;
    // 0x503208: 0x2484d0b0  addiu       $a0, $a0, -0x2F50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x503204u, 0x50320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50320Cu;
label_50320c:
    // 0x50320c: 0x0  nop
    ctx->pc = 0x50320cu;
    // NOP
label_503210:
    // 0x503210: 0x0  nop
    ctx->pc = 0x503210u;
    // NOP
    // 0x503214: 0x0  nop
    ctx->pc = 0x503214u;
    // NOP
    // 0x503218: 0x0  nop
    ctx->pc = 0x503218u;
    // NOP
    // 0x50321c: 0x0  nop
    ctx->pc = 0x50321cu;
    // NOP
    // 0x503220: 0x0  nop
    ctx->pc = 0x503220u;
    // NOP
    // 0x503224: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x503224u;
    {
        const bool branch_taken_0x503224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x503224) {
            ctx->pc = 0x503210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503210;
        }
    }
    ctx->pc = 0x50322Cu;
    // 0x50322c: 0x0  nop
    ctx->pc = 0x50322cu;
    // NOP
    // 0x503230: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50323c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50323Cu;
    SET_GPR_U32(ctx, 31, 0x503244u);
    ctx->pc = 0x503240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50323Cu;
    // 0x503240: 0x2484d0c8  addiu       $a0, $a0, -0x2F38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50323Cu, 0x503244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503244u;
label_503244:
    // 0x503244: 0x0  nop
    ctx->pc = 0x503244u;
    // NOP
label_503248:
    // 0x503248: 0x0  nop
    ctx->pc = 0x503248u;
    // NOP
    // 0x50324c: 0x0  nop
    ctx->pc = 0x50324cu;
    // NOP
    // 0x503250: 0x0  nop
    ctx->pc = 0x503250u;
    // NOP
    // 0x503254: 0x0  nop
    ctx->pc = 0x503254u;
    // NOP
    // 0x503258: 0x0  nop
    ctx->pc = 0x503258u;
    // NOP
    // 0x50325c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50325Cu;
    {
        const bool branch_taken_0x50325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50325c) {
            ctx->pc = 0x503248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503248;
        }
    }
    ctx->pc = 0x503264u;
    // 0x503264: 0x0  nop
    ctx->pc = 0x503264u;
    // NOP
    // 0x503268: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50326c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50326cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503274: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x503274u;
    SET_GPR_U32(ctx, 31, 0x50327Cu);
    ctx->pc = 0x503278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503274u;
    // 0x503278: 0x2484d0e0  addiu       $a0, $a0, -0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x503274u, 0x50327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50327Cu;
label_50327c:
    // 0x50327c: 0x0  nop
    ctx->pc = 0x50327cu;
    // NOP
label_503280:
    // 0x503280: 0x0  nop
    ctx->pc = 0x503280u;
    // NOP
    // 0x503284: 0x0  nop
    ctx->pc = 0x503284u;
    // NOP
    // 0x503288: 0x0  nop
    ctx->pc = 0x503288u;
    // NOP
    // 0x50328c: 0x0  nop
    ctx->pc = 0x50328cu;
    // NOP
    // 0x503290: 0x0  nop
    ctx->pc = 0x503290u;
    // NOP
    // 0x503294: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x503294u;
    {
        const bool branch_taken_0x503294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x503294) {
            ctx->pc = 0x503280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503280;
        }
    }
    ctx->pc = 0x50329Cu;
    // 0x50329c: 0x0  nop
    ctx->pc = 0x50329cu;
    // NOP
    // 0x5032a0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5032a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5032a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5032a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5032a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5032a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5032ac: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5032ACu;
    SET_GPR_U32(ctx, 31, 0x5032B4u);
    ctx->pc = 0x5032B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5032ACu;
    // 0x5032b0: 0x2484d0f8  addiu       $a0, $a0, -0x2F08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5032ACu, 0x5032B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5032B4u;
label_5032b4:
    // 0x5032b4: 0x0  nop
    ctx->pc = 0x5032b4u;
    // NOP
label_5032b8:
    // 0x5032b8: 0x0  nop
    ctx->pc = 0x5032b8u;
    // NOP
    // 0x5032bc: 0x0  nop
    ctx->pc = 0x5032bcu;
    // NOP
    // 0x5032c0: 0x0  nop
    ctx->pc = 0x5032c0u;
    // NOP
    // 0x5032c4: 0x0  nop
    ctx->pc = 0x5032c4u;
    // NOP
    // 0x5032c8: 0x0  nop
    ctx->pc = 0x5032c8u;
    // NOP
    // 0x5032cc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5032CCu;
    {
        const bool branch_taken_0x5032cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5032cc) {
            ctx->pc = 0x5032B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5032b8;
        }
    }
    ctx->pc = 0x5032D4u;
    // 0x5032d4: 0x0  nop
    ctx->pc = 0x5032d4u;
    // NOP
    // 0x5032d8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5032d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5032dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5032dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5032e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5032e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5032e4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5032E4u;
    SET_GPR_U32(ctx, 31, 0x5032ECu);
    ctx->pc = 0x5032E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5032E4u;
    // 0x5032e8: 0x2484d110  addiu       $a0, $a0, -0x2EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5032E4u, 0x5032ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5032ECu;
label_5032ec:
    // 0x5032ec: 0x0  nop
    ctx->pc = 0x5032ecu;
    // NOP
label_5032f0:
    // 0x5032f0: 0x0  nop
    ctx->pc = 0x5032f0u;
    // NOP
    // 0x5032f4: 0x0  nop
    ctx->pc = 0x5032f4u;
    // NOP
    // 0x5032f8: 0x0  nop
    ctx->pc = 0x5032f8u;
    // NOP
    // 0x5032fc: 0x0  nop
    ctx->pc = 0x5032fcu;
    // NOP
    // 0x503300: 0x0  nop
    ctx->pc = 0x503300u;
    // NOP
    // 0x503304: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x503304u;
    {
        const bool branch_taken_0x503304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x503304) {
            ctx->pc = 0x5032F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5032f0;
        }
    }
    ctx->pc = 0x50330Cu;
    // 0x50330c: 0x0  nop
    ctx->pc = 0x50330cu;
    // NOP
    // 0x503310: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503314: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50331c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50331Cu;
    SET_GPR_U32(ctx, 31, 0x503324u);
    ctx->pc = 0x503320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50331Cu;
    // 0x503320: 0x2484d128  addiu       $a0, $a0, -0x2ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50331Cu, 0x503324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503324u;
label_503324:
    // 0x503324: 0x0  nop
    ctx->pc = 0x503324u;
    // NOP
label_503328:
    // 0x503328: 0x0  nop
    ctx->pc = 0x503328u;
    // NOP
    // 0x50332c: 0x0  nop
    ctx->pc = 0x50332cu;
    // NOP
    // 0x503330: 0x0  nop
    ctx->pc = 0x503330u;
    // NOP
    // 0x503334: 0x0  nop
    ctx->pc = 0x503334u;
    // NOP
    // 0x503338: 0x0  nop
    ctx->pc = 0x503338u;
    // NOP
    // 0x50333c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50333Cu;
    {
        const bool branch_taken_0x50333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50333c) {
            ctx->pc = 0x503328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503328;
        }
    }
    ctx->pc = 0x503344u;
    // 0x503344: 0x0  nop
    ctx->pc = 0x503344u;
    // NOP
    // 0x503348: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x50334c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50334cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503354: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x503354u;
    SET_GPR_U32(ctx, 31, 0x50335Cu);
    ctx->pc = 0x503358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503354u;
    // 0x503358: 0x2484d140  addiu       $a0, $a0, -0x2EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x503354u, 0x50335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50335Cu;
label_50335c:
    // 0x50335c: 0x0  nop
    ctx->pc = 0x50335cu;
    // NOP
label_503360:
    // 0x503360: 0x0  nop
    ctx->pc = 0x503360u;
    // NOP
    // 0x503364: 0x0  nop
    ctx->pc = 0x503364u;
    // NOP
    // 0x503368: 0x0  nop
    ctx->pc = 0x503368u;
    // NOP
    // 0x50336c: 0x0  nop
    ctx->pc = 0x50336cu;
    // NOP
    // 0x503370: 0x0  nop
    ctx->pc = 0x503370u;
    // NOP
    // 0x503374: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x503374u;
    {
        const bool branch_taken_0x503374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x503374) {
            ctx->pc = 0x503360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503360;
        }
    }
    ctx->pc = 0x50337Cu;
    // 0x50337c: 0x0  nop
    ctx->pc = 0x50337cu;
    // NOP
    // 0x503380: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x503380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x503384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50338c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50338Cu;
    SET_GPR_U32(ctx, 31, 0x503394u);
    ctx->pc = 0x503390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50338Cu;
    // 0x503390: 0x2484d158  addiu       $a0, $a0, -0x2EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50338Cu, 0x503394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503394u;
label_503394:
    // 0x503394: 0x0  nop
    ctx->pc = 0x503394u;
    // NOP
label_503398:
    // 0x503398: 0x0  nop
    ctx->pc = 0x503398u;
    // NOP
    // 0x50339c: 0x0  nop
    ctx->pc = 0x50339cu;
    // NOP
    // 0x5033a0: 0x0  nop
    ctx->pc = 0x5033a0u;
    // NOP
    // 0x5033a4: 0x0  nop
    ctx->pc = 0x5033a4u;
    // NOP
    // 0x5033a8: 0x0  nop
    ctx->pc = 0x5033a8u;
    // NOP
    // 0x5033ac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5033ACu;
    {
        const bool branch_taken_0x5033ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5033ac) {
            ctx->pc = 0x503398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503398;
        }
    }
    ctx->pc = 0x5033B4u;
    // 0x5033b4: 0x0  nop
    ctx->pc = 0x5033b4u;
    // NOP
    // 0x5033b8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5033b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5033bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5033bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5033c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5033c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5033c4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5033C4u;
    SET_GPR_U32(ctx, 31, 0x5033CCu);
    ctx->pc = 0x5033C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5033C4u;
    // 0x5033c8: 0x2484d168  addiu       $a0, $a0, -0x2E98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5033C4u, 0x5033CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5033CCu;
label_5033cc:
    // 0x5033cc: 0x0  nop
    ctx->pc = 0x5033ccu;
    // NOP
label_5033d0:
    // 0x5033d0: 0x0  nop
    ctx->pc = 0x5033d0u;
    // NOP
    // 0x5033d4: 0x0  nop
    ctx->pc = 0x5033d4u;
    // NOP
    // 0x5033d8: 0x0  nop
    ctx->pc = 0x5033d8u;
    // NOP
    // 0x5033dc: 0x0  nop
    ctx->pc = 0x5033dcu;
    // NOP
    // 0x5033e0: 0x0  nop
    ctx->pc = 0x5033e0u;
    // NOP
    // 0x5033e4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5033E4u;
    {
        const bool branch_taken_0x5033e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5033e4) {
            ctx->pc = 0x5033D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5033d0;
        }
    }
    ctx->pc = 0x5033ECu;
    // 0x5033ec: 0x0  nop
    ctx->pc = 0x5033ecu;
    // NOP
    ctx->pc = 0x5033f0u;
}
