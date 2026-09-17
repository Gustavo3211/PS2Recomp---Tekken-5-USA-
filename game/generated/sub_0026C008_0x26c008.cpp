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

// Function: sub_0026C008
// Address: 0x26c008 - 0x26c148
void sub_0026C008_0x26c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C008_0x26c008");
#endif

    switch (ctx->pc) {
        case 0x26c070u: goto label_26c070;
        case 0x26c0a8u: goto label_26c0a8;
        default: break;
    }

    ctx->pc = 0x26c008u;

    // 0x26c008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c00c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26c014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c01c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c020: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x26c020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26c024: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26c028: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c02c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x26C02Cu;
    {
        const bool branch_taken_0x26c02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C02Cu;
        // 0x26c030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c02c) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C034u;
    // 0x26c034: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26c038: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26c03c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c040: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26C040u;
    {
        const bool branch_taken_0x26c040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C040u;
        // 0x26c044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c040) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C048u;
    // 0x26c048: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x26c048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x26c04c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x26C04Cu;
    {
        const bool branch_taken_0x26c04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C04Cu;
        // 0x26c050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c04c) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C054u;
    // 0x26c054: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x26c054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x26c058: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x26C058u;
    {
        const bool branch_taken_0x26c058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c058) {
            ctx->pc = 0x26C05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C058u;
            // 0x26c05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C060u;
    // 0x26c060: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26c060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26c064: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26c064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c068: 0xc09faac  jal         func_27EAB0
    ctx->pc = 0x26C068u;
    SET_GPR_U32(ctx, 31, 0x26C070u);
    ctx->pc = 0x26C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C068u;
    // 0x26c06c: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EAB0u, 0x26C068u, 0x26C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C070u;
label_26c070:
    // 0x26c070: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x26c070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c074: 0x460002e  bltz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x26C074u;
    {
        const bool branch_taken_0x26c074 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C074u;
        // 0x26c078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c074) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C07Cu;
    // 0x26c07c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26c080: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x26c080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x26c084: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x26c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26c088: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26c088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26c08c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x26C08Cu;
    {
        const bool branch_taken_0x26c08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C08Cu;
        // 0x26c090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c08c) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C094u;
    // 0x26c094: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26c098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c09c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0a0: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26C0A0u;
    SET_GPR_U32(ctx, 31, 0x26C0A8u);
    ctx->pc = 0x26C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C0A0u;
    // 0x26c0a4: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26C0A0u, 0x26C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0A8u;
label_26c0a8:
    // 0x26c0a8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26C0A8u;
    {
        const bool branch_taken_0x26c0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0A8u;
        // 0x26c0ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0a8) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C0B0u;
    // 0x26c0b0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26c0b4: 0x8c44032c  lw          $a0, 0x32C($v0)
    ctx->pc = 0x26c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x26c0b8: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x26c0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x26c0bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C0BCu;
    {
        const bool branch_taken_0x26c0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0BCu;
        // 0x26c0c0: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0bc) {
            ctx->pc = 0x26C0D8u;
            goto label_26c0d8;
        }
    }
    ctx->pc = 0x26C0C4u;
    // 0x26c0c4: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x26c0c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26c0c8: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26C0C8u;
    {
        const bool branch_taken_0x26c0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c0c8) {
            ctx->pc = 0x26C0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C0C8u;
            // 0x26c0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C0D0u;
    // 0x26c0d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26C0D0u;
    {
        const bool branch_taken_0x26c0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0D0u;
        // 0x26c0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0d0) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C0D8u;
label_26c0d8:
    // 0x26c0d8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x26c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x26c0dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C0DCu;
    {
        const bool branch_taken_0x26c0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0DCu;
        // 0x26c0e0: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0dc) {
            ctx->pc = 0x26C108u;
            goto label_26c108;
        }
    }
    ctx->pc = 0x26C0E4u;
    // 0x26c0e4: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x26c0e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26c0e8: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26C0E8u;
    {
        const bool branch_taken_0x26c0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0E8u;
        // 0x26c0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0e8) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C0F0u;
    // 0x26c0f0: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x26c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x26c0f4: 0x5482000e  bnel        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26C0F4u;
    {
        const bool branch_taken_0x26c0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c0f4) {
            ctx->pc = 0x26C0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C0F4u;
            // 0x26c0f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C0FCu;
    // 0x26c0fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26C0FCu;
    {
        const bool branch_taken_0x26c0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0FCu;
        // 0x26c100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0fc) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C104u;
    // 0x26c104: 0x0  nop
    ctx->pc = 0x26c104u;
    // NOP
label_26c108:
    // 0x26c108: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x26c108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x26c10c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C10Cu;
    {
        const bool branch_taken_0x26c10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C10Cu;
        // 0x26c110: 0x24020512  addiu       $v0, $zero, 0x512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c10c) {
            ctx->pc = 0x26C12Cu;
            goto label_26c12c;
        }
    }
    ctx->pc = 0x26C114u;
    // 0x26c114: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x26c114u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26c118: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C118u;
    {
        const bool branch_taken_0x26c118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C118u;
        // 0x26c11c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c118) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C120u;
    // 0x26c120: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x26c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x26c124: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C124u;
    {
        const bool branch_taken_0x26c124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C124u;
        // 0x26c128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c124) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C12Cu;
label_26c12c:
    // 0x26c12c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c130:
    // 0x26c130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c13c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C13Cu;
        // 0x26c140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C144u;
    // 0x26c144: 0x0  nop
    ctx->pc = 0x26c144u;
    // NOP
    ctx->pc = 0x26c148u;
}
