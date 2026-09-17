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

// Function: sub_002CAF68
// Address: 0x2caf68 - 0x2cb168
void sub_002CAF68_0x2caf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF68_0x2caf68");
#endif

    switch (ctx->pc) {
        case 0x2caf98u: goto label_2caf98;
        case 0x2cafb0u: goto label_2cafb0;
        case 0x2cb028u: goto label_2cb028;
        case 0x2cb03cu: goto label_2cb03c;
        case 0x2cb050u: goto label_2cb050;
        case 0x2cb068u: goto label_2cb068;
        case 0x2cb0c8u: goto label_2cb0c8;
        default: break;
    }

    ctx->pc = 0x2caf68u;

    // 0x2caf68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2caf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2caf6c: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x2caf6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2caf70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2caf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2caf74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2caf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2caf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2caf7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2caf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2caf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2caf84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2caf84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2caf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2caf8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2caf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2caf90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2caf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2caf94: 0x0  nop
    ctx->pc = 0x2caf94u;
    // NOP
label_2caf98:
    // 0x2caf98: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CAF98u;
    {
        const bool branch_taken_0x2caf98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF98u;
        // 0x2caf9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf98) {
            ctx->pc = 0x2CAFF0u;
            goto label_2caff0;
        }
    }
    ctx->pc = 0x2CAFA0u;
    // 0x2cafa0: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x2cafa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cafa4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2cafa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafa8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cafac: 0x0  nop
    ctx->pc = 0x2cafacu;
    // NOP
label_2cafb0:
    // 0x2cafb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cafb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cafb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cafb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cafbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cafc0: 0xa8382a  slt         $a3, $a1, $t0
    ctx->pc = 0x2cafc0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cafc4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2cafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2cafc8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cafc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cafcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAFCCu;
    {
        const bool branch_taken_0x2cafcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFCCu;
        // 0x2cafd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafcc) {
            ctx->pc = 0x2CAFE0u;
            goto label_2cafe0;
        }
    }
    ctx->pc = 0x2CAFD4u;
    // 0x2cafd4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2cafd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cafd8: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x2cafd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x2cafdc: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x2cafdcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cafe0:
    // 0x2cafe0: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAFE0u;
    {
        const bool branch_taken_0x2cafe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cafe0) {
            ctx->pc = 0x2CAFF4u;
            goto label_2caff4;
        }
    }
    ctx->pc = 0x2CAFE8u;
    // 0x2cafe8: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CAFE8u;
    {
        const bool branch_taken_0x2cafe8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFE8u;
        // 0x2cafec: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafe8) {
            ctx->pc = 0x2CAFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cafb0;
        }
    }
    ctx->pc = 0x2CAFF0u;
label_2caff0:
    // 0x2caff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2caff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2caff4:
    // 0x2caff4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAFF4u;
    {
        const bool branch_taken_0x2caff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFF4u;
        // 0x2caff8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caff4) {
            ctx->pc = 0x2CB008u;
            goto label_2cb008;
        }
    }
    ctx->pc = 0x2CAFFCu;
    // 0x2caffc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2caffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cb004: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cb004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2cb008:
    // 0x2cb008: 0x2942005a  slti        $v0, $t2, 0x5A
    ctx->pc = 0x2cb008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2cb00c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2CB00Cu;
    {
        const bool branch_taken_0x2cb00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb00c) {
            ctx->pc = 0x2CB010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB00Cu;
            // 0x2cb010: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caf98;
        }
    }
    ctx->pc = 0x2CB014u;
    // 0x2cb014: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cb014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb018: 0x10a0004c  beqz        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2CB018u;
    {
        const bool branch_taken_0x2cb018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB018u;
        // 0x2cb01c: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb018) {
            ctx->pc = 0x2CB14Cu;
            goto label_2cb14c;
        }
    }
    ctx->pc = 0x2CB020u;
    // 0x2cb020: 0xc0be9b4  jal         func_2FA6D0
    ctx->pc = 0x2CB020u;
    SET_GPR_U32(ctx, 31, 0x2CB028u);
    ctx->pc = 0x2CB024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB020u;
    // 0x2cb024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6D0u, 0x2CB020u, 0x2CB028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB028u;
label_2cb028:
    // 0x2cb028: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cb028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb02c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cb02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2cb030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cb030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb034: 0xc0be9b4  jal         func_2FA6D0
    ctx->pc = 0x2CB034u;
    SET_GPR_U32(ctx, 31, 0x2CB03Cu);
    ctx->pc = 0x2CB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB034u;
    // 0x2cb038: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6D0u, 0x2CB034u, 0x2CB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB03Cu;
label_2cb03c:
    // 0x2cb03c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2cb03cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb040: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2cb040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2cb044: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x2cb044u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cb048: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x2cb048u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb04c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x2cb04cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cb050:
    // 0x2cb050: 0x19000015  blez        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB050u;
    {
        const bool branch_taken_0x2cb050 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB050u;
        // 0x2cb054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb050) {
            ctx->pc = 0x2CB0A8u;
            goto label_2cb0a8;
        }
    }
    ctx->pc = 0x2CB058u;
    // 0x2cb058: 0x8e2a0004  lw          $t2, 0x4($s1)
    ctx->pc = 0x2cb058u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cb05c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2cb05cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb060: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2cb060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cb064: 0x0  nop
    ctx->pc = 0x2cb064u;
    // NOP
label_2cb068:
    // 0x2cb068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb06c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb070: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cb070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cb074: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cb074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cb078: 0xa9382a  slt         $a3, $a1, $t1
    ctx->pc = 0x2cb078u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2cb07c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2cb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2cb080: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cb080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cb084: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB084u;
    {
        const bool branch_taken_0x2cb084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB084u;
        // 0x2cb088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb084) {
            ctx->pc = 0x2CB098u;
            goto label_2cb098;
        }
    }
    ctx->pc = 0x2CB08Cu;
    // 0x2cb08c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2cb08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb090: 0x4b1026  xor         $v0, $v0, $t3
    ctx->pc = 0x2cb090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 11));
    // 0x2cb094: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x2cb094u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cb098:
    // 0x2cb098: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB098u;
    {
        const bool branch_taken_0x2cb098 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb098) {
            ctx->pc = 0x2CB0ACu;
            goto label_2cb0ac;
        }
    }
    ctx->pc = 0x2CB0A0u;
    // 0x2cb0a0: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CB0A0u;
    {
        const bool branch_taken_0x2cb0a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0A0u;
        // 0x2cb0a4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0a0) {
            ctx->pc = 0x2CB068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb068;
        }
    }
    ctx->pc = 0x2CB0A8u;
label_2cb0a8:
    // 0x2cb0a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cb0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb0ac:
    // 0x2cb0ac: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CB0ACu;
    {
        const bool branch_taken_0x2cb0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0ac) {
            ctx->pc = 0x2CB0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB0ACu;
            // 0x2cb0b0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB140u;
            goto label_2cb140;
        }
    }
    ctx->pc = 0x2CB0B4u;
    // 0x2cb0b4: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x2cb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2cb0b8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CB0B8u;
    {
        const bool branch_taken_0x2cb0b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0B8u;
        // 0x2cb0bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0b8) {
            ctx->pc = 0x2CB108u;
            goto label_2cb108;
        }
    }
    ctx->pc = 0x2CB0C0u;
    // 0x2cb0c0: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x2cb0c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cb0c4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2cb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2cb0c8:
    // 0x2cb0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb0cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cb0d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cb0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cb0d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cb0d8: 0x88382a  slt         $a3, $a0, $t0
    ctx->pc = 0x2cb0d8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cb0dc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2cb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2cb0e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cb0e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB0E4u;
    {
        const bool branch_taken_0x2cb0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0E4u;
        // 0x2cb0e8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0e4) {
            ctx->pc = 0x2CB0F8u;
            goto label_2cb0f8;
        }
    }
    ctx->pc = 0x2CB0ECu;
    // 0x2cb0ec: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2cb0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb0f0: 0x4b1026  xor         $v0, $v0, $t3
    ctx->pc = 0x2cb0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 11));
    // 0x2cb0f4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x2cb0f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cb0f8:
    // 0x2cb0f8: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB0F8u;
    {
        const bool branch_taken_0x2cb0f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0f8) {
            ctx->pc = 0x2CB0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB0F8u;
            // 0x2cb0fc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB110u;
            goto label_2cb110;
        }
    }
    ctx->pc = 0x2CB100u;
    // 0x2cb100: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CB100u;
    {
        const bool branch_taken_0x2cb100 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB100u;
        // 0x2cb104: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb100) {
            ctx->pc = 0x2CB0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb0c8;
        }
    }
    ctx->pc = 0x2CB108u;
label_2cb108:
    // 0x2cb108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb10c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cb10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb110:
    // 0x2cb110: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x2cb110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2cb114: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2cb114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cb118: 0xc2840  sll         $a1, $t4, 1
    ctx->pc = 0x2cb118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2cb11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb120: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2cb120u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2cb124: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2cb124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2cb128: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2cb128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2cb12c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2cb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cb130: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x2cb130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cb134: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2cb134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cb138: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x2cb138u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cb13c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2cb13cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2cb140:
    // 0x2cb140: 0x2962005a  slti        $v0, $t3, 0x5A
    ctx->pc = 0x2cb140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2cb144: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2CB144u;
    {
        const bool branch_taken_0x2cb144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb144) {
            ctx->pc = 0x2CB148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB144u;
            // 0x2cb148: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb050;
        }
    }
    ctx->pc = 0x2CB14Cu;
label_2cb14c:
    // 0x2cb14c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cb154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb158: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cb158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb15c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB15Cu;
        // 0x2cb160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB164u;
    // 0x2cb164: 0x0  nop
    ctx->pc = 0x2cb164u;
    // NOP
    ctx->pc = 0x2cb168u;
}
