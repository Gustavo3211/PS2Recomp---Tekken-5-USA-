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

// Function: sub_0023B130
// Address: 0x23b130 - 0x23b2e0
void sub_0023B130_0x23b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B130_0x23b130");
#endif

    switch (ctx->pc) {
        case 0x23b1e8u: goto label_23b1e8;
        case 0x23b200u: goto label_23b200;
        default: break;
    }

    ctx->pc = 0x23b130u;

    // 0x23b130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b134: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x23b138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b13c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23b148: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23b148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23b14c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x23B14Cu;
    {
        const bool branch_taken_0x23b14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B14Cu;
        // 0x23b150: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b14c) {
            ctx->pc = 0x23B220u;
            goto label_23b220;
        }
    }
    ctx->pc = 0x23B154u;
    // 0x23b154: 0x28620042  slti        $v0, $v1, 0x42
    ctx->pc = 0x23b154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x23b158: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B158u;
    {
        const bool branch_taken_0x23b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B158u;
        // 0x23b15c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b158) {
            ctx->pc = 0x23B1A0u;
            goto label_23b1a0;
        }
    }
    ctx->pc = 0x23B160u;
    // 0x23b160: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23b164: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23B164u;
    {
        const bool branch_taken_0x23b164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B164u;
        // 0x23b168: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b164) {
            ctx->pc = 0x23B1E0u;
            goto label_23b1e0;
        }
    }
    ctx->pc = 0x23B16Cu;
    // 0x23b16c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B16Cu;
    {
        const bool branch_taken_0x23b16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B16Cu;
        // 0x23b170: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b16c) {
            ctx->pc = 0x23B188u;
            goto label_23b188;
        }
    }
    ctx->pc = 0x23B174u;
    // 0x23b174: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x23B174u;
    {
        const bool branch_taken_0x23b174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B174u;
        // 0x23b178: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b174) {
            ctx->pc = 0x23B2A4u;
            goto label_23b2a4;
        }
    }
    ctx->pc = 0x23B17Cu;
    // 0x23b17c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x23B17Cu;
    {
        const bool branch_taken_0x23b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B17Cu;
        // 0x23b180: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b17c) {
            ctx->pc = 0x23B2CCu;
            goto label_23b2cc;
        }
    }
    ctx->pc = 0x23B184u;
    // 0x23b184: 0x0  nop
    ctx->pc = 0x23b184u;
    // NOP
label_23b188:
    // 0x23b188: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23B188u;
    {
        const bool branch_taken_0x23b188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B188u;
        // 0x23b18c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b188) {
            ctx->pc = 0x23B1F8u;
            goto label_23b1f8;
        }
    }
    ctx->pc = 0x23B190u;
    // 0x23b190: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x23B190u;
    {
        const bool branch_taken_0x23b190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B190u;
        // 0x23b194: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b190) {
            ctx->pc = 0x23B208u;
            goto label_23b208;
        }
    }
    ctx->pc = 0x23B198u;
    // 0x23b198: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x23B198u;
    {
        const bool branch_taken_0x23b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B198u;
        // 0x23b19c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b198) {
            ctx->pc = 0x23B2CCu;
            goto label_23b2cc;
        }
    }
    ctx->pc = 0x23B1A0u;
label_23b1a0:
    // 0x23b1a0: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x23B1A0u;
    {
        const bool branch_taken_0x23b1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1A0u;
        // 0x23b1a4: 0x28620061  slti        $v0, $v1, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1a0) {
            ctx->pc = 0x23B2B0u;
            goto label_23b2b0;
        }
    }
    ctx->pc = 0x23B1A8u;
    // 0x23b1a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B1A8u;
    {
        const bool branch_taken_0x23b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1A8u;
        // 0x23b1ac: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1a8) {
            ctx->pc = 0x23B1C8u;
            goto label_23b1c8;
        }
    }
    ctx->pc = 0x23B1B0u;
    // 0x23b1b0: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x23b1b4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23B1B4u;
    {
        const bool branch_taken_0x23b1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1B4u;
        // 0x23b1b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1b4) {
            ctx->pc = 0x23B238u;
            goto label_23b238;
        }
    }
    ctx->pc = 0x23B1BCu;
    // 0x23b1bc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x23B1BCu;
    {
        const bool branch_taken_0x23b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1BCu;
        // 0x23b1c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1bc) {
            ctx->pc = 0x23B2CCu;
            goto label_23b2cc;
        }
    }
    ctx->pc = 0x23B1C4u;
    // 0x23b1c4: 0x0  nop
    ctx->pc = 0x23b1c4u;
    // NOP
label_23b1c8:
    // 0x23b1c8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x23B1C8u;
    {
        const bool branch_taken_0x23b1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1C8u;
        // 0x23b1cc: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1c8) {
            ctx->pc = 0x23B268u;
            goto label_23b268;
        }
    }
    ctx->pc = 0x23B1D0u;
    // 0x23b1d0: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23B1D0u;
    {
        const bool branch_taken_0x23b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1D0u;
        // 0x23b1d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1d0) {
            ctx->pc = 0x23B280u;
            goto label_23b280;
        }
    }
    ctx->pc = 0x23B1D8u;
    // 0x23b1d8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x23B1D8u;
    {
        const bool branch_taken_0x23b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1D8u;
        // 0x23b1dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1d8) {
            ctx->pc = 0x23B2CCu;
            goto label_23b2cc;
        }
    }
    ctx->pc = 0x23B1E0u;
label_23b1e0:
    // 0x23b1e0: 0xc07c47e  jal         func_1F11F8
    ctx->pc = 0x23B1E0u;
    SET_GPR_U32(ctx, 31, 0x23B1E8u);
    ctx->pc = 0x1F11F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F11F8u, 0x23B1E0u, 0x23B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1E8u;
label_23b1e8:
    // 0x23b1e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b1ec: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x23b1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23b1f0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23B1F0u;
    {
        const bool branch_taken_0x23b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1F0u;
        // 0x23b1f4: 0x38710001  xori        $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1f0) {
            ctx->pc = 0x23B2C4u;
            goto label_23b2c4;
        }
    }
    ctx->pc = 0x23B1F8u;
label_23b1f8:
    // 0x23b1f8: 0xc07c47e  jal         func_1F11F8
    ctx->pc = 0x23B1F8u;
    SET_GPR_U32(ctx, 31, 0x23B200u);
    ctx->pc = 0x1F11F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F11F8u, 0x23B1F8u, 0x23B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B200u;
label_23b200:
    // 0x23b200: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23B200u;
    {
        const bool branch_taken_0x23b200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B200u;
        // 0x23b204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b200) {
            ctx->pc = 0x23B284u;
            goto label_23b284;
        }
    }
    ctx->pc = 0x23B208u;
label_23b208:
    // 0x23b208: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23b208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23b20c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b210: 0x8c4488d0  lw          $a0, -0x7730($v0)
    ctx->pc = 0x23b210u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x23b214: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23B214u;
    {
        const bool branch_taken_0x23b214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B214u;
        // 0x23b218: 0x8c84069c  lw          $a0, 0x69C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b214) {
            ctx->pc = 0x23B258u;
            goto label_23b258;
        }
    }
    ctx->pc = 0x23B21Cu;
    // 0x23b21c: 0x0  nop
    ctx->pc = 0x23b21cu;
    // NOP
label_23b220:
    // 0x23b220: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23b220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23b224: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23b224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b228: 0x8c4488d4  lw          $a0, -0x772C($v0)
    ctx->pc = 0x23b228u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x23b22c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23B22Cu;
    {
        const bool branch_taken_0x23b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B22Cu;
        // 0x23b230: 0x8c84069c  lw          $a0, 0x69C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b22c) {
            ctx->pc = 0x23B258u;
            goto label_23b258;
        }
    }
    ctx->pc = 0x23B234u;
    // 0x23b234: 0x0  nop
    ctx->pc = 0x23b234u;
    // NOP
label_23b238:
    // 0x23b238: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23b238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23b23c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b240: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x23b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x23b244: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23b244u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x23b248: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23b248u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x23b24c: 0x8c86069c  lw          $a2, 0x69C($a0)
    ctx->pc = 0x23b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
    // 0x23b250: 0x8ca2069c  lw          $v0, 0x69C($a1)
    ctx->pc = 0x23b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x23b254: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x23b254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23b258:
    // 0x23b258: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x23b258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23b25c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23B25Cu;
    {
        const bool branch_taken_0x23b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B25Cu;
        // 0x23b260: 0x38710001  xori        $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b25c) {
            ctx->pc = 0x23B2C4u;
            goto label_23b2c4;
        }
    }
    ctx->pc = 0x23B264u;
    // 0x23b264: 0x0  nop
    ctx->pc = 0x23b264u;
    // NOP
label_23b268:
    // 0x23b268: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b26c: 0x8f84973c  lw          $a0, -0x68C4($gp)
    ctx->pc = 0x23b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x23b270: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x23b270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23b274: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23B274u;
    {
        const bool branch_taken_0x23b274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B274u;
        // 0x23b278: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b274) {
            ctx->pc = 0x23B2C4u;
            goto label_23b2c4;
        }
    }
    ctx->pc = 0x23B27Cu;
    // 0x23b27c: 0x0  nop
    ctx->pc = 0x23b27cu;
    // NOP
label_23b280:
    // 0x23b280: 0x8f84973c  lw          $a0, -0x68C4($gp)
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
label_23b284:
    // 0x23b284: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b288: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x23b288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23b28c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23B28Cu;
    {
        const bool branch_taken_0x23b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B28Cu;
        // 0x23b290: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b28c) {
            ctx->pc = 0x23B2C8u;
            goto label_23b2c8;
        }
    }
    ctx->pc = 0x23B294u;
    // 0x23b294: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23b298: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x23b298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23b29c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23B29Cu;
    {
        const bool branch_taken_0x23b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B29Cu;
        // 0x23b2a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b29c) {
            ctx->pc = 0x23B2C8u;
            goto label_23b2c8;
        }
    }
    ctx->pc = 0x23B2A4u;
label_23b2a4:
    // 0x23b2a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23B2A4u;
    {
        const bool branch_taken_0x23b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2A4u;
        // 0x23b2a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2a4) {
            ctx->pc = 0x23B2C4u;
            goto label_23b2c4;
        }
    }
    ctx->pc = 0x23B2ACu;
    // 0x23b2ac: 0x0  nop
    ctx->pc = 0x23b2acu;
    // NOP
label_23b2b0:
    // 0x23b2b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23b2b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b2b8: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x23b2bc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23b2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23b2c0: 0x8e31d758  lw          $s1, -0x28A8($s1)
    ctx->pc = 0x23b2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956888)));
label_23b2c4:
    // 0x23b2c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23b2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b2c8:
    // 0x23b2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b2cc:
    // 0x23b2cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2D4u;
        // 0x23b2d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B2DCu;
    // 0x23b2dc: 0x0  nop
    ctx->pc = 0x23b2dcu;
    // NOP
    ctx->pc = 0x23b2e0u;
}
