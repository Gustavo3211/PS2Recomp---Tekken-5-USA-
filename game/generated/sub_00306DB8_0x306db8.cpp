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

// Function: sub_00306DB8
// Address: 0x306db8 - 0x307900
void sub_00306DB8_0x306db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306DB8_0x306db8");
#endif

    switch (ctx->pc) {
        case 0x306df8u: goto label_306df8;
        case 0x306e1cu: goto label_306e1c;
        case 0x306e40u: goto label_306e40;
        case 0x306e78u: goto label_306e78;
        case 0x306eb0u: goto label_306eb0;
        case 0x306eccu: goto label_306ecc;
        case 0x306f04u: goto label_306f04;
        case 0x30701cu: goto label_30701c;
        case 0x307068u: goto label_307068;
        case 0x3070d0u: goto label_3070d0;
        case 0x307110u: goto label_307110;
        case 0x307128u: goto label_307128;
        case 0x307144u: goto label_307144;
        case 0x307160u: goto label_307160;
        case 0x3072acu: goto label_3072ac;
        case 0x3072e0u: goto label_3072e0;
        case 0x3072f0u: goto label_3072f0;
        case 0x307308u: goto label_307308;
        case 0x307324u: goto label_307324;
        case 0x3073d4u: goto label_3073d4;
        case 0x307410u: goto label_307410;
        case 0x307438u: goto label_307438;
        case 0x307494u: goto label_307494;
        case 0x3074c0u: goto label_3074c0;
        case 0x307510u: goto label_307510;
        case 0x30754cu: goto label_30754c;
        case 0x307564u: goto label_307564;
        case 0x307584u: goto label_307584;
        case 0x3075c4u: goto label_3075c4;
        case 0x3075e4u: goto label_3075e4;
        case 0x307600u: goto label_307600;
        case 0x307618u: goto label_307618;
        case 0x30762cu: goto label_30762c;
        case 0x307640u: goto label_307640;
        case 0x307650u: goto label_307650;
        case 0x307658u: goto label_307658;
        case 0x307664u: goto label_307664;
        case 0x307680u: goto label_307680;
        case 0x3076a4u: goto label_3076a4;
        case 0x3076c4u: goto label_3076c4;
        case 0x3076f8u: goto label_3076f8;
        case 0x307700u: goto label_307700;
        case 0x307768u: goto label_307768;
        case 0x307784u: goto label_307784;
        case 0x3077b0u: goto label_3077b0;
        case 0x3077c8u: goto label_3077c8;
        case 0x3077e8u: goto label_3077e8;
        case 0x30782cu: goto label_30782c;
        case 0x30784cu: goto label_30784c;
        case 0x307864u: goto label_307864;
        case 0x307878u: goto label_307878;
        case 0x307884u: goto label_307884;
        case 0x30789cu: goto label_30789c;
        case 0x3078acu: goto label_3078ac;
        case 0x3078bcu: goto label_3078bc;
        case 0x3078ccu: goto label_3078cc;
        default: break;
    }

    ctx->pc = 0x306db8u;

    // 0x306db8: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x306db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x306dbc: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x306dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x306dc0: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x306dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x306dc4: 0xffb10228  sd          $s1, 0x228($sp)
    ctx->pc = 0x306dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 17));
    // 0x306dc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x306dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306dcc: 0xffb60250  sd          $s6, 0x250($sp)
    ctx->pc = 0x306dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x306dd0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x306dd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306dd4: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x306dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x306dd8: 0xffb30238  sd          $s3, 0x238($sp)
    ctx->pc = 0x306dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 19));
    // 0x306ddc: 0xffb40240  sd          $s4, 0x240($sp)
    ctx->pc = 0x306ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x306de0: 0xffb50248  sd          $s5, 0x248($sp)
    ctx->pc = 0x306de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 21));
    // 0x306de4: 0xffb70258  sd          $s7, 0x258($sp)
    ctx->pc = 0x306de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 23));
    // 0x306de8: 0xffbe0260  sd          $fp, 0x260($sp)
    ctx->pc = 0x306de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 30));
    // 0x306dec: 0xffbf0268  sd          $ra, 0x268($sp)
    ctx->pc = 0x306decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 31));
    // 0x306df0: 0xc0c2130  jal         func_3084C0
    ctx->pc = 0x306DF0u;
    SET_GPR_U32(ctx, 31, 0x306DF8u);
    ctx->pc = 0x306DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DF0u;
    // 0x306df4: 0x8ed20018  lw          $s2, 0x18($s6) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3084C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3084C0u, 0x306DF0u, 0x306DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DF8u;
label_306df8:
    // 0x306df8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x306df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x306dfc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x306dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x306e00: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x306e00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x306e04: 0x24844d80  addiu       $a0, $a0, 0x4D80
    ctx->pc = 0x306e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19840));
    // 0x306e08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x306e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306e0c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x306e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x306e10: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x306e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x306e14: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x306E14u;
    SET_GPR_U32(ctx, 31, 0x306E1Cu);
    ctx->pc = 0x306E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E14u;
    // 0x306e18: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x306E14u, 0x306E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E1Cu;
label_306e1c:
    // 0x306e1c: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x306E1Cu;
    {
        const bool branch_taken_0x306e1c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x306E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E1Cu;
        // 0x306e20: 0x3c150015  lui         $s5, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e1c) {
            ctx->pc = 0x306E84u;
            goto label_306e84;
        }
    }
    ctx->pc = 0x306E24u;
    // 0x306e24: 0x3c1480df  lui         $s4, 0x80DF
    ctx->pc = 0x306e24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32991 << 16));
    // 0x306e28: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x306e28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x306e2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x306e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x306e30: 0x24572990  addiu       $s7, $v0, 0x2990
    ctx->pc = 0x306e30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 10640));
    // 0x306e34: 0x3694cfcf  ori         $s4, $s4, 0xCFCF
    ctx->pc = 0x306e34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)53199);
    // 0x306e38: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x306e38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x306e3c: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x306e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_306e40:
    // 0x306e40: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x306e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306e44: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x306e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x306e48: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x306e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x306e4c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x306e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x306e50: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x306e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306e54: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x306e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x306e58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x306e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306e5c: 0x2511026  xor         $v0, $s2, $s1
    ctx->pc = 0x306e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
    // 0x306e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x306e64: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x306e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x306e68: 0x282280b  movn        $a1, $s4, $v0
    ctx->pc = 0x306e68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
    // 0x306e6c: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x306e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x306e70: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x306E70u;
    SET_GPR_U32(ctx, 31, 0x306E78u);
    ctx->pc = 0x306E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E70u;
    // 0x306e74: 0x26a44d88  addiu       $a0, $s5, 0x4D88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x306E70u, 0x306E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E78u;
label_306e78:
    // 0x306e78: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x306e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x306e7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x306E7Cu;
    {
        const bool branch_taken_0x306e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E7Cu;
        // 0x306e80: 0x113040  sll         $a2, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e7c) {
            ctx->pc = 0x306E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306e40;
        }
    }
    ctx->pc = 0x306E84u;
label_306e84:
    // 0x306e84: 0x3c0280df  lui         $v0, 0x80DF
    ctx->pc = 0x306e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32991 << 16));
    // 0x306e88: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x306e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x306e8c: 0x3442cfcf  ori         $v0, $v0, 0xCFCF
    ctx->pc = 0x306e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53199);
    // 0x306e90: 0x3a430008  xori        $v1, $s2, 0x8
    ctx->pc = 0x306e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x306e94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x306e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x306e98: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x306e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x306e9c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x306e9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x306ea0: 0x26a44d88  addiu       $a0, $s5, 0x4D88
    ctx->pc = 0x306ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19848));
    // 0x306ea4: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x306ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x306ea8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x306EA8u;
    SET_GPR_U32(ctx, 31, 0x306EB0u);
    ctx->pc = 0x306EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306EA8u;
    // 0x306eac: 0x34e70040  ori         $a3, $a3, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x306EA8u, 0x306EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EB0u;
label_306eb0:
    // 0x306eb0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x306eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x306eb4: 0x24442718  addiu       $a0, $v0, 0x2718
    ctx->pc = 0x306eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10008));
    // 0x306eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ebc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x306ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306ec0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x306ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x306ec4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x306EC4u;
    SET_GPR_U32(ctx, 31, 0x306ECCu);
    ctx->pc = 0x306EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306EC4u;
    // 0x306ec8: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x306EC4u, 0x306ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306ECCu;
label_306ecc:
    // 0x306ecc: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x306eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x306ed0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306ED0u;
    {
        const bool branch_taken_0x306ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306ED0u;
        // 0x306ed4: 0x3c1e0015  lui         $fp, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ed0) {
            ctx->pc = 0x306EE8u;
            goto label_306ee8;
        }
    }
    ctx->pc = 0x306ED8u;
    // 0x306ed8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x306ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x306edc: 0x27c44d90  addiu       $a0, $fp, 0x4D90
    ctx->pc = 0x306edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 19856));
    // 0x306ee0: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x306EE0u;
    {
        const bool branch_taken_0x306ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EE0u;
        // 0x306ee4: 0x34a50045  ori         $a1, $a1, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)69);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ee0) {
            ctx->pc = 0x3074B8u;
            goto label_3074b8;
        }
    }
    ctx->pc = 0x306EE8u;
label_306ee8:
    // 0x306ee8: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x306ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x306eec: 0x440016c  bltz        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x306EECu;
    {
        const bool branch_taken_0x306eec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EECu;
        // 0x306ef0: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306eec) {
            ctx->pc = 0x3074A0u;
            goto label_3074a0;
        }
    }
    ctx->pc = 0x306EF4u;
    // 0x306ef4: 0x8ec40014  lw          $a0, 0x14($s6)
    ctx->pc = 0x306ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x306ef8: 0xafa30218  sw          $v1, 0x218($sp)
    ctx->pc = 0x306ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 3));
    // 0x306efc: 0xc0b7208  jal         func_2DC820
    ctx->pc = 0x306EFCu;
    SET_GPR_U32(ctx, 31, 0x306F04u);
    ctx->pc = 0x306F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306EFCu;
    // 0x306f00: 0x8ec50010  lw          $a1, 0x10($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC820u, 0x306EFCu, 0x306F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F04u;
label_306f04:
    // 0x306f04: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x306f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x306f08: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x306f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x306f0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x306f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306f14: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x306f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x306f18: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x306f18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x306f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x306f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x306f20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x306f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x306f24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x306f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x306f28: 0x2442003a  addiu       $v0, $v0, 0x3A
    ctx->pc = 0x306f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x306f2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x306F2Cu;
    {
        const bool branch_taken_0x306f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F2Cu;
        // 0x306f30: 0xafa20214  sw          $v0, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f2c) {
            ctx->pc = 0x306F50u;
            goto label_306f50;
        }
    }
    ctx->pc = 0x306F34u;
    // 0x306f34: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x306f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x306f38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306F38u;
    {
        const bool branch_taken_0x306f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F38u;
        // 0x306f3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f38) {
            ctx->pc = 0x306F50u;
            goto label_306f50;
        }
    }
    ctx->pc = 0x306F40u;
    // 0x306f40: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x306f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x306f44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306f48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x306f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306f4c: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x306f4cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_306f50:
    // 0x306f50: 0x8ed70004  lw          $s7, 0x4($s6)
    ctx->pc = 0x306f50u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x306f54: 0x3c0280df  lui         $v0, 0x80DF
    ctx->pc = 0x306f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32991 << 16));
    // 0x306f58: 0x3c118070  lui         $s1, 0x8070
    ctx->pc = 0x306f58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32880 << 16));
    // 0x306f5c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x306f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x306f60: 0x24100012  addiu       $s0, $zero, 0x12
    ctx->pc = 0x306f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x306f64: 0x3442cfcf  ori         $v0, $v0, 0xCFCF
    ctx->pc = 0x306f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53199);
    // 0x306f68: 0x36317070  ori         $s1, $s1, 0x7070
    ctx->pc = 0x306f68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)28784);
    // 0x306f6c: 0x3ae30004  xori        $v1, $s7, 0x4
    ctx->pc = 0x306f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)4);
    // 0x306f70: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x306f70u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x306f74: 0x4800b  movn        $s0, $zero, $a0
    ctx->pc = 0x306f74u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x306f78: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x306f78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x306f7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x306f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306f80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x306f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306f84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x306f84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306f88: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x306F88u;
    {
        const bool branch_taken_0x306f88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F88u;
        // 0x306f8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f88) {
            ctx->pc = 0x306FACu;
            goto label_306fac;
        }
    }
    ctx->pc = 0x306F90u;
    // 0x306f90: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x306f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x306f94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306F94u;
    {
        const bool branch_taken_0x306f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F94u;
        // 0x306f98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f94) {
            ctx->pc = 0x306FACu;
            goto label_306fac;
        }
    }
    ctx->pc = 0x306F9Cu;
    // 0x306f9c: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x306f9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x306fa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306fa4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x306fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306fa8: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x306fa8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_306fac:
    // 0x306fac: 0x4800100  bltz        $a0, . + 4 + (0x100 << 2)
    ctx->pc = 0x306FACu;
    {
        const bool branch_taken_0x306fac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x306FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FACu;
        // 0x306fb0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fac) {
            ctx->pc = 0x3073B0u;
            goto label_3073b0;
        }
    }
    ctx->pc = 0x306FB4u;
    // 0x306fb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x306FB4u;
    {
        const bool branch_taken_0x306fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FB4u;
        // 0x306fb8: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fb4) {
            ctx->pc = 0x306FD0u;
            goto label_306fd0;
        }
    }
    ctx->pc = 0x306FBCu;
    // 0x306fbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306fc0: 0x108200b3  beq         $a0, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x306FC0u;
    {
        const bool branch_taken_0x306fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x306FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC0u;
        // 0x306fc4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fc0) {
            ctx->pc = 0x307290u;
            goto label_307290;
        }
    }
    ctx->pc = 0x306FC8u;
    // 0x306fc8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x306FC8u;
    {
        const bool branch_taken_0x306fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC8u;
        // 0x306fcc: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fc8) {
            ctx->pc = 0x3073B8u;
            goto label_3073b8;
        }
    }
    ctx->pc = 0x306FD0u;
label_306fd0:
    // 0x306fd0: 0x8ec4001c  lw          $a0, 0x1C($s6)
    ctx->pc = 0x306fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x306fd4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x306fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x306fd8: 0x2a5e0004  slti        $fp, $s2, 0x4
    ctx->pc = 0x306fd8u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x306fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x306fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x306fe0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x306fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x306fe4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x306fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x306fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x306fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x306fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x306fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x306ff0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x306ff4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x306ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x306ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306ffc: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x306ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x307000: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x307000u;
    {
        const bool branch_taken_0x307000 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x307004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307000u;
        // 0x307004: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307000) {
            ctx->pc = 0x30701Cu;
            goto label_30701c;
        }
    }
    ctx->pc = 0x307008u;
    // 0x307008: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x307008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30700c: 0x52e20004  beql        $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30700Cu;
    {
        const bool branch_taken_0x30700c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x30700c) {
            ctx->pc = 0x307010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30700Cu;
            // 0x307010: 0x8fa20218  lw          $v0, 0x218($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307020u;
            goto label_307020;
        }
    }
    ctx->pc = 0x307014u;
    // 0x307014: 0xc0b65b0  jal         func_2D96C0
    ctx->pc = 0x307014u;
    SET_GPR_U32(ctx, 31, 0x30701Cu);
    ctx->pc = 0x307018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307014u;
    // 0x307018: 0x8ec40030  lw          $a0, 0x30($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96C0u, 0x307014u, 0x30701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30701Cu;
label_30701c:
    // 0x30701c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x30701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_307020:
    // 0x307020: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307024: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x307024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x307028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30702c: 0x525821  addu        $t3, $v0, $s2
    ctx->pc = 0x30702cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x307030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307034: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x307034u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x307038: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x307038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30703c: 0x1725821  addu        $t3, $t3, $s2
    ctx->pc = 0x30703cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x307040: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x307040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x307044: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x307044u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x307048: 0x24642728  addiu       $a0, $v1, 0x2728
    ctx->pc = 0x307048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10024));
    // 0x30704c: 0x1705821  addu        $t3, $t3, $s0
    ctx->pc = 0x30704cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x307050: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x307050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x307054: 0x256b0028  addiu       $t3, $t3, 0x28
    ctx->pc = 0x307054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
    // 0x307058: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x307058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30705c: 0x240a00dc  addiu       $t2, $zero, 0xDC
    ctx->pc = 0x30705cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x307060: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307060u;
    SET_GPR_U32(ctx, 31, 0x307068u);
    ctx->pc = 0x307064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307060u;
    // 0x307064: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307060u, 0x307068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307068u;
label_307068:
    // 0x307068: 0x8ec70018  lw          $a3, 0x18($s6)
    ctx->pc = 0x307068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x30706c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x30706cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x307070: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x307070u;
    {
        const bool branch_taken_0x307070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307070u;
        // 0x307074: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307070) {
            ctx->pc = 0x307094u;
            goto label_307094;
        }
    }
    ctx->pc = 0x307078u;
    // 0x307078: 0x28e20007  slti        $v0, $a3, 0x7
    ctx->pc = 0x307078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x30707c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30707Cu;
    {
        const bool branch_taken_0x30707c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30707Cu;
        // 0x307080: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30707c) {
            ctx->pc = 0x307094u;
            goto label_307094;
        }
    }
    ctx->pc = 0x307084u;
    // 0x307084: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x307084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x307088: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x307088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30708c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30708cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307090: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x307090u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_307094:
    // 0x307094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307098: 0x1482001e  bne         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x307098u;
    {
        const bool branch_taken_0x307098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307098u;
        // 0x30709c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307098) {
            ctx->pc = 0x307114u;
            goto label_307114;
        }
    }
    ctx->pc = 0x3070A0u;
    // 0x3070a0: 0x8ec50014  lw          $a1, 0x14($s6)
    ctx->pc = 0x3070a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x3070a4: 0x8ec60010  lw          $a2, 0x10($s6)
    ctx->pc = 0x3070a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3070a8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3070a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3070ac: 0x8ec40030  lw          $a0, 0x30($s6)
    ctx->pc = 0x3070acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x3070b0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3070b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3070b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3070b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3070b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3070bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3070bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3070c0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3070c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3070c4: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x3070c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x3070c8: 0xc0b65b0  jal         func_2D96C0
    ctx->pc = 0x3070C8u;
    SET_GPR_U32(ctx, 31, 0x3070D0u);
    ctx->pc = 0x3070CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070C8u;
    // 0x3070cc: 0x24b0fffc  addiu       $s0, $a1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96C0u, 0x3070C8u, 0x3070D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070D0u;
label_3070d0:
    // 0x3070d0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x3070d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x3070d4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3070d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3070d8: 0x24642728  addiu       $a0, $v1, 0x2728
    ctx->pc = 0x3070d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10024));
    // 0x3070dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3070dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3070e0: 0x525821  addu        $t3, $v0, $s2
    ctx->pc = 0x3070e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3070e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3070e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3070e8: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x3070e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3070ec: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3070ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3070f0: 0x1725821  addu        $t3, $t3, $s2
    ctx->pc = 0x3070f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x3070f4: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x3070f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x3070f8: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x3070f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x3070fc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3070fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307100: 0x256b0028  addiu       $t3, $t3, 0x28
    ctx->pc = 0x307100u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
    // 0x307104: 0x240a00dc  addiu       $t2, $zero, 0xDC
    ctx->pc = 0x307104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x307108: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307108u;
    SET_GPR_U32(ctx, 31, 0x307110u);
    ctx->pc = 0x30710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307108u;
    // 0x30710c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307108u, 0x307110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307110u;
label_307110:
    // 0x307110: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x307110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_307114:
    // 0x307114: 0x12e20012  beq         $s7, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x307114u;
    {
        const bool branch_taken_0x307114 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x307118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307114u;
        // 0x307118: 0x8fa20210  lw          $v0, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307114) {
            ctx->pc = 0x307160u;
            goto label_307160;
        }
    }
    ctx->pc = 0x30711Cu;
    // 0x30711c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307120: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x307120u;
    SET_GPR_U32(ctx, 31, 0x307128u);
    ctx->pc = 0x307124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307120u;
    // 0x307124: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x307120u, 0x307128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307128u;
label_307128:
    // 0x307128: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x307128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x30712c: 0x24642718  addiu       $a0, $v1, 0x2718
    ctx->pc = 0x30712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10008));
    // 0x307130: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x307130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307138: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30713c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30713Cu;
    SET_GPR_U32(ctx, 31, 0x307144u);
    ctx->pc = 0x307140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30713Cu;
    // 0x307140: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30713Cu, 0x307144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307144u;
label_307144:
    // 0x307144: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x307144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x307148: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x307148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x30714c: 0x24442740  addiu       $a0, $v0, 0x2740
    ctx->pc = 0x30714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10048));
    // 0x307150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x307150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307154: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x307154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x307158: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307158u;
    SET_GPR_U32(ctx, 31, 0x307160u);
    ctx->pc = 0x30715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307158u;
    // 0x30715c: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307158u, 0x307160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307160u;
label_307160:
    // 0x307160: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x307160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x307164: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x307164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x307168: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x307168u;
    {
        const bool branch_taken_0x307168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307168) {
            ctx->pc = 0x30716Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307168u;
            // 0x30716c: 0x8ec2002c  lw          $v0, 0x2C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30726Cu;
            goto label_30726c;
        }
    }
    ctx->pc = 0x307170u;
    // 0x307170: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x307170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x307174: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x307178: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30717c: 0x8c632770  lw          $v1, 0x2770($v1)
    ctx->pc = 0x30717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10096)));
    // 0x307180: 0x600008  jr          $v1
    ctx->pc = 0x307180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x307188u: goto label_307188;
            case 0x3071C8u: goto label_3071c8;
            case 0x3071D8u: goto label_3071d8;
            case 0x307218u: goto label_307218;
            case 0x307258u: goto label_307258;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x307188u;
label_307188:
    // 0x307188: 0x3c1180df  lui         $s1, 0x80DF
    ctx->pc = 0x307188u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32991 << 16));
    // 0x30718c: 0x3c140003  lui         $s4, 0x3
    ctx->pc = 0x30718cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
    // 0x307190: 0x3631cfcf  ori         $s1, $s1, 0xCFCF
    ctx->pc = 0x307190u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)53199);
    // 0x307194: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x307194u;
    {
        const bool branch_taken_0x307194 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x307198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307194u;
        // 0x307198: 0x3694006a  ori         $s4, $s4, 0x6A (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)106);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307194) {
            ctx->pc = 0x3071B0u;
            goto label_3071b0;
        }
    }
    ctx->pc = 0x30719Cu;
    // 0x30719c: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x30719cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x3071a0: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x3071a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x3071a4: 0x3673004c  ori         $s3, $s3, 0x4C
    ctx->pc = 0x3071a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)76);
    // 0x3071a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3071A8u;
    {
        const bool branch_taken_0x3071a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071A8u;
        // 0x3071ac: 0x36b500b0  ori         $s5, $s5, 0xB0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)176);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071a8) {
            ctx->pc = 0x307268u;
            goto label_307268;
        }
    }
    ctx->pc = 0x3071B0u;
label_3071b0:
    // 0x3071b0: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x3071b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x3071b4: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x3071b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x3071b8: 0x3673005b  ori         $s3, $s3, 0x5B
    ctx->pc = 0x3071b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)91);
    // 0x3071bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3071BCu;
    {
        const bool branch_taken_0x3071bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071BCu;
        // 0x3071c0: 0x36b500bd  ori         $s5, $s5, 0xBD (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)189);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071bc) {
            ctx->pc = 0x307268u;
            goto label_307268;
        }
    }
    ctx->pc = 0x3071C4u;
    // 0x3071c4: 0x0  nop
    ctx->pc = 0x3071c4u;
    // NOP
label_3071c8:
    // 0x3071c8: 0x3c140003  lui         $s4, 0x3
    ctx->pc = 0x3071c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
    // 0x3071cc: 0x3c1180ff  lui         $s1, 0x80FF
    ctx->pc = 0x3071ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33023 << 16));
    // 0x3071d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3071D0u;
    {
        const bool branch_taken_0x3071d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071D0u;
        // 0x3071d4: 0x36940043  ori         $s4, $s4, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)67);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071d0) {
            ctx->pc = 0x307268u;
            goto label_307268;
        }
    }
    ctx->pc = 0x3071D8u;
label_3071d8:
    // 0x3071d8: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x3071d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x3071dc: 0x3c140003  lui         $s4, 0x3
    ctx->pc = 0x3071dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
    // 0x3071e0: 0x3631ff00  ori         $s1, $s1, 0xFF00
    ctx->pc = 0x3071e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65280);
    // 0x3071e4: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x3071E4u;
    {
        const bool branch_taken_0x3071e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071E4u;
        // 0x3071e8: 0x36940042  ori         $s4, $s4, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)66);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071e4) {
            ctx->pc = 0x307200u;
            goto label_307200;
        }
    }
    ctx->pc = 0x3071ECu;
    // 0x3071ec: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x3071ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x3071f0: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x3071f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x3071f4: 0x3673004b  ori         $s3, $s3, 0x4B
    ctx->pc = 0x3071f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)75);
    // 0x3071f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3071F8u;
    {
        const bool branch_taken_0x3071f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071F8u;
        // 0x3071fc: 0x36b500b3  ori         $s5, $s5, 0xB3 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)179);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071f8) {
            ctx->pc = 0x307268u;
            goto label_307268;
        }
    }
    ctx->pc = 0x307200u;
label_307200:
    // 0x307200: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x307200u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x307204: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x307204u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x307208: 0x3673005a  ori         $s3, $s3, 0x5A
    ctx->pc = 0x307208u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)90);
    // 0x30720c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30720Cu;
    {
        const bool branch_taken_0x30720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30720Cu;
        // 0x307210: 0x36b500c0  ori         $s5, $s5, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30720c) {
            ctx->pc = 0x307268u;
            goto label_307268;
        }
    }
    ctx->pc = 0x307214u;
    // 0x307214: 0x0  nop
    ctx->pc = 0x307214u;
    // NOP
label_307218:
    // 0x307218: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x307218u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x30721c: 0x3c140003  lui         $s4, 0x3
    ctx->pc = 0x30721cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
    // 0x307220: 0x363100ff  ori         $s1, $s1, 0xFF
    ctx->pc = 0x307220u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)255);
    // 0x307224: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x307224u;
    {
        const bool branch_taken_0x307224 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x307228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307224u;
        // 0x307228: 0x36940041  ori         $s4, $s4, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307224) {
            ctx->pc = 0x307240u;
            goto label_307240;
        }
    }
    ctx->pc = 0x30722Cu;
    // 0x30722c: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x30722cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x307230: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x307230u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x307234: 0x3673004d  ori         $s3, $s3, 0x4D
    ctx->pc = 0x307234u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)77);
    // 0x307238: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x307238u;
    {
        const bool branch_taken_0x307238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307238u;
        // 0x30723c: 0x36b500b1  ori         $s5, $s5, 0xB1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)177);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307238) {
            ctx->pc = 0x307268u;
            goto label_307268;
        }
    }
    ctx->pc = 0x307240u;
label_307240:
    // 0x307240: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x307240u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x307244: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x307244u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x307248: 0x3673005c  ori         $s3, $s3, 0x5C
    ctx->pc = 0x307248u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)92);
    // 0x30724c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30724Cu;
    {
        const bool branch_taken_0x30724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30724Cu;
        // 0x307250: 0x36b500be  ori         $s5, $s5, 0xBE (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)190);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30724c) {
            ctx->pc = 0x307268u;
            goto label_307268;
        }
    }
    ctx->pc = 0x307254u;
    // 0x307254: 0x0  nop
    ctx->pc = 0x307254u;
    // NOP
label_307258:
    // 0x307258: 0x3c118070  lui         $s1, 0x8070
    ctx->pc = 0x307258u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32880 << 16));
    // 0x30725c: 0x3c140003  lui         $s4, 0x3
    ctx->pc = 0x30725cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
    // 0x307260: 0x36317070  ori         $s1, $s1, 0x7070
    ctx->pc = 0x307260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)28784);
    // 0x307264: 0x369400ae  ori         $s4, $s4, 0xAE
    ctx->pc = 0x307264u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)174);
label_307268:
    // 0x307268: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x307268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_30726c:
    // 0x30726c: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x30726Cu;
    {
        const bool branch_taken_0x30726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30726c) {
            ctx->pc = 0x307270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30726Cu;
            // 0x307270: 0x8ec2000c  lw          $v0, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3073B4u;
            goto label_3073b4;
        }
    }
    ctx->pc = 0x307274u;
    // 0x307274: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x307274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x307278: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x307278u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x30727c: 0x344200cf  ori         $v0, $v0, 0xCF
    ctx->pc = 0x30727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)207);
    // 0x307280: 0x367300cd  ori         $s3, $s3, 0xCD
    ctx->pc = 0x307280u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)205);
    // 0x307284: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x307284u;
    {
        const bool branch_taken_0x307284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307284u;
        // 0x307288: 0x5e980a  movz        $s3, $v0, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307284) {
            ctx->pc = 0x3073B0u;
            goto label_3073b0;
        }
    }
    ctx->pc = 0x30728Cu;
    // 0x30728c: 0x0  nop
    ctx->pc = 0x30728cu;
    // NOP
label_307290:
    // 0x307290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307294: 0x24702718  addiu       $s0, $v1, 0x2718
    ctx->pc = 0x307294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 10008));
    // 0x307298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30729c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072a0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3072a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3072a4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3072A4u;
    SET_GPR_U32(ctx, 31, 0x3072ACu);
    ctx->pc = 0x3072A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072A4u;
    // 0x3072a8: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3072A4u, 0x3072ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072ACu;
label_3072ac:
    // 0x3072ac: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x3072acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x3072b0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x3072b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x3072b4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3072b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3072b8: 0x24642750  addiu       $a0, $v1, 0x2750
    ctx->pc = 0x3072b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10064));
    // 0x3072bc: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x3072bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3072c0: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x3072c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3072c4: 0x350800ca  ori         $t0, $t0, 0xCA
    ctx->pc = 0x3072c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)202);
    // 0x3072c8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3072c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3072cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3072ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072d0: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x3072d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x3072d4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3072d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3072d8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3072D8u;
    SET_GPR_U32(ctx, 31, 0x3072E0u);
    ctx->pc = 0x3072DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072D8u;
    // 0x3072dc: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3072D8u, 0x3072E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072E0u;
label_3072e0:
    // 0x3072e0: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x3072e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x3072e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3072e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3072e8: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x3072E8u;
    SET_GPR_U32(ctx, 31, 0x3072F0u);
    ctx->pc = 0x3072ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072E8u;
    // 0x3072ec: 0x34a5a120  ori         $a1, $a1, 0xA120 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x3072E8u, 0x3072F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072F0u;
label_3072f0:
    // 0x3072f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3072f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3072f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3072f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3072f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072fc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3072fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307300: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307300u;
    SET_GPR_U32(ctx, 31, 0x307308u);
    ctx->pc = 0x307304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307300u;
    // 0x307304: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307300u, 0x307308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307308u;
label_307308:
    // 0x307308: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x307308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x30730c: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x30730cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x307310: 0x24442740  addiu       $a0, $v0, 0x2740
    ctx->pc = 0x307310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10048));
    // 0x307314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x307314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307318: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x307318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x30731c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30731Cu;
    SET_GPR_U32(ctx, 31, 0x307324u);
    ctx->pc = 0x307320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30731Cu;
    // 0x307320: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30731Cu, 0x307324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307324u;
label_307324:
    // 0x307324: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x307324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307328: 0x12e20011  beq         $s7, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x307328u;
    {
        const bool branch_taken_0x307328 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x30732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307328u;
        // 0x30732c: 0x2ae20004  slti        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307328) {
            ctx->pc = 0x307370u;
            goto label_307370;
        }
    }
    ctx->pc = 0x307330u;
    // 0x307330: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x307330u;
    {
        const bool branch_taken_0x307330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307330u;
        // 0x307334: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307330) {
            ctx->pc = 0x307350u;
            goto label_307350;
        }
    }
    ctx->pc = 0x307338u;
    // 0x307338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30733c: 0x52e20008  beql        $s7, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30733Cu;
    {
        const bool branch_taken_0x30733c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x30733c) {
            ctx->pc = 0x307340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30733Cu;
            // 0x307340: 0x3c140003  lui         $s4, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307360u;
            goto label_307360;
        }
    }
    ctx->pc = 0x307344u;
    // 0x307344: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x307344u;
    {
        const bool branch_taken_0x307344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307344u;
        // 0x307348: 0x8ec3002c  lw          $v1, 0x2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307344) {
            ctx->pc = 0x3073A8u;
            goto label_3073a8;
        }
    }
    ctx->pc = 0x30734Cu;
    // 0x30734c: 0x0  nop
    ctx->pc = 0x30734cu;
    // NOP
label_307350:
    // 0x307350: 0x52e20011  beql        $s7, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x307350u;
    {
        const bool branch_taken_0x307350 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x307350) {
            ctx->pc = 0x307354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307350u;
            // 0x307354: 0x3c140003  lui         $s4, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307398u;
            goto label_307398;
        }
    }
    ctx->pc = 0x307358u;
    // 0x307358: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x307358u;
    {
        const bool branch_taken_0x307358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307358u;
        // 0x30735c: 0x8ec3002c  lw          $v1, 0x2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307358) {
            ctx->pc = 0x3073A8u;
            goto label_3073a8;
        }
    }
    ctx->pc = 0x307360u;
label_307360:
    // 0x307360: 0x3c1180ff  lui         $s1, 0x80FF
    ctx->pc = 0x307360u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33023 << 16));
    // 0x307364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x307364u;
    {
        const bool branch_taken_0x307364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307364u;
        // 0x307368: 0x369400c9  ori         $s4, $s4, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)201);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307364) {
            ctx->pc = 0x3073A4u;
            goto label_3073a4;
        }
    }
    ctx->pc = 0x30736Cu;
    // 0x30736c: 0x0  nop
    ctx->pc = 0x30736cu;
    // NOP
label_307370:
    // 0x307370: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x307370u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x307374: 0x3c140003  lui         $s4, 0x3
    ctx->pc = 0x307374u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)3 << 16));
    // 0x307378: 0x3c130003  lui         $s3, 0x3
    ctx->pc = 0x307378u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3 << 16));
    // 0x30737c: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x30737cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x307380: 0x363100ff  ori         $s1, $s1, 0xFF
    ctx->pc = 0x307380u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)255);
    // 0x307384: 0x36940099  ori         $s4, $s4, 0x99
    ctx->pc = 0x307384u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)153);
    // 0x307388: 0x36730089  ori         $s3, $s3, 0x89
    ctx->pc = 0x307388u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)137);
    // 0x30738c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30738Cu;
    {
        const bool branch_taken_0x30738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30738Cu;
        // 0x307390: 0x36b500b8  ori         $s5, $s5, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)184);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30738c) {
            ctx->pc = 0x3073A4u;
            goto label_3073a4;
        }
    }
    ctx->pc = 0x307394u;
    // 0x307394: 0x0  nop
    ctx->pc = 0x307394u;
    // NOP
label_307398:
    // 0x307398: 0x3c118070  lui         $s1, 0x8070
    ctx->pc = 0x307398u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32880 << 16));
    // 0x30739c: 0x36317070  ori         $s1, $s1, 0x7070
    ctx->pc = 0x30739cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)28784);
    // 0x3073a0: 0x369400ae  ori         $s4, $s4, 0xAE
    ctx->pc = 0x3073a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)174);
label_3073a4:
    // 0x3073a4: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x3073a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_3073a8:
    // 0x3073a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3073a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3073ac: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x3073acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_3073b0:
    // 0x3073b0: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x3073b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_3073b4:
    // 0x3073b4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3073b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_3073b8:
    // 0x3073b8: 0x24642718  addiu       $a0, $v1, 0x2718
    ctx->pc = 0x3073b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10008));
    // 0x3073bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3073bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3073c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3073c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3073c4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3073c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3073c8: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x3073c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x3073cc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3073CCu;
    SET_GPR_U32(ctx, 31, 0x3073D4u);
    ctx->pc = 0x3073D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073CCu;
    // 0x3073d0: 0x42a80b  movn        $s5, $v0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3073CCu, 0x3073D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073D4u;
label_3073d4:
    // 0x3073d4: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x3073d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x3073d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3073D8u;
    {
        const bool branch_taken_0x3073d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3073DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073D8u;
        // 0x3073dc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073d8) {
            ctx->pc = 0x307414u;
            goto label_307414;
        }
    }
    ctx->pc = 0x3073E0u;
    // 0x3073e0: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x3073e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x3073e4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3073e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3073e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3073e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073ec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3073ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073f0: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x3073f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3073f4: 0x24642750  addiu       $a0, $v1, 0x2750
    ctx->pc = 0x3073f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10064));
    // 0x3073f8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3073f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3073fc: 0x24060269  addiu       $a2, $zero, 0x269
    ctx->pc = 0x3073fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
    // 0x307400: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x307400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x307404: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x307404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x307408: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307408u;
    SET_GPR_U32(ctx, 31, 0x307410u);
    ctx->pc = 0x30740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307408u;
    // 0x30740c: 0x24e70069  addiu       $a3, $a3, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307408u, 0x307410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307410u;
label_307410:
    // 0x307410: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x307410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_307414:
    // 0x307414: 0x3c0980ff  lui         $t1, 0x80FF
    ctx->pc = 0x307414u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)33023 << 16));
    // 0x307418: 0x24842760  addiu       $a0, $a0, 0x2760
    ctx->pc = 0x307418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10080));
    // 0x30741c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x30741cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307428: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30742c: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x30742cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x307430: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307430u;
    SET_GPR_U32(ctx, 31, 0x307438u);
    ctx->pc = 0x307434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307430u;
    // 0x307434: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307430u, 0x307438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307438u;
label_307438:
    // 0x307438: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x307438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x30743c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30743Cu;
    {
        const bool branch_taken_0x30743c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30743Cu;
        // 0x307440: 0x8fa20218  lw          $v0, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30743c) {
            ctx->pc = 0x307450u;
            goto label_307450;
        }
    }
    ctx->pc = 0x307444u;
    // 0x307444: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x307444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x307448: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x307448u;
    {
        const bool branch_taken_0x307448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307448u;
        // 0x30744c: 0x8fa20218  lw          $v0, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307448) {
            ctx->pc = 0x3074C8u;
            goto label_3074c8;
        }
    }
    ctx->pc = 0x307450u;
label_307450:
    // 0x307450: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x307450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x307454: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x307454u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x307458: 0x24842728  addiu       $a0, $a0, 0x2728
    ctx->pc = 0x307458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10024));
    // 0x30745c: 0x525821  addu        $t3, $v0, $s2
    ctx->pc = 0x30745cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x307460: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x307460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307464: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x307464u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x307468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30746c: 0x1725821  addu        $t3, $t3, $s2
    ctx->pc = 0x30746cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x307470: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307474: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x307474u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x307478: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x307478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x30747c: 0x256b004c  addiu       $t3, $t3, 0x4C
    ctx->pc = 0x30747cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 76));
    // 0x307480: 0x352980ff  ori         $t1, $t1, 0x80FF
    ctx->pc = 0x307480u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)33023);
    // 0x307484: 0x240a019a  addiu       $t2, $zero, 0x19A
    ctx->pc = 0x307484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
    // 0x307488: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x307488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x30748c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30748Cu;
    SET_GPR_U32(ctx, 31, 0x307494u);
    ctx->pc = 0x307490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30748Cu;
    // 0x307490: 0x3c1e0015  lui         $fp, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30748Cu, 0x307494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307494u;
label_307494:
    // 0x307494: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x307494u;
    {
        const bool branch_taken_0x307494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307494u;
        // 0x307498: 0x8ec3002c  lw          $v1, 0x2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307494) {
            ctx->pc = 0x3074CCu;
            goto label_3074cc;
        }
    }
    ctx->pc = 0x30749Cu;
    // 0x30749c: 0x0  nop
    ctx->pc = 0x30749cu;
    // NOP
label_3074a0:
    // 0x3074a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3074a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3074a4: 0x3c1e0015  lui         $fp, 0x15
    ctx->pc = 0x3074a4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)21 << 16));
    // 0x3074a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3074a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3074ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3074acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3074b0: 0x8ca529b8  lw          $a1, 0x29B8($a1)
    ctx->pc = 0x3074b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10680)));
    // 0x3074b4: 0x27c44d90  addiu       $a0, $fp, 0x4D90
    ctx->pc = 0x3074b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 19856));
label_3074b8:
    // 0x3074b8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3074B8u;
    SET_GPR_U32(ctx, 31, 0x3074C0u);
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3074B8u, 0x3074C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074C0u;
label_3074c0:
    // 0x3074c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3074C0u;
    {
        const bool branch_taken_0x3074c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074C0u;
        // 0x3074c4: 0x8ec3002c  lw          $v1, 0x2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074c0) {
            ctx->pc = 0x3074CCu;
            goto label_3074cc;
        }
    }
    ctx->pc = 0x3074C8u;
label_3074c8:
    // 0x3074c8: 0x3c1e0015  lui         $fp, 0x15
    ctx->pc = 0x3074c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)21 << 16));
label_3074cc:
    // 0x3074cc: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3074CCu;
    {
        const bool branch_taken_0x3074cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074CCu;
        // 0x3074d0: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074cc) {
            ctx->pc = 0x3075E4u;
            goto label_3075e4;
        }
    }
    ctx->pc = 0x3074D4u;
    // 0x3074d4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3074d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3074d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3074d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3074dc: 0x24732718  addiu       $s3, $v1, 0x2718
    ctx->pc = 0x3074dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 10008));
    // 0x3074e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3074e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3074e4: 0x8ed50028  lw          $s5, 0x28($s6)
    ctx->pc = 0x3074e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x3074e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3074e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3074ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3074ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3074f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3074f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3074f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3074f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3074f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3074f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3074fc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3074fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307500: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x307500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x307504: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x307504u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x307508: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307508u;
    SET_GPR_U32(ctx, 31, 0x307510u);
    ctx->pc = 0x30750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307508u;
    // 0x30750c: 0x2457006b  addiu       $s7, $v0, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 107));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307508u, 0x307510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307510u;
label_307510:
    // 0x307510: 0x361080ff  ori         $s0, $s0, 0x80FF
    ctx->pc = 0x307510u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)33023);
    // 0x307514: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x307514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307518: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x307518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x30751c: 0x3c1180ff  lui         $s1, 0x80FF
    ctx->pc = 0x30751cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33023 << 16));
    // 0x307520: 0x2b41026  xor         $v0, $s5, $s4
    ctx->pc = 0x307520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 20));
    // 0x307524: 0x24722750  addiu       $s2, $v1, 0x2750
    ctx->pc = 0x307524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 10064));
    // 0x307528: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x307528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x30752c: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x307530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x307530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307534: 0x2406017c  addiu       $a2, $zero, 0x17C
    ctx->pc = 0x307534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x307538: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x307538u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x30753c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x30753cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307540: 0x3508006d  ori         $t0, $t0, 0x6D
    ctx->pc = 0x307540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)109);
    // 0x307544: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307544u;
    SET_GPR_U32(ctx, 31, 0x30754Cu);
    ctx->pc = 0x307548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307544u;
    // 0x307548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307544u, 0x30754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30754Cu;
label_30754c:
    // 0x30754c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307554: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x307554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307558: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30755c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30755Cu;
    SET_GPR_U32(ctx, 31, 0x307564u);
    ctx->pc = 0x307560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30755Cu;
    // 0x307560: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30755Cu, 0x307564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307564u;
label_307564:
    // 0x307564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x307564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307568: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x307568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30756c: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x30756cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x307570: 0x235280b  movn        $a1, $s1, $s5
    ctx->pc = 0x307570u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x307574: 0x240601b8  addiu       $a2, $zero, 0x1B8
    ctx->pc = 0x307574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x307578: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x307578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30757c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30757Cu;
    SET_GPR_U32(ctx, 31, 0x307584u);
    ctx->pc = 0x307580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30757Cu;
    // 0x307580: 0x3508006e  ori         $t0, $t0, 0x6E (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30757Cu, 0x307584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307584u;
label_307584:
    // 0x307584: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x307584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x307588: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x307588u;
    {
        const bool branch_taken_0x307588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x30758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307588u;
        // 0x30758c: 0x3c100003  lui         $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307588) {
            ctx->pc = 0x3075A0u;
            goto label_3075a0;
        }
    }
    ctx->pc = 0x307590u;
    // 0x307590: 0x24110190  addiu       $s1, $zero, 0x190
    ctx->pc = 0x307590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x307594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x307594u;
    {
        const bool branch_taken_0x307594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307594u;
        // 0x307598: 0x3610006f  ori         $s0, $s0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307594) {
            ctx->pc = 0x3075A8u;
            goto label_3075a8;
        }
    }
    ctx->pc = 0x30759Cu;
    // 0x30759c: 0x0  nop
    ctx->pc = 0x30759cu;
    // NOP
label_3075a0:
    // 0x3075a0: 0x241101a4  addiu       $s1, $zero, 0x1A4
    ctx->pc = 0x3075a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x3075a4: 0x36100070  ori         $s0, $s0, 0x70
    ctx->pc = 0x3075a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)112);
label_3075a8:
    // 0x3075a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3075a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3075ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3075acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3075b0: 0x24442718  addiu       $a0, $v0, 0x2718
    ctx->pc = 0x3075b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10008));
    // 0x3075b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3075b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3075b8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3075b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3075bc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3075BCu;
    SET_GPR_U32(ctx, 31, 0x3075C4u);
    ctx->pc = 0x3075C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075BCu;
    // 0x3075c0: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3075BCu, 0x3075C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075C4u;
label_3075c4:
    // 0x3075c4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3075c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3075c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3075c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3075cc: 0x24642750  addiu       $a0, $v1, 0x2750
    ctx->pc = 0x3075ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10064));
    // 0x3075d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3075d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075d4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3075d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3075d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075dc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3075DCu;
    SET_GPR_U32(ctx, 31, 0x3075E4u);
    ctx->pc = 0x3075E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075DCu;
    // 0x3075e0: 0x34a580ff  ori         $a1, $a1, 0x80FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33023);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3075DCu, 0x3075E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075E4u;
label_3075e4:
    // 0x3075e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3075e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3075e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3075e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075ec: 0x24442718  addiu       $a0, $v0, 0x2718
    ctx->pc = 0x3075ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10008));
    // 0x3075f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3075f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3075f4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3075f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3075f8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3075F8u;
    SET_GPR_U32(ctx, 31, 0x307600u);
    ctx->pc = 0x3075FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075F8u;
    // 0x3075fc: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3075F8u, 0x307600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307600u;
label_307600:
    // 0x307600: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x307600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x307604: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307604u;
    {
        const bool branch_taken_0x307604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307604u;
        // 0x307608: 0x27c44d90  addiu       $a0, $fp, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 19856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307604) {
            ctx->pc = 0x307620u;
            goto label_307620;
        }
    }
    ctx->pc = 0x30760Cu;
    // 0x30760c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x30760cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x307610: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307610u;
    SET_GPR_U32(ctx, 31, 0x307618u);
    ctx->pc = 0x307614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307610u;
    // 0x307614: 0x34a50071  ori         $a1, $a1, 0x71 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)113);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307610u, 0x307618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307618u;
label_307618:
    // 0x307618: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x307618u;
    {
        const bool branch_taken_0x307618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307618u;
        // 0x30761c: 0x27d04d90  addiu       $s0, $fp, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307618) {
            ctx->pc = 0x307630u;
            goto label_307630;
        }
    }
    ctx->pc = 0x307620u;
label_307620:
    // 0x307620: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x307620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x307624: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307624u;
    SET_GPR_U32(ctx, 31, 0x30762Cu);
    ctx->pc = 0x307628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307624u;
    // 0x307628: 0x34a50017  ori         $a1, $a1, 0x17 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307624u, 0x30762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30762Cu;
label_30762c:
    // 0x30762c: 0x27d04d90  addiu       $s0, $fp, 0x4D90
    ctx->pc = 0x30762cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19856));
label_307630:
    // 0x307630: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x307630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x307634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307638: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307638u;
    SET_GPR_U32(ctx, 31, 0x307640u);
    ctx->pc = 0x30763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307638u;
    // 0x30763c: 0x34a50068  ori         $a1, $a1, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307638u, 0x307640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307640u;
label_307640:
    // 0x307640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307644: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x307644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x307648: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307648u;
    SET_GPR_U32(ctx, 31, 0x307650u);
    ctx->pc = 0x30764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307648u;
    // 0x30764c: 0x34a50069  ori         $a1, $a1, 0x69 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307648u, 0x307650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307650u;
label_307650:
    // 0x307650: 0xc0b2788  jal         func_2C9E20
    ctx->pc = 0x307650u;
    SET_GPR_U32(ctx, 31, 0x307658u);
    ctx->pc = 0x2C9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E20u, 0x307650u, 0x307658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307658u;
label_307658:
    // 0x307658: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30765c: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x30765Cu;
    SET_GPR_U32(ctx, 31, 0x307664u);
    ctx->pc = 0x307660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30765Cu;
    // 0x307660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x30765Cu, 0x307664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307664u;
label_307664:
    // 0x307664: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x307664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x307668: 0x24642718  addiu       $a0, $v1, 0x2718
    ctx->pc = 0x307668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10008));
    // 0x30766c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307674: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307678: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307678u;
    SET_GPR_U32(ctx, 31, 0x307680u);
    ctx->pc = 0x30767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307678u;
    // 0x30767c: 0x240805dc  addiu       $t0, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307678u, 0x307680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307680u;
label_307680:
    // 0x307680: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x307680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x307684: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x307684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x307688: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x307688u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x30768c: 0x24442750  addiu       $a0, $v0, 0x2750
    ctx->pc = 0x30768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10064));
    // 0x307690: 0x34a580ff  ori         $a1, $a1, 0x80FF
    ctx->pc = 0x307690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33023);
    // 0x307694: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x307694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x307698: 0x24070130  addiu       $a3, $zero, 0x130
    ctx->pc = 0x307698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x30769c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30769Cu;
    SET_GPR_U32(ctx, 31, 0x3076A4u);
    ctx->pc = 0x3076A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30769Cu;
    // 0x3076a0: 0x35080044  ori         $t0, $t0, 0x44 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)68);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30769Cu, 0x3076A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076A4u;
label_3076a4:
    // 0x3076a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3076a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3076a8: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x3076a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x3076ac: 0x24642740  addiu       $a0, $v1, 0x2740
    ctx->pc = 0x3076acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
    // 0x3076b0: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x3076b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x3076b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3076b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3076b8: 0x24070143  addiu       $a3, $zero, 0x143
    ctx->pc = 0x3076b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    // 0x3076bc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3076BCu;
    SET_GPR_U32(ctx, 31, 0x3076C4u);
    ctx->pc = 0x3076C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076BCu;
    // 0x3076c0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3076BCu, 0x3076C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076C4u;
label_3076c4:
    // 0x3076c4: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x3076c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3076c8: 0xdfb10228  ld          $s1, 0x228($sp)
    ctx->pc = 0x3076c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x3076cc: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x3076ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x3076d0: 0xdfb30238  ld          $s3, 0x238($sp)
    ctx->pc = 0x3076d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x3076d4: 0xdfb40240  ld          $s4, 0x240($sp)
    ctx->pc = 0x3076d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x3076d8: 0xdfb50248  ld          $s5, 0x248($sp)
    ctx->pc = 0x3076d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x3076dc: 0xdfb60250  ld          $s6, 0x250($sp)
    ctx->pc = 0x3076dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x3076e0: 0xdfb70258  ld          $s7, 0x258($sp)
    ctx->pc = 0x3076e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x3076e4: 0xdfbe0260  ld          $fp, 0x260($sp)
    ctx->pc = 0x3076e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x3076e8: 0xdfbf0268  ld          $ra, 0x268($sp)
    ctx->pc = 0x3076e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x3076ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3076ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3076F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076ECu;
        // 0x3076f0: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3076ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3076F4u;
    // 0x3076f4: 0x0  nop
    ctx->pc = 0x3076f4u;
    // NOP
label_3076f8:
    // 0x3076f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3076F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3076F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307700u;
label_307700:
    // 0x307700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x307700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x307704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x307708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30770c: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x30770cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x307710: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x307710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x307714: 0x26572718  addiu       $s7, $s2, 0x2718
    ctx->pc = 0x307714u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 10008));
    // 0x307718: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x307718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30771c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x30771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x307720: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x307720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307724: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307728: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x307728u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30772c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307730: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x307730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x307734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30773c: 0x3c1180ff  lui         $s1, 0x80FF
    ctx->pc = 0x30773cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33023 << 16));
    // 0x307740: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x307740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x307744: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x307744u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x307748: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x307748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30774c: 0x361080ff  ori         $s0, $s0, 0x80FF
    ctx->pc = 0x30774cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)33023);
    // 0x307750: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x307750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x307754: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x307754u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307758: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x307758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x30775c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x30775cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x307760: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307760u;
    SET_GPR_U32(ctx, 31, 0x307768u);
    ctx->pc = 0x307764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307760u;
    // 0x307764: 0x3c1e0048  lui         $fp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307760u, 0x307768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307768u;
label_307768:
    // 0x307768: 0x8ed40028  lw          $s4, 0x28($s6)
    ctx->pc = 0x307768u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x30776c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307770: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x307770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307774: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x307774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307778: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30777c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30777Cu;
    SET_GPR_U32(ctx, 31, 0x307784u);
    ctx->pc = 0x307780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30777Cu;
    // 0x307780: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30777Cu, 0x307784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307784u;
label_307784:
    // 0x307784: 0x2951026  xor         $v0, $s4, $s5
    ctx->pc = 0x307784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 21));
    // 0x307788: 0x27d32750  addiu       $s3, $fp, 0x2750
    ctx->pc = 0x307788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 10064));
    // 0x30778c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x30778cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x307790: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x307790u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x307794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x307794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307798: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x307798u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x30779c: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x30779cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x3077a0: 0x240700da  addiu       $a3, $zero, 0xDA
    ctx->pc = 0x3077a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x3077a4: 0x3508006d  ori         $t0, $t0, 0x6D
    ctx->pc = 0x3077a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)109);
    // 0x3077a8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3077A8u;
    SET_GPR_U32(ctx, 31, 0x3077B0u);
    ctx->pc = 0x3077ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077A8u;
    // 0x3077ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3077A8u, 0x3077B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077B0u;
label_3077b0:
    // 0x3077b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3077b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3077b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3077b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3077bc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3077bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3077c0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3077C0u;
    SET_GPR_U32(ctx, 31, 0x3077C8u);
    ctx->pc = 0x3077C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077C0u;
    // 0x3077c4: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3077C0u, 0x3077C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077C8u;
label_3077c8:
    // 0x3077c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3077c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3077ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077d0: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x3077d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x3077d4: 0x234280b  movn        $a1, $s1, $s4
    ctx->pc = 0x3077d4u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x3077d8: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x3077d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x3077dc: 0x240700da  addiu       $a3, $zero, 0xDA
    ctx->pc = 0x3077dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x3077e0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3077E0u;
    SET_GPR_U32(ctx, 31, 0x3077E8u);
    ctx->pc = 0x3077E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077E0u;
    // 0x3077e4: 0x3508006e  ori         $t0, $t0, 0x6E (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3077E0u, 0x3077E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077E8u;
label_3077e8:
    // 0x3077e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3077e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077ec: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x3077ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x3077f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3077f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3077f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3077f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3077f8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x3077f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3077fc: 0x14550006  bne         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3077FCu;
    {
        const bool branch_taken_0x3077fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x307800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077FCu;
        // 0x307800: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077fc) {
            ctx->pc = 0x307818u;
            goto label_307818;
        }
    }
    ctx->pc = 0x307804u;
    // 0x307804: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x307804u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
    // 0x307808: 0x24110136  addiu       $s1, $zero, 0x136
    ctx->pc = 0x307808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x30780c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30780Cu;
    {
        const bool branch_taken_0x30780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30780Cu;
        // 0x307810: 0x3610006f  ori         $s0, $s0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30780c) {
            ctx->pc = 0x307824u;
            goto label_307824;
        }
    }
    ctx->pc = 0x307814u;
    // 0x307814: 0x0  nop
    ctx->pc = 0x307814u;
    // NOP
label_307818:
    // 0x307818: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x307818u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
    // 0x30781c: 0x2411014a  addiu       $s1, $zero, 0x14A
    ctx->pc = 0x30781cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x307820: 0x36100070  ori         $s0, $s0, 0x70
    ctx->pc = 0x307820u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)112);
label_307824:
    // 0x307824: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307824u;
    SET_GPR_U32(ctx, 31, 0x30782Cu);
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307824u, 0x30782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30782Cu;
label_30782c:
    // 0x30782c: 0x27c42750  addiu       $a0, $fp, 0x2750
    ctx->pc = 0x30782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 10064));
    // 0x307830: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x307830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x307834: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x307834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307838: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x307838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30783c: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x30783cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x307840: 0x34a580ff  ori         $a1, $a1, 0x80FF
    ctx->pc = 0x307840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33023);
    // 0x307844: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307844u;
    SET_GPR_U32(ctx, 31, 0x30784Cu);
    ctx->pc = 0x307848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307844u;
    // 0x307848: 0x240700da  addiu       $a3, $zero, 0xDA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307844u, 0x30784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30784Cu;
label_30784c:
    // 0x30784c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307850: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x307850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307854: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x307854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307858: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x307858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x30785c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30785Cu;
    SET_GPR_U32(ctx, 31, 0x307864u);
    ctx->pc = 0x307860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30785Cu;
    // 0x307860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30785Cu, 0x307864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307864u;
label_307864:
    // 0x307864: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x307864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x307868: 0x26104d90  addiu       $s0, $s0, 0x4D90
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19856));
    // 0x30786c: 0x34a5008d  ori         $a1, $a1, 0x8D
    ctx->pc = 0x30786cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)141);
    // 0x307870: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307870u;
    SET_GPR_U32(ctx, 31, 0x307878u);
    ctx->pc = 0x307874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307870u;
    // 0x307874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307870u, 0x307878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307878u;
label_307878:
    // 0x307878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30787c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x30787Cu;
    SET_GPR_U32(ctx, 31, 0x307884u);
    ctx->pc = 0x307880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30787Cu;
    // 0x307880: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x30787Cu, 0x307884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307884u;
label_307884:
    // 0x307884: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x307884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307888: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x307888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30788c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x30788cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x307890: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x307890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x307894: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x307894u;
    SET_GPR_U32(ctx, 31, 0x30789Cu);
    ctx->pc = 0x307898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307894u;
    // 0x307898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x307894u, 0x30789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30789Cu;
label_30789c:
    // 0x30789c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30789cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3078a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3078a4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3078A4u;
    SET_GPR_U32(ctx, 31, 0x3078ACu);
    ctx->pc = 0x3078A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078A4u;
    // 0x3078a8: 0x34a50067  ori         $a1, $a1, 0x67 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)103);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3078A4u, 0x3078ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078ACu;
label_3078ac:
    // 0x3078ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3078acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078b0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3078b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3078b4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3078B4u;
    SET_GPR_U32(ctx, 31, 0x3078BCu);
    ctx->pc = 0x3078B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078B4u;
    // 0x3078b8: 0x34a50068  ori         $a1, $a1, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3078B4u, 0x3078BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078BCu;
label_3078bc:
    // 0x3078bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3078bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078c0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3078c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3078c4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x3078C4u;
    SET_GPR_U32(ctx, 31, 0x3078CCu);
    ctx->pc = 0x3078C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078C4u;
    // 0x3078c8: 0x34a50069  ori         $a1, $a1, 0x69 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x3078C4u, 0x3078CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078CCu;
label_3078cc:
    // 0x3078cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3078ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3078d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3078d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3078d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3078d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3078d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3078d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3078dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3078dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3078e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3078e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3078e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3078e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3078e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3078e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3078ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3078ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3078f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3078f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3078f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3078F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3078F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078F4u;
        // 0x3078f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3078F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3078FCu;
    // 0x3078fc: 0x0  nop
    ctx->pc = 0x3078fcu;
    // NOP
    ctx->pc = 0x307900u;
}
