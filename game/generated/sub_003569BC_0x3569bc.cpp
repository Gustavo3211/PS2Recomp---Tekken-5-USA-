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

// Function: sub_003569BC
// Address: 0x3569bc - 0x3570a0
void sub_003569BC_0x3569bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003569BC_0x3569bc");
#endif

    switch (ctx->pc) {
        case 0x3569f4u: goto label_3569f4;
        case 0x356a7cu: goto label_356a7c;
        case 0x356a94u: goto label_356a94;
        case 0x356aa8u: goto label_356aa8;
        case 0x356af8u: goto label_356af8;
        case 0x356c78u: goto label_356c78;
        case 0x356c84u: goto label_356c84;
        case 0x356c98u: goto label_356c98;
        case 0x356ce8u: goto label_356ce8;
        case 0x356da8u: goto label_356da8;
        case 0x356dbcu: goto label_356dbc;
        case 0x356dd0u: goto label_356dd0;
        case 0x356e20u: goto label_356e20;
        case 0x356ee0u: goto label_356ee0;
        case 0x356ef8u: goto label_356ef8;
        case 0x356f0cu: goto label_356f0c;
        case 0x356f5cu: goto label_356f5c;
        case 0x357084u: goto label_357084;
        default: break;
    }

    ctx->pc = 0x3569bcu;

    // 0x3569bc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3569bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3569c0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3569c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3569c4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3569c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3569c8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3569c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569cc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3569ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3569d0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3569d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3569d4: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3569d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3569d8: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x3569d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x3569dc: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x3569dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x3569e0: 0xafc90014  sw          $t1, 0x14($fp)
    ctx->pc = 0x3569e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x3569e4: 0xafca0018  sw          $t2, 0x18($fp)
    ctx->pc = 0x3569e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 10));
    // 0x3569e8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3569e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3569ec: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3569ECu;
    SET_GPR_U32(ctx, 31, 0x3569F4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3569ECu, 0x3569F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569F4u;
label_3569f4:
    // 0x3569f4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3569f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3569f8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3569f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3569fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3569fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356a00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x356a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a04: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356a08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x356a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356a0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x356a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356a10: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x356a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x356a14: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x356a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x356a18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356a1c: 0xafc20038  sw          $v0, 0x38($fp)
    ctx->pc = 0x356a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x356a20: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x356a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x356a24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x356a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x356a28: 0x10400186  beqz        $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x356A28u;
    {
        const bool branch_taken_0x356a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a28) {
            ctx->pc = 0x357044u;
            goto label_357044;
        }
    }
    ctx->pc = 0x356A30u;
    // 0x356a30: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x356a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x356a34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x356a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x356a38: 0x10400182  beqz        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x356A38u;
    {
        const bool branch_taken_0x356a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a38) {
            ctx->pc = 0x357044u;
            goto label_357044;
        }
    }
    ctx->pc = 0x356A40u;
    // 0x356a40: 0xafc0001c  sw          $zero, 0x1C($fp)
    ctx->pc = 0x356a40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
    // 0x356a44: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x356a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x356a48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x356a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x356a4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356A4Cu;
    {
        const bool branch_taken_0x356a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a4c) {
            ctx->pc = 0x356A60u;
            goto label_356a60;
        }
    }
    ctx->pc = 0x356A54u;
    // 0x356a54: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x356a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x356a58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x356a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x356a5c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x356a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_356a60:
    // 0x356a60: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x356a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x356a64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x356a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x356a68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356A68u;
    {
        const bool branch_taken_0x356a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a68) {
            ctx->pc = 0x356A7Cu;
            goto label_356a7c;
        }
    }
    ctx->pc = 0x356A70u;
    // 0x356a70: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x356a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x356a74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x356a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x356a78: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x356a78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_356a7c:
    // 0x356a7c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x356a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356a80: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x356a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x356a84: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x356a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x356a88: 0x8fc7001c  lw          $a3, 0x1C($fp)
    ctx->pc = 0x356a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x356a8c: 0xc043510  jal         func_10D440
    ctx->pc = 0x356A8Cu;
    SET_GPR_U32(ctx, 31, 0x356A94u);
    ctx->pc = 0x10D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D440u, 0x356A8Cu, 0x356A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A94u;
label_356a94:
    // 0x356a94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356A94u;
    {
        const bool branch_taken_0x356a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a94) {
            ctx->pc = 0x356AA4u;
            goto label_356aa4;
        }
    }
    ctx->pc = 0x356A9Cu;
    // 0x356a9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x356A9Cu;
    {
        const bool branch_taken_0x356a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a9c) {
            ctx->pc = 0x356ADCu;
            goto label_356adc;
        }
    }
    ctx->pc = 0x356AA4u;
label_356aa4:
    // 0x356aa4: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x356aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 0));
label_356aa8:
    // 0x356aa8: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356aac: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x356aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x356ab0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x356ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356ab4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x356ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x356ab8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356AB8u;
    {
        const bool branch_taken_0x356ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ab8) {
            ctx->pc = 0x356AC8u;
            goto label_356ac8;
        }
    }
    ctx->pc = 0x356AC0u;
    // 0x356ac0: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x356AC0u;
    {
        const bool branch_taken_0x356ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ac0) {
            ctx->pc = 0x356A7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356a7c;
        }
    }
    ctx->pc = 0x356AC8u;
label_356ac8:
    // 0x356ac8: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356ad0: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x356ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x356ad4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x356AD4u;
    {
        const bool branch_taken_0x356ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ad4) {
            ctx->pc = 0x356AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356aa8;
        }
    }
    ctx->pc = 0x356ADCu;
label_356adc:
    // 0x356adc: 0x27c20024  addiu       $v0, $fp, 0x24
    ctx->pc = 0x356adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x356ae0: 0x27c30028  addiu       $v1, $fp, 0x28
    ctx->pc = 0x356ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x356ae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x356ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356aec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x356aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356af0: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x356AF0u;
    SET_GPR_U32(ctx, 31, 0x356AF8u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x356AF0u, 0x356AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AF8u;
label_356af8:
    // 0x356af8: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x356af8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x356afc: 0xafc00034  sw          $zero, 0x34($fp)
    ctx->pc = 0x356afcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 0));
    // 0x356b00: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x356b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x356b04: 0xafc20048  sw          $v0, 0x48($fp)
    ctx->pc = 0x356b04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 2));
    // 0x356b08: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x356b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x356b0c: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x356b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x356b10: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x356B10u;
    {
        const bool branch_taken_0x356b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356b10) {
            ctx->pc = 0x356B58u;
            goto label_356b58;
        }
    }
    ctx->pc = 0x356B18u;
    // 0x356b18: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x356b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x356b1c: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x356b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x356b20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356B20u;
    {
        const bool branch_taken_0x356b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b20) {
            ctx->pc = 0x356B40u;
            goto label_356b40;
        }
    }
    ctx->pc = 0x356B28u;
    // 0x356b28: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x356b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x356b2c: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x356b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x356b30: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x356B30u;
    {
        const bool branch_taken_0x356b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356b30) {
            ctx->pc = 0x356BB0u;
            goto label_356bb0;
        }
    }
    ctx->pc = 0x356B38u;
    // 0x356b38: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x356B38u;
    {
        const bool branch_taken_0x356b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b38) {
            ctx->pc = 0x356BC4u;
            goto label_356bc4;
        }
    }
    ctx->pc = 0x356B40u;
label_356b40:
    // 0x356b40: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x356b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x356b44: 0x8fc30048  lw          $v1, 0x48($fp)
    ctx->pc = 0x356b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x356b48: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x356B48u;
    {
        const bool branch_taken_0x356b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356b48) {
            ctx->pc = 0x356B9Cu;
            goto label_356b9c;
        }
    }
    ctx->pc = 0x356B50u;
    // 0x356b50: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x356B50u;
    {
        const bool branch_taken_0x356b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b50) {
            ctx->pc = 0x356BC4u;
            goto label_356bc4;
        }
    }
    ctx->pc = 0x356B58u;
label_356b58:
    // 0x356b58: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x356b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x356b5c: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x356b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x356b60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x356b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x356b64: 0x8fc30040  lw          $v1, 0x40($fp)
    ctx->pc = 0x356b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x356b68: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356B68u;
    {
        const bool branch_taken_0x356b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356b68) {
            ctx->pc = 0x356B88u;
            goto label_356b88;
        }
    }
    ctx->pc = 0x356B70u;
    // 0x356b70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x356b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x356b74: 0x8fc30040  lw          $v1, 0x40($fp)
    ctx->pc = 0x356b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x356b78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356B78u;
    {
        const bool branch_taken_0x356b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356b78) {
            ctx->pc = 0x356B88u;
            goto label_356b88;
        }
    }
    ctx->pc = 0x356B80u;
    // 0x356b80: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x356B80u;
    {
        const bool branch_taken_0x356b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b80) {
            ctx->pc = 0x356C6Cu;
            goto label_356c6c;
        }
    }
    ctx->pc = 0x356B88u;
label_356b88:
    // 0x356b88: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356b8c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x356b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x356b90: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356b90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356b94: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x356B94u;
    {
        const bool branch_taken_0x356b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b94) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356B9Cu;
label_356b9c:
    // 0x356b9c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356ba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356ba4: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356ba8: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x356BA8u;
    {
        const bool branch_taken_0x356ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ba8) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356BB0u;
label_356bb0:
    // 0x356bb0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356bb4: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x356bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x356bb8: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356bbc: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x356BBCu;
    {
        const bool branch_taken_0x356bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356bbc) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356BC4u;
label_356bc4:
    // 0x356bc4: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x356bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x356bc8: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x356BC8u;
    {
        const bool branch_taken_0x356bc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x356bc8) {
            ctx->pc = 0x356C58u;
            goto label_356c58;
        }
    }
    ctx->pc = 0x356BD0u;
    // 0x356bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356bd4: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x356bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x356bd8: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x356bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x356bdc: 0xafc2002c  sw          $v0, 0x2C($fp)
    ctx->pc = 0x356bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x356be0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x356be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x356be4: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x356be4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
    // 0x356be8: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x356be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x356bec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x356becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x356bf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x356BF0u;
    {
        const bool branch_taken_0x356bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356bf0) {
            ctx->pc = 0x356C20u;
            goto label_356c20;
        }
    }
    ctx->pc = 0x356BF8u;
    // 0x356bf8: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x356bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x356bfc: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x356bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x356c00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x356C00u;
    {
        const bool branch_taken_0x356c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c00) {
            ctx->pc = 0x356C48u;
            goto label_356c48;
        }
    }
    ctx->pc = 0x356C08u;
    // 0x356c08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356c0c: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x356c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x356c10: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x356C10u;
    {
        const bool branch_taken_0x356c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356c10) {
            ctx->pc = 0x356C38u;
            goto label_356c38;
        }
    }
    ctx->pc = 0x356C18u;
    // 0x356c18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x356C18u;
    {
        const bool branch_taken_0x356c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c18) {
            ctx->pc = 0x356C6Cu;
            goto label_356c6c;
        }
    }
    ctx->pc = 0x356C20u;
label_356c20:
    // 0x356c20: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x356c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x356c24: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x356c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x356c28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356C28u;
    {
        const bool branch_taken_0x356c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356c28) {
            ctx->pc = 0x356C38u;
            goto label_356c38;
        }
    }
    ctx->pc = 0x356C30u;
    // 0x356c30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x356C30u;
    {
        const bool branch_taken_0x356c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c30) {
            ctx->pc = 0x356C6Cu;
            goto label_356c6c;
        }
    }
    ctx->pc = 0x356C38u;
label_356c38:
    // 0x356c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356c3c: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x356c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x356c40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x356C40u;
    {
        const bool branch_taken_0x356c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c40) {
            ctx->pc = 0x356C6Cu;
            goto label_356c6c;
        }
    }
    ctx->pc = 0x356C48u;
label_356c48:
    // 0x356c48: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x356c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x356c4c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356c50: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x356C50u;
    {
        const bool branch_taken_0x356c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c50) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356C58u;
label_356c58:
    // 0x356c58: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356c5c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x356c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x356c60: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356c60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356c64: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x356C64u;
    {
        const bool branch_taken_0x356c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c64) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356C6Cu;
label_356c6c:
    // 0x356c6c: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x356c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x356c70: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x356C70u;
    {
        const bool branch_taken_0x356c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c70) {
            ctx->pc = 0x356ED4u;
            goto label_356ed4;
        }
    }
    ctx->pc = 0x356C78u;
label_356c78:
    // 0x356c78: 0x8fc4002c  lw          $a0, 0x2C($fp)
    ctx->pc = 0x356c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x356c7c: 0xc043568  jal         func_10D5A0
    ctx->pc = 0x356C7Cu;
    SET_GPR_U32(ctx, 31, 0x356C84u);
    ctx->pc = 0x10D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D5A0u, 0x356C7Cu, 0x356C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C84u;
label_356c84:
    // 0x356c84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356C84u;
    {
        const bool branch_taken_0x356c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356c84) {
            ctx->pc = 0x356C94u;
            goto label_356c94;
        }
    }
    ctx->pc = 0x356C8Cu;
    // 0x356c8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x356C8Cu;
    {
        const bool branch_taken_0x356c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c8c) {
            ctx->pc = 0x356CCCu;
            goto label_356ccc;
        }
    }
    ctx->pc = 0x356C94u;
label_356c94:
    // 0x356c94: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x356c94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 0));
label_356c98:
    // 0x356c98: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356c9c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x356c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x356ca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x356ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356ca4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x356ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x356ca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356CA8u;
    {
        const bool branch_taken_0x356ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ca8) {
            ctx->pc = 0x356CB8u;
            goto label_356cb8;
        }
    }
    ctx->pc = 0x356CB0u;
    // 0x356cb0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x356CB0u;
    {
        const bool branch_taken_0x356cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356cb0) {
            ctx->pc = 0x356C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356c78;
        }
    }
    ctx->pc = 0x356CB8u;
label_356cb8:
    // 0x356cb8: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356cbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356cc0: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x356cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x356cc4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x356CC4u;
    {
        const bool branch_taken_0x356cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356cc4) {
            ctx->pc = 0x356C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356c98;
        }
    }
    ctx->pc = 0x356CCCu;
label_356ccc:
    // 0x356ccc: 0x27c20024  addiu       $v0, $fp, 0x24
    ctx->pc = 0x356cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x356cd0: 0x27c30028  addiu       $v1, $fp, 0x28
    ctx->pc = 0x356cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x356cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x356cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356cdc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x356cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356ce0: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x356CE0u;
    SET_GPR_U32(ctx, 31, 0x356CE8u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x356CE0u, 0x356CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356CE8u;
label_356ce8:
    // 0x356ce8: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x356ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x356cec: 0xafc2004c  sw          $v0, 0x4C($fp)
    ctx->pc = 0x356cecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 2));
    // 0x356cf0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x356cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x356cf4: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x356cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x356cf8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x356CF8u;
    {
        const bool branch_taken_0x356cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356cf8) {
            ctx->pc = 0x356D60u;
            goto label_356d60;
        }
    }
    ctx->pc = 0x356D00u;
    // 0x356d00: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x356d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x356d04: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x356d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x356d08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356D08u;
    {
        const bool branch_taken_0x356d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d08) {
            ctx->pc = 0x356D28u;
            goto label_356d28;
        }
    }
    ctx->pc = 0x356D10u;
    // 0x356d10: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x356d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x356d14: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x356d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x356d18: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x356D18u;
    {
        const bool branch_taken_0x356d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356d18) {
            ctx->pc = 0x356D74u;
            goto label_356d74;
        }
    }
    ctx->pc = 0x356D20u;
    // 0x356d20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x356D20u;
    {
        const bool branch_taken_0x356d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d20) {
            ctx->pc = 0x356D88u;
            goto label_356d88;
        }
    }
    ctx->pc = 0x356D28u;
label_356d28:
    // 0x356d28: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x356d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x356d2c: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x356d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x356d30: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356D30u;
    {
        const bool branch_taken_0x356d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356d30) {
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356D38u;
    // 0x356d38: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x356d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x356d3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x356D3Cu;
    {
        const bool branch_taken_0x356d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d3c) {
            ctx->pc = 0x356D9Cu;
            goto label_356d9c;
        }
    }
    ctx->pc = 0x356D44u;
    // 0x356d44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x356D44u;
    {
        const bool branch_taken_0x356d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d44) {
            ctx->pc = 0x356D88u;
            goto label_356d88;
        }
    }
    ctx->pc = 0x356D4Cu;
label_356d4c:
    // 0x356d4c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356d50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356d54: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356d54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356d58: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x356D58u;
    {
        const bool branch_taken_0x356d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d58) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356D60u;
label_356d60:
    // 0x356d60: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356d64: 0x3442fff6  ori         $v0, $v0, 0xFFF6
    ctx->pc = 0x356d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65526);
    // 0x356d68: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356d68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356d6c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x356D6Cu;
    {
        const bool branch_taken_0x356d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d6c) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356D74u;
label_356d74:
    // 0x356d74: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356d78: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x356d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x356d7c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356d80: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x356D80u;
    {
        const bool branch_taken_0x356d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d80) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356D88u;
label_356d88:
    // 0x356d88: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356d8c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x356d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x356d90: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356d90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356d94: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x356D94u;
    {
        const bool branch_taken_0x356d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356d94) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356D9Cu;
label_356d9c:
    // 0x356d9c: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x356d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x356da0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x356DA0u;
    {
        const bool branch_taken_0x356da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356da0) {
            ctx->pc = 0x356EC0u;
            goto label_356ec0;
        }
    }
    ctx->pc = 0x356DA8u;
label_356da8:
    // 0x356da8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x356da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356dac: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x356dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x356db0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x356db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x356db4: 0xc043860  jal         func_10E180
    ctx->pc = 0x356DB4u;
    SET_GPR_U32(ctx, 31, 0x356DBCu);
    ctx->pc = 0x10E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E180u, 0x356DB4u, 0x356DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356DBCu;
label_356dbc:
    // 0x356dbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356DBCu;
    {
        const bool branch_taken_0x356dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356dbc) {
            ctx->pc = 0x356DCCu;
            goto label_356dcc;
        }
    }
    ctx->pc = 0x356DC4u;
    // 0x356dc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x356DC4u;
    {
        const bool branch_taken_0x356dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356dc4) {
            ctx->pc = 0x356E04u;
            goto label_356e04;
        }
    }
    ctx->pc = 0x356DCCu;
label_356dcc:
    // 0x356dcc: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x356dccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 0));
label_356dd0:
    // 0x356dd0: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356dd4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x356dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x356dd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x356dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356ddc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x356ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x356de0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356DE0u;
    {
        const bool branch_taken_0x356de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356de0) {
            ctx->pc = 0x356DF0u;
            goto label_356df0;
        }
    }
    ctx->pc = 0x356DE8u;
    // 0x356de8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x356DE8u;
    {
        const bool branch_taken_0x356de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356de8) {
            ctx->pc = 0x356DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356da8;
        }
    }
    ctx->pc = 0x356DF0u;
label_356df0:
    // 0x356df0: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356df4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356df8: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x356df8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x356dfc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x356DFCu;
    {
        const bool branch_taken_0x356dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356dfc) {
            ctx->pc = 0x356DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356dd0;
        }
    }
    ctx->pc = 0x356E04u;
label_356e04:
    // 0x356e04: 0x27c20024  addiu       $v0, $fp, 0x24
    ctx->pc = 0x356e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x356e08: 0x27c30028  addiu       $v1, $fp, 0x28
    ctx->pc = 0x356e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x356e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x356e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e14: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x356e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e18: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x356E18u;
    SET_GPR_U32(ctx, 31, 0x356E20u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x356E18u, 0x356E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E20u;
label_356e20:
    // 0x356e20: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x356e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x356e24: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x356e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x356e28: 0xafc20050  sw          $v0, 0x50($fp)
    ctx->pc = 0x356e28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 2));
    // 0x356e2c: 0x8fc30050  lw          $v1, 0x50($fp)
    ctx->pc = 0x356e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x356e30: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x356e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x356e34: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x356E34u;
    {
        const bool branch_taken_0x356e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e34) {
            ctx->pc = 0x356EACu;
            goto label_356eac;
        }
    }
    ctx->pc = 0x356E3Cu;
    // 0x356e3c: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x356e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x356e40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x356e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356e44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x356e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x356e48: 0x24424ec0  addiu       $v0, $v0, 0x4EC0
    ctx->pc = 0x356e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
    // 0x356e4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356e50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x356e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356e54: 0x400008  jr          $v0
    ctx->pc = 0x356E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x356E5Cu: goto label_356e5c;
            case 0x356E70u: goto label_356e70;
            case 0x356E84u: goto label_356e84;
            case 0x356E98u: goto label_356e98;
            case 0x356EACu: goto label_356eac;
            case 0x356ED4u: goto label_356ed4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356E54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x356E5Cu;
label_356e5c:
    // 0x356e5c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356e60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356e64: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356e64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356e68: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x356E68u;
    {
        const bool branch_taken_0x356e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e68) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356E70u;
label_356e70:
    // 0x356e70: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356e74: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x356e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x356e78: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356e78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356e7c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x356E7Cu;
    {
        const bool branch_taken_0x356e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e7c) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356E84u;
label_356e84:
    // 0x356e84: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356e88: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x356e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x356e8c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356e90: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x356E90u;
    {
        const bool branch_taken_0x356e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356e90) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356E98u;
label_356e98:
    // 0x356e98: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356e9c: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x356e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x356ea0: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356ea4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x356EA4u;
    {
        const bool branch_taken_0x356ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ea4) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356EACu;
label_356eac:
    // 0x356eac: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356eb0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x356eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x356eb4: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356eb8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x356EB8u;
    {
        const bool branch_taken_0x356eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356eb8) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356EC0u;
label_356ec0:
    // 0x356ec0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356ec4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x356ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x356ec8: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356ecc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x356ECCu;
    {
        const bool branch_taken_0x356ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ecc) {
            ctx->pc = 0x357078u;
            goto label_357078;
        }
    }
    ctx->pc = 0x356ED4u;
label_356ed4:
    // 0x356ed4: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x356ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x356ed8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x356ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x356edc: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x356edcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_356ee0:
    // 0x356ee0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x356ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356ee4: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x356ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x356ee8: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x356ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x356eec: 0x8fc7001c  lw          $a3, 0x1C($fp)
    ctx->pc = 0x356eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x356ef0: 0xc043510  jal         func_10D440
    ctx->pc = 0x356EF0u;
    SET_GPR_U32(ctx, 31, 0x356EF8u);
    ctx->pc = 0x10D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D440u, 0x356EF0u, 0x356EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356EF8u;
label_356ef8:
    // 0x356ef8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356EF8u;
    {
        const bool branch_taken_0x356ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356ef8) {
            ctx->pc = 0x356F08u;
            goto label_356f08;
        }
    }
    ctx->pc = 0x356F00u;
    // 0x356f00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x356F00u;
    {
        const bool branch_taken_0x356f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f00) {
            ctx->pc = 0x356F40u;
            goto label_356f40;
        }
    }
    ctx->pc = 0x356F08u;
label_356f08:
    // 0x356f08: 0xafc0003c  sw          $zero, 0x3C($fp)
    ctx->pc = 0x356f08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 0));
label_356f0c:
    // 0x356f0c: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356f10: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x356f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x356f14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x356f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356f18: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x356f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x356f1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356F1Cu;
    {
        const bool branch_taken_0x356f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f1c) {
            ctx->pc = 0x356F2Cu;
            goto label_356f2c;
        }
    }
    ctx->pc = 0x356F24u;
    // 0x356f24: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x356F24u;
    {
        const bool branch_taken_0x356f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f24) {
            ctx->pc = 0x356EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356ee0;
        }
    }
    ctx->pc = 0x356F2Cu;
label_356f2c:
    // 0x356f2c: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x356f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x356f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356f34: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x356f34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x356f38: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x356F38u;
    {
        const bool branch_taken_0x356f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f38) {
            ctx->pc = 0x356F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356f0c;
        }
    }
    ctx->pc = 0x356F40u;
label_356f40:
    // 0x356f40: 0x27c20024  addiu       $v0, $fp, 0x24
    ctx->pc = 0x356f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
    // 0x356f44: 0x27c30028  addiu       $v1, $fp, 0x28
    ctx->pc = 0x356f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x356f48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x356f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f50: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x356f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f54: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x356F54u;
    SET_GPR_U32(ctx, 31, 0x356F5Cu);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x356F54u, 0x356F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F5Cu;
label_356f5c:
    // 0x356f5c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x356f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x356f60: 0xafc20054  sw          $v0, 0x54($fp)
    ctx->pc = 0x356f60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 2));
    // 0x356f64: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x356f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x356f68: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x356f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x356f6c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x356F6Cu;
    {
        const bool branch_taken_0x356f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356f6c) {
            ctx->pc = 0x357000u;
            goto label_357000;
        }
    }
    ctx->pc = 0x356F74u;
    // 0x356f74: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x356f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x356f78: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x356f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x356f7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356F7Cu;
    {
        const bool branch_taken_0x356f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f7c) {
            ctx->pc = 0x356F9Cu;
            goto label_356f9c;
        }
    }
    ctx->pc = 0x356F84u;
    // 0x356f84: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x356f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x356f88: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x356f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x356f8c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x356F8Cu;
    {
        const bool branch_taken_0x356f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356f8c) {
            ctx->pc = 0x356FECu;
            goto label_356fec;
        }
    }
    ctx->pc = 0x356F94u;
    // 0x356f94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x356F94u;
    {
        const bool branch_taken_0x356f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f94) {
            ctx->pc = 0x357014u;
            goto label_357014;
        }
    }
    ctx->pc = 0x356F9Cu;
label_356f9c:
    // 0x356f9c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x356f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x356fa0: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x356fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x356fa4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x356FA4u;
    {
        const bool branch_taken_0x356fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356fa4) {
            ctx->pc = 0x356FD8u;
            goto label_356fd8;
        }
    }
    ctx->pc = 0x356FACu;
    // 0x356fac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x356facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x356fb0: 0x8fc30054  lw          $v1, 0x54($fp)
    ctx->pc = 0x356fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x356fb4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356FB4u;
    {
        const bool branch_taken_0x356fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x356fb4) {
            ctx->pc = 0x356FC4u;
            goto label_356fc4;
        }
    }
    ctx->pc = 0x356FBCu;
    // 0x356fbc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x356FBCu;
    {
        const bool branch_taken_0x356fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356fbc) {
            ctx->pc = 0x357014u;
            goto label_357014;
        }
    }
    ctx->pc = 0x356FC4u;
label_356fc4:
    // 0x356fc4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356fc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356fcc: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356fccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356fd0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x356FD0u;
    {
        const bool branch_taken_0x356fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356fd0) {
            ctx->pc = 0x357074u;
            goto label_357074;
        }
    }
    ctx->pc = 0x356FD8u;
label_356fd8:
    // 0x356fd8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356fdc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x356fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x356fe0: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356fe4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x356FE4u;
    {
        const bool branch_taken_0x356fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356fe4) {
            ctx->pc = 0x357074u;
            goto label_357074;
        }
    }
    ctx->pc = 0x356FECu;
label_356fec:
    // 0x356fec: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356ff0: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x356ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x356ff4: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x356ff8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x356FF8u;
    {
        const bool branch_taken_0x356ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ff8) {
            ctx->pc = 0x357074u;
            goto label_357074;
        }
    }
    ctx->pc = 0x357000u;
label_357000:
    // 0x357000: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x357000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x357004: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x357004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x357008: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x357008u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x35700c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x35700Cu;
    {
        const bool branch_taken_0x35700c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35700c) {
            ctx->pc = 0x357074u;
            goto label_357074;
        }
    }
    ctx->pc = 0x357014u;
label_357014:
    // 0x357014: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x357014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x357018: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357018u;
    {
        const bool branch_taken_0x357018 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x357018) {
            ctx->pc = 0x357030u;
            goto label_357030;
        }
    }
    ctx->pc = 0x357020u;
    // 0x357020: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x357020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x357024: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x357024u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x357028: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x357028u;
    {
        const bool branch_taken_0x357028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357028) {
            ctx->pc = 0x357074u;
            goto label_357074;
        }
    }
    ctx->pc = 0x357030u;
label_357030:
    // 0x357030: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357034: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x357034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x357038: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x357038u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x35703c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x35703Cu;
    {
        const bool branch_taken_0x35703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35703c) {
            ctx->pc = 0x357074u;
            goto label_357074;
        }
    }
    ctx->pc = 0x357044u;
label_357044:
    // 0x357044: 0x8fc20038  lw          $v0, 0x38($fp)
    ctx->pc = 0x357044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x357048: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x357048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35704c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35704Cu;
    {
        const bool branch_taken_0x35704c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35704c) {
            ctx->pc = 0x357068u;
            goto label_357068;
        }
    }
    ctx->pc = 0x357054u;
    // 0x357054: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x357058: 0x3442fff5  ori         $v0, $v0, 0xFFF5
    ctx->pc = 0x357058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65525);
    // 0x35705c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x35705cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x357060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357060u;
    {
        const bool branch_taken_0x357060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357060) {
            ctx->pc = 0x357074u;
            goto label_357074;
        }
    }
    ctx->pc = 0x357068u;
label_357068:
    // 0x357068: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35706c: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x35706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x357070: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x357070u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_357074:
    // 0x357074: 0x0  nop
    ctx->pc = 0x357074u;
    // NOP
label_357078:
    // 0x357078: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x357078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x35707c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x35707Cu;
    SET_GPR_U32(ctx, 31, 0x357084u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x35707Cu, 0x357084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357084u;
label_357084:
    // 0x357084: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x357084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x357088: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x357088u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35708c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x35708cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357090: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x357090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x357094: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x357094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x357098: 0x3e00008  jr          $ra
    ctx->pc = 0x357098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570A0u;
}
