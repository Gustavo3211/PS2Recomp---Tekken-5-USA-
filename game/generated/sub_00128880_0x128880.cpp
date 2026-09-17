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

// Function: sub_00128880
// Address: 0x128880 - 0x128ae0
void sub_00128880_0x128880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128880_0x128880");
#endif

    switch (ctx->pc) {
        case 0x128880u: goto label_128880;
        case 0x128884u: goto label_128884;
        case 0x128888u: goto label_128888;
        case 0x12888cu: goto label_12888c;
        case 0x128890u: goto label_128890;
        case 0x128894u: goto label_128894;
        case 0x128898u: goto label_128898;
        case 0x12889cu: goto label_12889c;
        case 0x1288a0u: goto label_1288a0;
        case 0x1288a4u: goto label_1288a4;
        case 0x1288a8u: goto label_1288a8;
        case 0x1288acu: goto label_1288ac;
        case 0x1288b0u: goto label_1288b0;
        case 0x1288b4u: goto label_1288b4;
        case 0x1288b8u: goto label_1288b8;
        case 0x1288bcu: goto label_1288bc;
        case 0x1288c0u: goto label_1288c0;
        case 0x1288c4u: goto label_1288c4;
        case 0x1288c8u: goto label_1288c8;
        case 0x1288ccu: goto label_1288cc;
        case 0x1288d0u: goto label_1288d0;
        case 0x1288d4u: goto label_1288d4;
        case 0x1288d8u: goto label_1288d8;
        case 0x1288dcu: goto label_1288dc;
        case 0x1288e0u: goto label_1288e0;
        case 0x1288e4u: goto label_1288e4;
        case 0x1288e8u: goto label_1288e8;
        case 0x1288ecu: goto label_1288ec;
        case 0x1288f0u: goto label_1288f0;
        case 0x1288f4u: goto label_1288f4;
        case 0x1288f8u: goto label_1288f8;
        case 0x1288fcu: goto label_1288fc;
        case 0x128900u: goto label_128900;
        case 0x128904u: goto label_128904;
        case 0x128908u: goto label_128908;
        case 0x12890cu: goto label_12890c;
        case 0x128910u: goto label_128910;
        case 0x128914u: goto label_128914;
        case 0x128918u: goto label_128918;
        case 0x12891cu: goto label_12891c;
        case 0x128920u: goto label_128920;
        case 0x128924u: goto label_128924;
        case 0x128928u: goto label_128928;
        case 0x12892cu: goto label_12892c;
        case 0x128930u: goto label_128930;
        case 0x128934u: goto label_128934;
        case 0x128938u: goto label_128938;
        case 0x12893cu: goto label_12893c;
        case 0x128940u: goto label_128940;
        case 0x128944u: goto label_128944;
        case 0x128948u: goto label_128948;
        case 0x12894cu: goto label_12894c;
        case 0x128950u: goto label_128950;
        case 0x128954u: goto label_128954;
        case 0x128958u: goto label_128958;
        case 0x12895cu: goto label_12895c;
        case 0x128960u: goto label_128960;
        case 0x128964u: goto label_128964;
        case 0x128968u: goto label_128968;
        case 0x12896cu: goto label_12896c;
        case 0x128970u: goto label_128970;
        case 0x128974u: goto label_128974;
        case 0x128978u: goto label_128978;
        case 0x12897cu: goto label_12897c;
        case 0x128980u: goto label_128980;
        case 0x128984u: goto label_128984;
        case 0x128988u: goto label_128988;
        case 0x12898cu: goto label_12898c;
        case 0x128990u: goto label_128990;
        case 0x128994u: goto label_128994;
        case 0x128998u: goto label_128998;
        case 0x12899cu: goto label_12899c;
        case 0x1289a0u: goto label_1289a0;
        case 0x1289a4u: goto label_1289a4;
        case 0x1289a8u: goto label_1289a8;
        case 0x1289acu: goto label_1289ac;
        case 0x1289b0u: goto label_1289b0;
        case 0x1289b4u: goto label_1289b4;
        case 0x1289b8u: goto label_1289b8;
        case 0x1289bcu: goto label_1289bc;
        case 0x1289c0u: goto label_1289c0;
        case 0x1289c4u: goto label_1289c4;
        case 0x1289c8u: goto label_1289c8;
        case 0x1289ccu: goto label_1289cc;
        case 0x1289d0u: goto label_1289d0;
        case 0x1289d4u: goto label_1289d4;
        case 0x1289d8u: goto label_1289d8;
        case 0x1289dcu: goto label_1289dc;
        case 0x1289e0u: goto label_1289e0;
        case 0x1289e4u: goto label_1289e4;
        case 0x1289e8u: goto label_1289e8;
        case 0x1289ecu: goto label_1289ec;
        case 0x1289f0u: goto label_1289f0;
        case 0x1289f4u: goto label_1289f4;
        case 0x1289f8u: goto label_1289f8;
        case 0x1289fcu: goto label_1289fc;
        case 0x128a00u: goto label_128a00;
        case 0x128a04u: goto label_128a04;
        case 0x128a08u: goto label_128a08;
        case 0x128a0cu: goto label_128a0c;
        case 0x128a10u: goto label_128a10;
        case 0x128a14u: goto label_128a14;
        case 0x128a18u: goto label_128a18;
        case 0x128a1cu: goto label_128a1c;
        case 0x128a20u: goto label_128a20;
        case 0x128a24u: goto label_128a24;
        case 0x128a28u: goto label_128a28;
        case 0x128a2cu: goto label_128a2c;
        case 0x128a30u: goto label_128a30;
        case 0x128a34u: goto label_128a34;
        case 0x128a38u: goto label_128a38;
        case 0x128a3cu: goto label_128a3c;
        case 0x128a40u: goto label_128a40;
        case 0x128a44u: goto label_128a44;
        case 0x128a48u: goto label_128a48;
        case 0x128a4cu: goto label_128a4c;
        case 0x128a50u: goto label_128a50;
        case 0x128a54u: goto label_128a54;
        case 0x128a58u: goto label_128a58;
        case 0x128a5cu: goto label_128a5c;
        case 0x128a60u: goto label_128a60;
        case 0x128a64u: goto label_128a64;
        case 0x128a68u: goto label_128a68;
        case 0x128a6cu: goto label_128a6c;
        case 0x128a70u: goto label_128a70;
        case 0x128a74u: goto label_128a74;
        case 0x128a78u: goto label_128a78;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a80u: goto label_128a80;
        case 0x128a84u: goto label_128a84;
        case 0x128a88u: goto label_128a88;
        case 0x128a8cu: goto label_128a8c;
        case 0x128a90u: goto label_128a90;
        case 0x128a94u: goto label_128a94;
        case 0x128a98u: goto label_128a98;
        case 0x128a9cu: goto label_128a9c;
        case 0x128aa0u: goto label_128aa0;
        case 0x128aa4u: goto label_128aa4;
        case 0x128aa8u: goto label_128aa8;
        case 0x128aacu: goto label_128aac;
        case 0x128ab0u: goto label_128ab0;
        case 0x128ab4u: goto label_128ab4;
        case 0x128ab8u: goto label_128ab8;
        case 0x128abcu: goto label_128abc;
        case 0x128ac0u: goto label_128ac0;
        case 0x128ac4u: goto label_128ac4;
        case 0x128ac8u: goto label_128ac8;
        case 0x128accu: goto label_128acc;
        case 0x128ad0u: goto label_128ad0;
        case 0x128ad4u: goto label_128ad4;
        case 0x128ad8u: goto label_128ad8;
        case 0x128adcu: goto label_128adc;
        default: break;
    }

    ctx->pc = 0x128880u;

label_128880:
    // 0x128880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_128884:
    // 0x128884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_128888:
    // 0x128888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12888c:
    // 0x12888c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_128890:
    // 0x128890: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x128890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_128894:
    // 0x128894: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_128898:
    if (ctx->pc == 0x128898u) {
        ctx->pc = 0x128898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128894u;
        // 0x128898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12889Cu;
        goto label_12889c;
    }
    ctx->pc = 0x128894u;
    {
        const bool branch_taken_0x128894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128894) {
            ctx->pc = 0x128898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128894u;
            // 0x128898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1288E0u;
            goto label_1288e0;
        }
    }
    ctx->pc = 0x12889Cu;
label_12889c:
    // 0x12889c: 0xc049f36  jal         func_127CD8
label_1288a0:
    if (ctx->pc == 0x1288A0u) {
        ctx->pc = 0x1288A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12889Cu;
        // 0x1288a0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1288A4u;
        goto label_1288a4;
    }
    ctx->pc = 0x12889Cu;
    SET_GPR_U32(ctx, 31, 0x1288A4u);
    ctx->pc = 0x1288A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12889Cu;
    // 0x1288a0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD8u, 0x12889Cu, 0x1288A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288A4u;
label_1288a4:
    // 0x1288a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1288a8:
    // 0x1288a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1288a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1288ac:
    // 0x1288ac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1288b0:
    if (ctx->pc == 0x1288B0u) {
        ctx->pc = 0x1288B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288ACu;
        // 0x1288b0: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1288B4u;
        goto label_1288b4;
    }
    ctx->pc = 0x1288ACu;
    {
        const bool branch_taken_0x1288ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288ACu;
        // 0x1288b0: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288ac) {
            ctx->pc = 0x1288E0u;
            goto label_1288e0;
        }
    }
    ctx->pc = 0x1288B4u;
label_1288b4:
    // 0x1288b4: 0x2462007c  addiu       $v0, $v1, 0x7C
    ctx->pc = 0x1288b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
label_1288b8:
    // 0x1288b8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1288b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1288bc:
    // 0x1288bc: 0x0  nop
    ctx->pc = 0x1288bcu;
    // NOP
label_1288c0:
    // 0x1288c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1288c4:
    // 0x1288c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1288c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1288c8:
    // 0x1288c8: 0x0  nop
    ctx->pc = 0x1288c8u;
    // NOP
label_1288cc:
    // 0x1288cc: 0x0  nop
    ctx->pc = 0x1288ccu;
    // NOP
label_1288d0:
    // 0x1288d0: 0x0  nop
    ctx->pc = 0x1288d0u;
    // NOP
label_1288d4:
    // 0x1288d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_1288d8:
    if (ctx->pc == 0x1288D8u) {
        ctx->pc = 0x1288D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288D4u;
        // 0x1288d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1288DCu;
        goto label_1288dc;
    }
    ctx->pc = 0x1288D4u;
    {
        const bool branch_taken_0x1288d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1288D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288D4u;
        // 0x1288d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288d4) {
            ctx->pc = 0x1288C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1288c0;
        }
    }
    ctx->pc = 0x1288DCu;
label_1288dc:
    // 0x1288dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1288dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1288e0:
    // 0x1288e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1288e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1288e4:
    // 0x1288e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1288e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1288e8:
    // 0x1288e8: 0x3e00008  jr          $ra
label_1288ec:
    if (ctx->pc == 0x1288ECu) {
        ctx->pc = 0x1288ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288E8u;
        // 0x1288ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1288F0u;
        goto label_1288f0;
    }
    ctx->pc = 0x1288E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1288ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288E8u;
        // 0x1288ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1288E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1288F0u;
label_1288f0:
    // 0x1288f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1288f4:
    // 0x1288f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1288f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1288f8:
    // 0x1288f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1288f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1288fc:
    // 0x1288fc: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1288fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_128900:
    // 0x128900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_128904:
    // 0x128904: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x128904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_128908:
    // 0x128908: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x128908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12890c:
    // 0x12890c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_128910:
    // 0x128910: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_128914:
    if (ctx->pc == 0x128914u) {
        ctx->pc = 0x128914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128910u;
        // 0x128914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128918u;
        goto label_128918;
    }
    ctx->pc = 0x128910u;
    {
        const bool branch_taken_0x128910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128910u;
        // 0x128914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128910) {
            ctx->pc = 0x128928u;
            goto label_128928;
        }
    }
    ctx->pc = 0x128918u;
label_128918:
    // 0x128918: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x128918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_12891c:
    // 0x12891c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_128920:
    // 0x128920: 0x1000000d  b           . + 4 + (0xD << 2)
label_128924:
    if (ctx->pc == 0x128924u) {
        ctx->pc = 0x128924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128920u;
        // 0x128924: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128928u;
        goto label_128928;
    }
    ctx->pc = 0x128920u;
    {
        const bool branch_taken_0x128920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128920u;
        // 0x128924: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128920) {
            ctx->pc = 0x128958u;
            goto label_128958;
        }
    }
    ctx->pc = 0x128928u;
label_128928:
    // 0x128928: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x128928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_12892c:
    // 0x12892c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_128930:
    if (ctx->pc == 0x128930u) {
        ctx->pc = 0x128930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12892Cu;
        // 0x128930: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128934u;
        goto label_128934;
    }
    ctx->pc = 0x12892Cu;
    {
        const bool branch_taken_0x12892c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12892Cu;
        // 0x128930: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12892c) {
            ctx->pc = 0x12894Cu;
            goto label_12894c;
        }
    }
    ctx->pc = 0x128934u;
label_128934:
    // 0x128934: 0xc04a220  jal         func_128880
label_128938:
    if (ctx->pc == 0x128938u) {
        ctx->pc = 0x12893Cu;
        goto label_12893c;
    }
    ctx->pc = 0x128934u;
    SET_GPR_U32(ctx, 31, 0x12893Cu);
    ctx->pc = 0x128880u;
    goto label_128880;
    ctx->pc = 0x12893Cu;
label_12893c:
    // 0x12893c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_128940:
    if (ctx->pc == 0x128940u) {
        ctx->pc = 0x128940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12893Cu;
        // 0x128940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128944u;
        goto label_128944;
    }
    ctx->pc = 0x12893Cu;
    {
        const bool branch_taken_0x12893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12893Cu;
        // 0x128940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12893c) {
            ctx->pc = 0x128958u;
            goto label_128958;
        }
    }
    ctx->pc = 0x128944u;
label_128944:
    // 0x128944: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x128944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_128948:
    // 0x128948: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x128948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_12894c:
    // 0x12894c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_128950:
    // 0x128950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128954:
    // 0x128954: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x128954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_128958:
    // 0x128958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12895c:
    // 0x12895c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12895cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_128960:
    // 0x128960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x128960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128964:
    // 0x128964: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x128964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_128968:
    // 0x128968: 0x3e00008  jr          $ra
label_12896c:
    if (ctx->pc == 0x12896Cu) {
        ctx->pc = 0x12896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128968u;
        // 0x12896c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128970u;
        goto label_128970;
    }
    ctx->pc = 0x128968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128968u;
        // 0x12896c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128970u;
label_128970:
    // 0x128970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_128974:
    // 0x128974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_128978:
    // 0x128978: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x128978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12897c:
    // 0x12897c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x12897cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_128980:
    // 0x128980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_128984:
    // 0x128984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_128988:
    // 0x128988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_12898c:
    if (ctx->pc == 0x12898Cu) {
        ctx->pc = 0x12898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128988u;
        // 0x12898c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128990u;
        goto label_128990;
    }
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128988u;
        // 0x12898c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128988) {
            ctx->pc = 0x1289A0u;
            goto label_1289a0;
        }
    }
    ctx->pc = 0x128990u;
label_128990:
    // 0x128990: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_128994:
    // 0x128994: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_128998:
    // 0x128998: 0x10000026  b           . + 4 + (0x26 << 2)
label_12899c:
    if (ctx->pc == 0x12899Cu) {
        ctx->pc = 0x12899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128998u;
        // 0x12899c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289A0u;
        goto label_1289a0;
    }
    ctx->pc = 0x128998u;
    {
        const bool branch_taken_0x128998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128998u;
        // 0x12899c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128998) {
            ctx->pc = 0x128A34u;
            goto label_128a34;
        }
    }
    ctx->pc = 0x1289A0u;
label_1289a0:
    // 0x1289a0: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1289a4:
    // 0x1289a4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1289a8:
    if (ctx->pc == 0x1289A8u) {
        ctx->pc = 0x1289A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289A4u;
        // 0x1289a8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289ACu;
        goto label_1289ac;
    }
    ctx->pc = 0x1289A4u;
    {
        const bool branch_taken_0x1289a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289A4u;
        // 0x1289a8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289a4) {
            ctx->pc = 0x1289C4u;
            goto label_1289c4;
        }
    }
    ctx->pc = 0x1289ACu;
label_1289ac:
    // 0x1289ac: 0xc04a220  jal         func_128880
label_1289b0:
    if (ctx->pc == 0x1289B0u) {
        ctx->pc = 0x1289B4u;
        goto label_1289b4;
    }
    ctx->pc = 0x1289ACu;
    SET_GPR_U32(ctx, 31, 0x1289B4u);
    ctx->pc = 0x128880u;
    goto label_128880;
    ctx->pc = 0x1289B4u;
label_1289b4:
    // 0x1289b4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1289b8:
    if (ctx->pc == 0x1289B8u) {
        ctx->pc = 0x1289B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289B4u;
        // 0x1289b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289BCu;
        goto label_1289bc;
    }
    ctx->pc = 0x1289B4u;
    {
        const bool branch_taken_0x1289b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289B4u;
        // 0x1289b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289b4) {
            ctx->pc = 0x128A34u;
            goto label_128a34;
        }
    }
    ctx->pc = 0x1289BCu;
label_1289bc:
    // 0x1289bc: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x1289bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1289c0:
    // 0x1289c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1289c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1289c4:
    // 0x1289c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1289c8:
    // 0x1289c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1289c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1289cc:
    // 0x1289cc: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
label_1289d0:
    if (ctx->pc == 0x1289D0u) {
        ctx->pc = 0x1289D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289CCu;
        // 0x1289d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289D4u;
        goto label_1289d4;
    }
    ctx->pc = 0x1289CCu;
    {
        const bool branch_taken_0x1289cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1289cc) {
            ctx->pc = 0x1289D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1289CCu;
            // 0x1289d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A00u;
            goto label_128a00;
        }
    }
    ctx->pc = 0x1289D4u;
label_1289d4:
    // 0x1289d4: 0xc04a2f2  jal         func_128BC8
label_1289d8:
    if (ctx->pc == 0x1289D8u) {
        ctx->pc = 0x1289D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289D4u;
        // 0x1289d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289DCu;
        goto label_1289dc;
    }
    ctx->pc = 0x1289D4u;
    SET_GPR_U32(ctx, 31, 0x1289DCu);
    ctx->pc = 0x1289D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1289D4u;
    // 0x1289d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BC8u, 0x1289D4u, 0x1289DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1289DCu;
label_1289dc:
    // 0x1289dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1289e0:
    // 0x1289e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1289e4:
    // 0x1289e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1289e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1289e8:
    // 0x1289e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1289e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1289ec:
    // 0x1289ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1289ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1289f0:
    // 0x1289f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1289f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1289f4:
    // 0x1289f4: 0x804a2da  j           func_128B68
label_1289f8:
    if (ctx->pc == 0x1289F8u) {
        ctx->pc = 0x1289F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289F4u;
        // 0x1289f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1289FCu;
        goto label_1289fc;
    }
    ctx->pc = 0x1289F4u;
    ctx->pc = 0x1289F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1289F4u;
    // 0x1289f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B68u, 0x1289F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1289FCu;
label_1289fc:
    // 0x1289fc: 0x0  nop
    ctx->pc = 0x1289fcu;
    // NOP
label_128a00:
    // 0x128a00: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_128a04:
    if (ctx->pc == 0x128A04u) {
        ctx->pc = 0x128A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A00u;
        // 0x128a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A08u;
        goto label_128a08;
    }
    ctx->pc = 0x128A00u;
    {
        const bool branch_taken_0x128a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x128A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A00u;
        // 0x128a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a00) {
            ctx->pc = 0x128A34u;
            goto label_128a34;
        }
    }
    ctx->pc = 0x128A08u;
label_128a08:
    // 0x128a08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_128a0c:
    // 0x128a0c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_128a10:
    if (ctx->pc == 0x128A10u) {
        ctx->pc = 0x128A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A0Cu;
        // 0x128a10: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A14u;
        goto label_128a14;
    }
    ctx->pc = 0x128A0Cu;
    {
        const bool branch_taken_0x128a0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x128a0c) {
            ctx->pc = 0x128A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128A0Cu;
            // 0x128a10: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A28u;
            goto label_128a28;
        }
    }
    ctx->pc = 0x128A14u;
label_128a14:
    // 0x128a14: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x128a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_128a18:
    // 0x128a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128a1c:
    // 0x128a1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_128a20:
    if (ctx->pc == 0x128A20u) {
        ctx->pc = 0x128A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A1Cu;
        // 0x128a20: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A24u;
        goto label_128a24;
    }
    ctx->pc = 0x128A1Cu;
    {
        const bool branch_taken_0x128a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A1Cu;
        // 0x128a20: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a1c) {
            ctx->pc = 0x128A34u;
            goto label_128a34;
        }
    }
    ctx->pc = 0x128A24u;
label_128a24:
    // 0x128a24: 0x0  nop
    ctx->pc = 0x128a24u;
    // NOP
label_128a28:
    // 0x128a28: 0xa0f809  jalr        $a1
label_128a2c:
    if (ctx->pc == 0x128A2Cu) {
        ctx->pc = 0x128A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A28u;
        // 0x128a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A30u;
        goto label_128a30;
    }
    ctx->pc = 0x128A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x128A30u);
        ctx->pc = 0x128A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A28u;
        // 0x128a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128A28u, 0x128A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x128A30u;
label_128a30:
    // 0x128a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x128a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128a34:
    // 0x128a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128a38:
    // 0x128a38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_128a3c:
    // 0x128a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128a40:
    // 0x128a40: 0x3e00008  jr          $ra
label_128a44:
    if (ctx->pc == 0x128A44u) {
        ctx->pc = 0x128A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A40u;
        // 0x128a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A48u;
        goto label_128a48;
    }
    ctx->pc = 0x128A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A40u;
        // 0x128a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128A48u;
label_128a48:
    // 0x128a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_128a4c:
    // 0x128a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_128a50:
    // 0x128a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_128a54:
    // 0x128a54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x128a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_128a58:
    // 0x128a58: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x128a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_128a5c:
    // 0x128a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_128a60:
    // 0x128a60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_128a64:
    // 0x128a64: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_128a68:
    if (ctx->pc == 0x128A68u) {
        ctx->pc = 0x128A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A64u;
        // 0x128a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A6Cu;
        goto label_128a6c;
    }
    ctx->pc = 0x128A64u;
    {
        const bool branch_taken_0x128a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A64u;
        // 0x128a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a64) {
            ctx->pc = 0x128ACCu;
            goto label_128acc;
        }
    }
    ctx->pc = 0x128A6Cu;
label_128a6c:
    // 0x128a6c: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x128a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_128a70:
    // 0x128a70: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_128a74:
    if (ctx->pc == 0x128A74u) {
        ctx->pc = 0x128A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A70u;
        // 0x128a74: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A78u;
        goto label_128a78;
    }
    ctx->pc = 0x128A70u;
    {
        const bool branch_taken_0x128a70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x128A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A70u;
        // 0x128a74: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a70) {
            ctx->pc = 0x128A94u;
            goto label_128a94;
        }
    }
    ctx->pc = 0x128A78u;
label_128a78:
    // 0x128a78: 0xc04a220  jal         func_128880
label_128a7c:
    if (ctx->pc == 0x128A7Cu) {
        ctx->pc = 0x128A80u;
        goto label_128a80;
    }
    ctx->pc = 0x128A78u;
    SET_GPR_U32(ctx, 31, 0x128A80u);
    ctx->pc = 0x128880u;
    goto label_128880;
    ctx->pc = 0x128A80u;
label_128a80:
    // 0x128a80: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_128a84:
    if (ctx->pc == 0x128A84u) {
        ctx->pc = 0x128A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A80u;
        // 0x128a84: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A88u;
        goto label_128a88;
    }
    ctx->pc = 0x128A80u;
    {
        const bool branch_taken_0x128a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a80) {
            ctx->pc = 0x128A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128A80u;
            // 0x128a84: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128A90u;
            goto label_128a90;
        }
    }
    ctx->pc = 0x128A88u;
label_128a88:
    // 0x128a88: 0x10000010  b           . + 4 + (0x10 << 2)
label_128a8c:
    if (ctx->pc == 0x128A8Cu) {
        ctx->pc = 0x128A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A88u;
        // 0x128a8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128A90u;
        goto label_128a90;
    }
    ctx->pc = 0x128A88u;
    {
        const bool branch_taken_0x128a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A88u;
        // 0x128a8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a88) {
            ctx->pc = 0x128ACCu;
            goto label_128acc;
        }
    }
    ctx->pc = 0x128A90u;
label_128a90:
    // 0x128a90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_128a94:
    // 0x128a94: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x128a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_128a98:
    // 0x128a98: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x128a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_128a9c:
    // 0x128a9c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_128aa0:
    if (ctx->pc == 0x128AA0u) {
        ctx->pc = 0x128AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A9Cu;
        // 0x128aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128AA4u;
        goto label_128aa4;
    }
    ctx->pc = 0x128A9Cu;
    {
        const bool branch_taken_0x128a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A9Cu;
        // 0x128aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a9c) {
            ctx->pc = 0x128ACCu;
            goto label_128acc;
        }
    }
    ctx->pc = 0x128AA4u;
label_128aa4:
    // 0x128aa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x128aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_128aa8:
    // 0x128aa8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_128aac:
    if (ctx->pc == 0x128AACu) {
        ctx->pc = 0x128AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AA8u;
        // 0x128aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128AB0u;
        goto label_128ab0;
    }
    ctx->pc = 0x128AA8u;
    {
        const bool branch_taken_0x128aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x128AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AA8u;
        // 0x128aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aa8) {
            ctx->pc = 0x128ACCu;
            goto label_128acc;
        }
    }
    ctx->pc = 0x128AB0u;
label_128ab0:
    // 0x128ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128ab4:
    // 0x128ab4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_128ab8:
    if (ctx->pc == 0x128AB8u) {
        ctx->pc = 0x128AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AB4u;
        // 0x128ab8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128ABCu;
        goto label_128abc;
    }
    ctx->pc = 0x128AB4u;
    {
        const bool branch_taken_0x128ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x128AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AB4u;
        // 0x128ab8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ab4) {
            ctx->pc = 0x128ACCu;
            goto label_128acc;
        }
    }
    ctx->pc = 0x128ABCu;
label_128abc:
    // 0x128abc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_128ac0:
    // 0x128ac0: 0xa0f809  jalr        $a1
label_128ac4:
    if (ctx->pc == 0x128AC4u) {
        ctx->pc = 0x128AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AC0u;
        // 0x128ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128AC8u;
        goto label_128ac8;
    }
    ctx->pc = 0x128AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x128AC8u);
        ctx->pc = 0x128AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AC0u;
        // 0x128ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128AC0u, 0x128AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x128AC8u;
label_128ac8:
    // 0x128ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x128ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128acc:
    // 0x128acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128ad0:
    // 0x128ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_128ad4:
    // 0x128ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128ad8:
    // 0x128ad8: 0x3e00008  jr          $ra
label_128adc:
    if (ctx->pc == 0x128ADCu) {
        ctx->pc = 0x128ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AD8u;
        // 0x128adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128AE0u;
        goto label_fallthrough_0x128ad8;
    }
    ctx->pc = 0x128AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AD8u;
        // 0x128adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x128ad8:
    ctx->pc = 0x128AE0u;
}
