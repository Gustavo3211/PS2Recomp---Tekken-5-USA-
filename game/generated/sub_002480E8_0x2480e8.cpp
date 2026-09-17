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

// Function: sub_002480E8
// Address: 0x2480e8 - 0x2481b8
void sub_002480E8_0x2480e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002480E8_0x2480e8");
#endif

    switch (ctx->pc) {
        case 0x2480e8u: goto label_2480e8;
        case 0x2480ecu: goto label_2480ec;
        case 0x2480f0u: goto label_2480f0;
        case 0x2480f4u: goto label_2480f4;
        case 0x2480f8u: goto label_2480f8;
        case 0x2480fcu: goto label_2480fc;
        case 0x248100u: goto label_248100;
        case 0x248104u: goto label_248104;
        case 0x248108u: goto label_248108;
        case 0x24810cu: goto label_24810c;
        case 0x248110u: goto label_248110;
        case 0x248114u: goto label_248114;
        case 0x248118u: goto label_248118;
        case 0x24811cu: goto label_24811c;
        case 0x248120u: goto label_248120;
        case 0x248124u: goto label_248124;
        case 0x248128u: goto label_248128;
        case 0x24812cu: goto label_24812c;
        case 0x248130u: goto label_248130;
        case 0x248134u: goto label_248134;
        case 0x248138u: goto label_248138;
        case 0x24813cu: goto label_24813c;
        case 0x248140u: goto label_248140;
        case 0x248144u: goto label_248144;
        case 0x248148u: goto label_248148;
        case 0x24814cu: goto label_24814c;
        case 0x248150u: goto label_248150;
        case 0x248154u: goto label_248154;
        case 0x248158u: goto label_248158;
        case 0x24815cu: goto label_24815c;
        case 0x248160u: goto label_248160;
        case 0x248164u: goto label_248164;
        case 0x248168u: goto label_248168;
        case 0x24816cu: goto label_24816c;
        case 0x248170u: goto label_248170;
        case 0x248174u: goto label_248174;
        case 0x248178u: goto label_248178;
        case 0x24817cu: goto label_24817c;
        case 0x248180u: goto label_248180;
        case 0x248184u: goto label_248184;
        case 0x248188u: goto label_248188;
        case 0x24818cu: goto label_24818c;
        case 0x248190u: goto label_248190;
        case 0x248194u: goto label_248194;
        case 0x248198u: goto label_248198;
        case 0x24819cu: goto label_24819c;
        case 0x2481a0u: goto label_2481a0;
        case 0x2481a4u: goto label_2481a4;
        case 0x2481a8u: goto label_2481a8;
        case 0x2481acu: goto label_2481ac;
        case 0x2481b0u: goto label_2481b0;
        case 0x2481b4u: goto label_2481b4;
        default: break;
    }

    ctx->pc = 0x2480e8u;

label_2480e8:
    // 0x2480e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2480e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2480ec:
    // 0x2480ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2480ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2480f0:
    // 0x2480f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2480f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2480f4:
    // 0x2480f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2480f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2480f8:
    // 0x2480f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2480f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2480fc:
    // 0x2480fc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2480fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_248100:
    // 0x248100: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_248104:
    if (ctx->pc == 0x248104u) {
        ctx->pc = 0x248104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248100u;
        // 0x248104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248108u;
        goto label_248108;
    }
    ctx->pc = 0x248100u;
    {
        const bool branch_taken_0x248100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248100u;
        // 0x248104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248100) {
            ctx->pc = 0x248118u;
            goto label_248118;
        }
    }
    ctx->pc = 0x248108u;
label_248108:
    // 0x248108: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_24810c:
    if (ctx->pc == 0x24810Cu) {
        ctx->pc = 0x24810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248108u;
        // 0x24810c: 0x3c110016  lui         $s1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248110u;
        goto label_248110;
    }
    ctx->pc = 0x248108u;
    {
        const bool branch_taken_0x248108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248108u;
        // 0x24810c: 0x3c110016  lui         $s1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248108) {
            ctx->pc = 0x248168u;
            goto label_248168;
        }
    }
    ctx->pc = 0x248110u;
label_248110:
    // 0x248110: 0x10000023  b           . + 4 + (0x23 << 2)
label_248114:
    if (ctx->pc == 0x248114u) {
        ctx->pc = 0x248114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248110u;
        // 0x248114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248118u;
        goto label_248118;
    }
    ctx->pc = 0x248110u;
    {
        const bool branch_taken_0x248110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248110u;
        // 0x248114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248110) {
            ctx->pc = 0x2481A0u;
            goto label_2481a0;
        }
    }
    ctx->pc = 0x248118u;
label_248118:
    // 0x248118: 0xc0899e8  jal         func_2267A0
label_24811c:
    if (ctx->pc == 0x24811Cu) {
        ctx->pc = 0x248120u;
        goto label_248120;
    }
    ctx->pc = 0x248118u;
    SET_GPR_U32(ctx, 31, 0x248120u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x248118u, 0x248120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248120u;
label_248120:
    // 0x248120: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_248124:
    if (ctx->pc == 0x248124u) {
        ctx->pc = 0x248124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248120u;
        // 0x248124: 0x3c110016  lui         $s1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248128u;
        goto label_248128;
    }
    ctx->pc = 0x248120u;
    {
        const bool branch_taken_0x248120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248120u;
        // 0x248124: 0x3c110016  lui         $s1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248120) {
            ctx->pc = 0x24819Cu;
            goto label_24819c;
        }
    }
    ctx->pc = 0x248128u;
label_248128:
    // 0x248128: 0x26226fe0  addiu       $v0, $s1, 0x6FE0
    ctx->pc = 0x248128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28640));
label_24812c:
    // 0x24812c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x24812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_248130:
    // 0x248130: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
label_248134:
    if (ctx->pc == 0x248134u) {
        ctx->pc = 0x248134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248130u;
        // 0x248134: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248138u;
        goto label_248138;
    }
    ctx->pc = 0x248130u;
    {
        const bool branch_taken_0x248130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248130) {
            ctx->pc = 0x248134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248130u;
            // 0x248134: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2481A0u;
            goto label_2481a0;
        }
    }
    ctx->pc = 0x248138u;
label_248138:
    // 0x248138: 0xc089622  jal         func_225888
label_24813c:
    if (ctx->pc == 0x24813Cu) {
        ctx->pc = 0x24813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248138u;
        // 0x24813c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248140u;
        goto label_248140;
    }
    ctx->pc = 0x248138u;
    SET_GPR_U32(ctx, 31, 0x248140u);
    ctx->pc = 0x24813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248138u;
    // 0x24813c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x248138u, 0x248140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248140u;
label_248140:
    // 0x248140: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_248144:
    if (ctx->pc == 0x248144u) {
        ctx->pc = 0x248144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248140u;
        // 0x248144: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248148u;
        goto label_248148;
    }
    ctx->pc = 0x248140u;
    {
        const bool branch_taken_0x248140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248140u;
        // 0x248144: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248140) {
            ctx->pc = 0x24819Cu;
            goto label_24819c;
        }
    }
    ctx->pc = 0x248148u;
label_248148:
    // 0x248148: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x248148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24814c:
    // 0x24814c: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x24814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
label_248150:
    // 0x248150: 0x54640013  bnel        $v1, $a0, . + 4 + (0x13 << 2)
label_248154:
    if (ctx->pc == 0x248154u) {
        ctx->pc = 0x248154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248150u;
        // 0x248154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248158u;
        goto label_248158;
    }
    ctx->pc = 0x248150u;
    {
        const bool branch_taken_0x248150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x248150) {
            ctx->pc = 0x248154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248150u;
            // 0x248154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2481A0u;
            goto label_2481a0;
        }
    }
    ctx->pc = 0x248158u;
label_248158:
    // 0x248158: 0xc091fe6  jal         func_247F98
label_24815c:
    if (ctx->pc == 0x24815Cu) {
        ctx->pc = 0x24815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248158u;
        // 0x24815c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248160u;
        goto label_248160;
    }
    ctx->pc = 0x248158u;
    SET_GPR_U32(ctx, 31, 0x248160u);
    ctx->pc = 0x24815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248158u;
    // 0x24815c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247F98u, 0x248158u, 0x248160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248160u;
label_248160:
    // 0x248160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248164:
    // 0x248164: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x248164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_248168:
    // 0x248168: 0xc092014  jal         func_248050
label_24816c:
    if (ctx->pc == 0x24816Cu) {
        ctx->pc = 0x24816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248168u;
        // 0x24816c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248170u;
        goto label_248170;
    }
    ctx->pc = 0x248168u;
    SET_GPR_U32(ctx, 31, 0x248170u);
    ctx->pc = 0x24816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248168u;
    // 0x24816c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248050u, 0x248168u, 0x248170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248170u;
label_248170:
    // 0x248170: 0x26226fe0  addiu       $v0, $s1, 0x6FE0
    ctx->pc = 0x248170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28640));
label_248174:
    // 0x248174: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x248174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_248178:
    // 0x248178: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_24817c:
    if (ctx->pc == 0x24817Cu) {
        ctx->pc = 0x24817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248178u;
        // 0x24817c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248180u;
        goto label_248180;
    }
    ctx->pc = 0x248178u;
    {
        const bool branch_taken_0x248178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248178) {
            ctx->pc = 0x24817Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248178u;
            // 0x24817c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2481A0u;
            goto label_2481a0;
        }
    }
    ctx->pc = 0x248180u;
label_248180:
    // 0x248180: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x248180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_248184:
    // 0x248184: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x248184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_248188:
    // 0x248188: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24818c:
    // 0x24818c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_248190:
    // 0x248190: 0x60f809  jalr        $v1
label_248194:
    if (ctx->pc == 0x248194u) {
        ctx->pc = 0x248194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248190u;
        // 0x248194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248198u;
        goto label_248198;
    }
    ctx->pc = 0x248190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x248198u);
        ctx->pc = 0x248194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248190u;
        // 0x248194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248190u, 0x248198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248198u;
label_248198:
    // 0x248198: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x248198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_24819c:
    // 0x24819c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24819cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2481a0:
    // 0x2481a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2481a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2481a4:
    // 0x2481a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2481a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2481a8:
    // 0x2481a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2481a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2481ac:
    // 0x2481ac: 0x3e00008  jr          $ra
label_2481b0:
    if (ctx->pc == 0x2481B0u) {
        ctx->pc = 0x2481B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481ACu;
        // 0x2481b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481B4u;
        goto label_2481b4;
    }
    ctx->pc = 0x2481ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2481B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481ACu;
        // 0x2481b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2481ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2481B4u;
label_2481b4:
    // 0x2481b4: 0x0  nop
    ctx->pc = 0x2481b4u;
    // NOP
    ctx->pc = 0x2481b8u;
}
