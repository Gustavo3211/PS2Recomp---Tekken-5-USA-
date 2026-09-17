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

// Function: sub_004A5FE8
// Address: 0x4a5fe8 - 0x4a6080
void sub_004A5FE8_0x4a5fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5FE8_0x4a5fe8");
#endif

    ctx->pc = 0x4a5fe8u;

    // 0x4a5fe8: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x4a5fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
    // 0x4a5fec: 0x2549d680  addiu       $t1, $t2, -0x2980
    ctx->pc = 0x4a5fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
    // 0x4a5ff0: 0x852223c2  lh          $v0, 0x23C2($t1)
    ctx->pc = 0x4a5ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72FA42u));
    // 0x4a5ff4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4A5FF4u;
    {
        const bool branch_taken_0x4a5ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5FF4u;
        // 0x4a5ff8: 0x252623c8  addiu       $a2, $t1, 0x23C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 9160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5ff4) {
            ctx->pc = 0x4A6098u;
            return;
        }
    }
    ctx->pc = 0x4A5FFCu;
    // 0x4a5ffc: 0x952823c4  lhu         $t0, 0x23C4($t1)
    ctx->pc = 0x4a5ffcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 9156)));
    // 0x4a6000: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a6000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a6004: 0x252723ca  addiu       $a3, $t1, 0x23CA
    ctx->pc = 0x4a6004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 9162));
    // 0x4a6008: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a6008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a600c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a600cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a6010: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x4a6010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x4a6014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a6014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a6018: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4a6018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4a601c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a601cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a6020: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a6020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a6024: 0x38640020  xori        $a0, $v1, 0x20
    ctx->pc = 0x4a6024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32);
    // 0x4a6028: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x4a6028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a602c: 0x64280b  movn        $a1, $v1, $a0
    ctx->pc = 0x4a602cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4a6030: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x4a6030u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a6034: 0xa4e80000  sh          $t0, 0x0($a3)
    ctx->pc = 0x4a6034u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a6038: 0x852623c6  lh          $a2, 0x23C6($t1)
    ctx->pc = 0x4a6038u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 9158)));
    // 0x4a603c: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x4a603cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4a6040: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A6040u;
    {
        const bool branch_taken_0x4a6040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6040u;
        // 0x4a6044: 0x2543d680  addiu       $v1, $t2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6040) {
            ctx->pc = 0x4A608Cu;
            return;
        }
    }
    ctx->pc = 0x4A6048u;
    // 0x4a6048: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4a6048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4a604c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a6050: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a6050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a6054: 0x8c63b1f0  lw          $v1, -0x4E10($v1)
    ctx->pc = 0x4a6054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947312)));
    // 0x4a6058: 0x600008  jr          $v1
    ctx->pc = 0x4A6058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A6060u: goto label_4a6060;
            case 0x4A6068u: goto label_4a6068;
            case 0x4A6070u: goto label_4a6070;
            case 0x4A6078u: goto label_4a6078;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6058u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A6060u;
label_4a6060:
    // 0x4a6060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A6060u;
    {
        const bool branch_taken_0x4a6060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6060u;
        // 0x4a6064: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6060) {
            ctx->pc = 0x4A6084u;
            return;
        }
    }
    ctx->pc = 0x4A6068u;
label_4a6068:
    // 0x4a6068: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A6068u;
    {
        const bool branch_taken_0x4a6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6068u;
        // 0x4a606c: 0xa4e00002  sh          $zero, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6068) {
            ctx->pc = 0x4A6088u;
            return;
        }
    }
    ctx->pc = 0x4A6070u;
label_4a6070:
    // 0x4a6070: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A6070u;
    {
        const bool branch_taken_0x4a6070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6070u;
        // 0x4a6074: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6070) {
            ctx->pc = 0x4A6084u;
            return;
        }
    }
    ctx->pc = 0x4A6078u;
label_4a6078:
    // 0x4a6078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A6078u;
    {
        const bool branch_taken_0x4a6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6078u;
        // 0x4a607c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6078) {
            ctx->pc = 0x4A6084u;
            return;
        }
    }
    ctx->pc = 0x4A6080u;
}
