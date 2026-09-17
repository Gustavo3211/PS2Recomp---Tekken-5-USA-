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

// Function: sub_0027B0B0
// Address: 0x27b0b0 - 0x27b188
void sub_0027B0B0_0x27b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B0B0_0x27b0b0");
#endif

    switch (ctx->pc) {
        case 0x27b0dcu: goto label_27b0dc;
        default: break;
    }

    ctx->pc = 0x27b0b0u;

    // 0x27b0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b0b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x27b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x27b0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b0bc: 0x58403  sra         $s0, $a1, 16
    ctx->pc = 0x27b0bcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    // 0x27b0c0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x27b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27b0c4: 0x32023c00  andi        $v0, $s0, 0x3C00
    ctx->pc = 0x27b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15360);
    // 0x27b0c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27b0cc: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x27B0CCu;
    {
        const bool branch_taken_0x27b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0CCu;
        // 0x27b0d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0cc) {
            ctx->pc = 0x27B138u;
            goto label_27b138;
        }
    }
    ctx->pc = 0x27B0D4u;
    // 0x27b0d4: 0xc09e9e2  jal         func_27A788
    ctx->pc = 0x27B0D4u;
    SET_GPR_U32(ctx, 31, 0x27B0DCu);
    ctx->pc = 0x27A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A788u, 0x27B0D4u, 0x27B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0DCu;
label_27b0dc:
    // 0x27b0dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27B0DCu;
    {
        const bool branch_taken_0x27b0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0DCu;
        // 0x27b0e0: 0x3203003f  andi        $v1, $s0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0dc) {
            ctx->pc = 0x27B118u;
            goto label_27b118;
        }
    }
    ctx->pc = 0x27B0E4u;
    // 0x27b0e4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x27b0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x27b0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B0E8u;
    {
        const bool branch_taken_0x27b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0E8u;
        // 0x27b0ec: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0e8) {
            ctx->pc = 0x27B100u;
            goto label_27b100;
        }
    }
    ctx->pc = 0x27B0F0u;
    // 0x27b0f0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x27b0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27b0f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27B0F4u;
    {
        const bool branch_taken_0x27b0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0F4u;
        // 0x27b0f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0f4) {
            ctx->pc = 0x27B174u;
            goto label_27b174;
        }
    }
    ctx->pc = 0x27B0FCu;
    // 0x27b0fc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x27b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_27b100:
    // 0x27b100: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x27b100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x27b104: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27b104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27b108: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27b108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27b10c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27B10Cu;
    {
        const bool branch_taken_0x27b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B10Cu;
        // 0x27b110: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b10c) {
            ctx->pc = 0x27B170u;
            goto label_27b170;
        }
    }
    ctx->pc = 0x27B114u;
    // 0x27b114: 0x0  nop
    ctx->pc = 0x27b114u;
    // NOP
label_27b118:
    // 0x27b118: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x27b118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x27b11c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27B11Cu;
    {
        const bool branch_taken_0x27b11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B11Cu;
        // 0x27b120: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b11c) {
            ctx->pc = 0x27B174u;
            goto label_27b174;
        }
    }
    ctx->pc = 0x27B124u;
    // 0x27b124: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x27b124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27b128: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x27B128u;
    {
        const bool branch_taken_0x27b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b128) {
            ctx->pc = 0x27B12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B128u;
            // 0x27b12c: 0x24100213  addiu       $s0, $zero, 0x213 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B170u;
            goto label_27b170;
        }
    }
    ctx->pc = 0x27B130u;
    // 0x27b130: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27B130u;
    {
        const bool branch_taken_0x27b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B130u;
        // 0x27b134: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b130) {
            ctx->pc = 0x27B174u;
            goto label_27b174;
        }
    }
    ctx->pc = 0x27B138u;
label_27b138:
    // 0x27b138: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x27b138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x27b13c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x27b13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27b140: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27B140u;
    {
        const bool branch_taken_0x27b140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B140u;
        // 0x27b144: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b140) {
            ctx->pc = 0x27B174u;
            goto label_27b174;
        }
    }
    ctx->pc = 0x27B148u;
    // 0x27b148: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x27b148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x27b14c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B14Cu;
    {
        const bool branch_taken_0x27b14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b14c) {
            ctx->pc = 0x27B150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B14Cu;
            // 0x27b150: 0x8ca20310  lw          $v0, 0x310($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B164u;
            goto label_27b164;
        }
    }
    ctx->pc = 0x27B154u;
    // 0x27b154: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x27b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27b158: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B158u;
    {
        const bool branch_taken_0x27b158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B158u;
        // 0x27b15c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b158) {
            ctx->pc = 0x27B174u;
            goto label_27b174;
        }
    }
    ctx->pc = 0x27B160u;
    // 0x27b160: 0x8ca20310  lw          $v0, 0x310($a1)
    ctx->pc = 0x27b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 784)));
label_27b164:
    // 0x27b164: 0x24040213  addiu       $a0, $zero, 0x213
    ctx->pc = 0x27b164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
    // 0x27b168: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x27b168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x27b16c: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x27b16cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_27b170:
    // 0x27b170: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27b170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b174:
    // 0x27b174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b178: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27b178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b17c: 0x3e00008  jr          $ra
    ctx->pc = 0x27B17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B17Cu;
        // 0x27b180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B184u;
    // 0x27b184: 0x0  nop
    ctx->pc = 0x27b184u;
    // NOP
    ctx->pc = 0x27b188u;
}
