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

// Function: sub_002ED110
// Address: 0x2ed110 - 0x2ed19c
void sub_002ED110_0x2ed110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED110_0x2ed110");
#endif

    switch (ctx->pc) {
        case 0x2ed158u: goto label_2ed158;
        default: break;
    }

    ctx->pc = 0x2ed110u;

    // 0x2ed110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed11c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed124: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x2ed124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ed128: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ed128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed12c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED12Cu;
    {
        const bool branch_taken_0x2ed12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED12Cu;
        // 0x2ed130: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed12c) {
            ctx->pc = 0x2ED144u;
            goto label_2ed144;
        }
    }
    ctx->pc = 0x2ED134u;
    // 0x2ed134: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ed134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ed138: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ed138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ed13c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED13Cu;
    {
        const bool branch_taken_0x2ed13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed13c) {
            ctx->pc = 0x2ED150u;
            goto label_2ed150;
        }
    }
    ctx->pc = 0x2ED144u;
label_2ed144:
    // 0x2ed144: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ed144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ed148: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed14c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ed14cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ed150:
    // 0x2ed150: 0xc0bb87a  jal         func_2EE1E8
    ctx->pc = 0x2ED150u;
    SET_GPR_U32(ctx, 31, 0x2ED158u);
    ctx->pc = 0x2EE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1E8u, 0x2ED150u, 0x2ED158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED158u;
label_2ed158:
    // 0x2ed158: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2ED158u;
    {
        const bool branch_taken_0x2ed158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED158u;
        // 0x2ed15c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed158) {
            ctx->pc = 0x2ED194u;
            goto label_2ed194;
        }
    }
    ctx->pc = 0x2ED160u;
    // 0x2ed160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED164u;
    {
        const bool branch_taken_0x2ed164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED164u;
        // 0x2ed168: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed164) {
            ctx->pc = 0x2ED17Cu;
            goto label_2ed17c;
        }
    }
    ctx->pc = 0x2ED16Cu;
    // 0x2ed16c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed170: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ed170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ed174: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED174u;
    {
        const bool branch_taken_0x2ed174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed174) {
            ctx->pc = 0x2ED178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED174u;
            // 0x2ed178: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED18Cu;
            goto label_2ed18c;
        }
    }
    ctx->pc = 0x2ED17Cu;
label_2ed17c:
    // 0x2ed17c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ed17cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ed180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed184: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ed184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ed188: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2ed188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48u));
label_2ed18c:
    // 0x2ed18c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2ed18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2ed190: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x2ed190u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ed194:
    // 0x2ed194: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ed194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2ed19cu;
}
