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

// Function: sub_0029AF20
// Address: 0x29af20 - 0x29b090
void sub_0029AF20_0x29af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AF20_0x29af20");
#endif

    switch (ctx->pc) {
        case 0x29af34u: goto label_29af34;
        case 0x29af48u: goto label_29af48;
        case 0x29af5cu: goto label_29af5c;
        case 0x29af78u: goto label_29af78;
        case 0x29af94u: goto label_29af94;
        case 0x29afb0u: goto label_29afb0;
        case 0x29afe8u: goto label_29afe8;
        case 0x29b078u: goto label_29b078;
        default: break;
    }

    ctx->pc = 0x29af20u;

    // 0x29af20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29af24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29af28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29af2c: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x29AF2Cu;
    SET_GPR_U32(ctx, 31, 0x29AF34u);
    ctx->pc = 0x29AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF2Cu;
    // 0x29af30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x29AF2Cu, 0x29AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF34u;
label_29af34:
    // 0x29af34: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29af34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29af38: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x29af38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29af3c: 0x2463e3f0  addiu       $v1, $v1, -0x1C10
    ctx->pc = 0x29af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960112));
    // 0x29af40: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29AF40u;
    SET_GPR_U32(ctx, 31, 0x29AF48u);
    ctx->pc = 0x29AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF40u;
    // 0x29af44: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29AF40u, 0x29AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF48u;
label_29af48:
    // 0x29af48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29af48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af4c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x29af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29af50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29af50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af54: 0xc089636  jal         func_2258D8
    ctx->pc = 0x29AF54u;
    SET_GPR_U32(ctx, 31, 0x29AF5Cu);
    ctx->pc = 0x29AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF54u;
    // 0x29af58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x29AF54u, 0x29AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF5Cu;
label_29af5c:
    // 0x29af5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29af60: 0xaf90cad4  sw          $s0, -0x352C($gp)
    ctx->pc = 0x29af60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953684), GPR_U32(ctx, 16));
    // 0x29af64: 0x2442c168  addiu       $v0, $v0, -0x3E98
    ctx->pc = 0x29af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
    // 0x29af68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29af68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af6c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x29af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x29af70: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29AF70u;
    SET_GPR_U32(ctx, 31, 0x29AF78u);
    ctx->pc = 0x29AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF70u;
    // 0x29af74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29AF70u, 0x29AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF78u;
label_29af78:
    // 0x29af78: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29af78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29af7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29af7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af80: 0x2463e4b0  addiu       $v1, $v1, -0x1B50
    ctx->pc = 0x29af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960304));
    // 0x29af84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29af84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af88: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29af88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29af8c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29AF8Cu;
    SET_GPR_U32(ctx, 31, 0x29AF94u);
    ctx->pc = 0x29AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF8Cu;
    // 0x29af90: 0xaf82cac4  sw          $v0, -0x353C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29AF8Cu, 0x29AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF94u;
label_29af94:
    // 0x29af94: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29af94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29af98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29af98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af9c: 0x2463e480  addiu       $v1, $v1, -0x1B80
    ctx->pc = 0x29af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960256));
    // 0x29afa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afa4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29afa8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29AFA8u;
    SET_GPR_U32(ctx, 31, 0x29AFB0u);
    ctx->pc = 0x29AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFA8u;
    // 0x29afac: 0xaf82cac8  sw          $v0, -0x3538($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29AFA8u, 0x29AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFB0u;
label_29afb0:
    // 0x29afb0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29afb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29afb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afb8: 0x2463e450  addiu       $v1, $v1, -0x1BB0
    ctx->pc = 0x29afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960208));
    // 0x29afbc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29afc0: 0xaf82cacc  sw          $v0, -0x3534($gp)
    ctx->pc = 0x29afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953676), GPR_U32(ctx, 2));
    // 0x29afc4: 0x8f82cac4  lw          $v0, -0x353C($gp)
    ctx->pc = 0x29afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953668)));
    // 0x29afc8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x29afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29afcc: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x29afccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x29afd0: 0x8f83cac8  lw          $v1, -0x3538($gp)
    ctx->pc = 0x29afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953672)));
    // 0x29afd4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x29afd8: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x29afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
    // 0x29afdc: 0x8f82cacc  lw          $v0, -0x3534($gp)
    ctx->pc = 0x29afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953676)));
    // 0x29afe0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x29afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29afe4: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x29afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_29afe8:
    // 0x29afe8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x29afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29afec: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29aff0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29aff4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29aff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29affc: 0x28a40010  slti        $a0, $a1, 0x10
    ctx->pc = 0x29affcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x29b000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b004: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x29b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x29b008: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x29b008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x29b00c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29b010: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x29B010u;
    {
        const bool branch_taken_0x29b010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B010u;
        // 0x29b014: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b010) {
            ctx->pc = 0x29AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29afe8;
        }
    }
    ctx->pc = 0x29B018u;
    // 0x29b018: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29b01c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x29b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x29b020: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29b020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29b024: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29b024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29b028: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29b028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29b02c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29b030: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x29b030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x29b034: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x29b034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x29b038: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29b03c: 0xac4400d0  sw          $a0, 0xD0($v0)
    ctx->pc = 0x29b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 4));
    // 0x29b040: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29b044: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x29b044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x29b048: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29b048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29b04c: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x29b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x29b050: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x29b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x29b054: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x29b054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x29b058: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29B058u;
    {
        const bool branch_taken_0x29b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B058u;
        // 0x29b05c: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b058) {
            ctx->pc = 0x29B098u;
            return;
        }
    }
    ctx->pc = 0x29B060u;
    // 0x29b060: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x29b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29b064: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x29b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x29b068: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x29b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x29b06c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b070: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x29B070u;
    SET_GPR_U32(ctx, 31, 0x29B078u);
    ctx->pc = 0x29B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B070u;
    // 0x29b074: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x29B070u, 0x29B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B078u;
label_29b078:
    // 0x29b078: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x29b078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29b07c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x29b080: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x29b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x29b084: 0x2484ffb0  addiu       $a0, $a0, -0x50
    ctx->pc = 0x29b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    // 0x29b088: 0xc048b90  jal         func_122E40
    ctx->pc = 0x29B088u;
    SET_GPR_U32(ctx, 31, 0x29B090u);
    ctx->pc = 0x29B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B088u;
    // 0x29b08c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x29B088u, 0x29B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B090u;
}
