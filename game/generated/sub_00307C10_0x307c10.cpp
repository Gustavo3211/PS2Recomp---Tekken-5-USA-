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

// Function: sub_00307C10
// Address: 0x307c10 - 0x308060
void sub_00307C10_0x307c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307C10_0x307c10");
#endif

    switch (ctx->pc) {
        case 0x307c5cu: goto label_307c5c;
        case 0x307c9cu: goto label_307c9c;
        case 0x307cdcu: goto label_307cdc;
        case 0x307d1cu: goto label_307d1c;
        case 0x307d5cu: goto label_307d5c;
        case 0x307d9cu: goto label_307d9c;
        case 0x307ddcu: goto label_307ddc;
        case 0x307e1cu: goto label_307e1c;
        case 0x307e5cu: goto label_307e5c;
        case 0x307e9cu: goto label_307e9c;
        case 0x307edcu: goto label_307edc;
        case 0x307f1cu: goto label_307f1c;
        case 0x307f5cu: goto label_307f5c;
        case 0x307f9cu: goto label_307f9c;
        case 0x307fdcu: goto label_307fdc;
        case 0x30801cu: goto label_30801c;
        default: break;
    }

    ctx->pc = 0x307c10u;

    // 0x307c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307c14: 0x2486004c  addiu       $a2, $a0, 0x4C
    ctx->pc = 0x307c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x307c18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x307c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307c24: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x307c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x307c28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307C28u;
    {
        const bool branch_taken_0x307c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C28u;
        // 0x307c2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c28) {
            ctx->pc = 0x307C40u;
            goto label_307c40;
        }
    }
    ctx->pc = 0x307C30u;
    // 0x307c30: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x307c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x307c34: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x307c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x307c38: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307C38u;
    {
        const bool branch_taken_0x307c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C38u;
        // 0x307c3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c38) {
            ctx->pc = 0x307C4Cu;
            goto label_307c4c;
        }
    }
    ctx->pc = 0x307C40u;
label_307c40:
    // 0x307c40: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x307c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x307c44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x307c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c48: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x307c48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_307c4c:
    // 0x307c4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x307c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c54: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307C54u;
    SET_GPR_U32(ctx, 31, 0x307C5Cu);
    ctx->pc = 0x307C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C54u;
    // 0x307c58: 0x24a52818  addiu       $a1, $a1, 0x2818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307C54u, 0x307C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C5Cu;
label_307c5c:
    // 0x307c5c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307C5Cu;
    {
        const bool branch_taken_0x307c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c5c) {
            ctx->pc = 0x307C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C5Cu;
            // 0x307c60: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C90u;
            goto label_307c90;
        }
    }
    ctx->pc = 0x307C64u;
    // 0x307c64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307c68: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307C68u;
    {
        const bool branch_taken_0x307c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c68) {
            ctx->pc = 0x307C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C68u;
            // 0x307c6c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C90u;
            goto label_307c90;
        }
    }
    ctx->pc = 0x307C70u;
    // 0x307c70: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307C70u;
    {
        const bool branch_taken_0x307c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C70u;
        // 0x307c74: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c70) {
            ctx->pc = 0x307C80u;
            goto label_307c80;
        }
    }
    ctx->pc = 0x307C78u;
    // 0x307c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307C78u;
    {
        const bool branch_taken_0x307c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C78u;
        // 0x307c7c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c78) {
            ctx->pc = 0x307C88u;
            goto label_307c88;
        }
    }
    ctx->pc = 0x307C80u;
label_307c80:
    // 0x307c80: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307c84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307c88:
    // 0x307c88: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307c8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307c90:
    // 0x307c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c94: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307C94u;
    SET_GPR_U32(ctx, 31, 0x307C9Cu);
    ctx->pc = 0x307C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C94u;
    // 0x307c98: 0x24a52828  addiu       $a1, $a1, 0x2828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307C94u, 0x307C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C9Cu;
label_307c9c:
    // 0x307c9c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307C9Cu;
    {
        const bool branch_taken_0x307c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c9c) {
            ctx->pc = 0x307CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C9Cu;
            // 0x307ca0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307CD0u;
            goto label_307cd0;
        }
    }
    ctx->pc = 0x307CA4u;
    // 0x307ca4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307ca8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307CA8u;
    {
        const bool branch_taken_0x307ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ca8) {
            ctx->pc = 0x307CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307CA8u;
            // 0x307cac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307CD0u;
            goto label_307cd0;
        }
    }
    ctx->pc = 0x307CB0u;
    // 0x307cb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307CB0u;
    {
        const bool branch_taken_0x307cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CB0u;
        // 0x307cb4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307cb0) {
            ctx->pc = 0x307CC0u;
            goto label_307cc0;
        }
    }
    ctx->pc = 0x307CB8u;
    // 0x307cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307CB8u;
    {
        const bool branch_taken_0x307cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CB8u;
        // 0x307cbc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307cb8) {
            ctx->pc = 0x307CC8u;
            goto label_307cc8;
        }
    }
    ctx->pc = 0x307CC0u;
label_307cc0:
    // 0x307cc0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307cc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307cc8:
    // 0x307cc8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307ccc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307cd0:
    // 0x307cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cd4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307CD4u;
    SET_GPR_U32(ctx, 31, 0x307CDCu);
    ctx->pc = 0x307CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CD4u;
    // 0x307cd8: 0x24a52838  addiu       $a1, $a1, 0x2838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307CD4u, 0x307CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CDCu;
label_307cdc:
    // 0x307cdc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307CDCu;
    {
        const bool branch_taken_0x307cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307cdc) {
            ctx->pc = 0x307CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307CDCu;
            // 0x307ce0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307CE4u;
    // 0x307ce4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307ce8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307CE8u;
    {
        const bool branch_taken_0x307ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ce8) {
            ctx->pc = 0x307CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307CE8u;
            // 0x307cec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D10u;
            goto label_307d10;
        }
    }
    ctx->pc = 0x307CF0u;
    // 0x307cf0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307CF0u;
    {
        const bool branch_taken_0x307cf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CF0u;
        // 0x307cf4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307cf0) {
            ctx->pc = 0x307D00u;
            goto label_307d00;
        }
    }
    ctx->pc = 0x307CF8u;
    // 0x307cf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307CF8u;
    {
        const bool branch_taken_0x307cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CF8u;
        // 0x307cfc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307cf8) {
            ctx->pc = 0x307D08u;
            goto label_307d08;
        }
    }
    ctx->pc = 0x307D00u;
label_307d00:
    // 0x307d00: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307d04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307d08:
    // 0x307d08: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307d0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307d10:
    // 0x307d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d14: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307D14u;
    SET_GPR_U32(ctx, 31, 0x307D1Cu);
    ctx->pc = 0x307D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D14u;
    // 0x307d18: 0x24a52848  addiu       $a1, $a1, 0x2848 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307D14u, 0x307D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D1Cu;
label_307d1c:
    // 0x307d1c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307D1Cu;
    {
        const bool branch_taken_0x307d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d1c) {
            ctx->pc = 0x307D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D1Cu;
            // 0x307d20: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D50u;
            goto label_307d50;
        }
    }
    ctx->pc = 0x307D24u;
    // 0x307d24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307d28: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307D28u;
    {
        const bool branch_taken_0x307d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d28) {
            ctx->pc = 0x307D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D28u;
            // 0x307d2c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D50u;
            goto label_307d50;
        }
    }
    ctx->pc = 0x307D30u;
    // 0x307d30: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307D30u;
    {
        const bool branch_taken_0x307d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D30u;
        // 0x307d34: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d30) {
            ctx->pc = 0x307D40u;
            goto label_307d40;
        }
    }
    ctx->pc = 0x307D38u;
    // 0x307d38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307D38u;
    {
        const bool branch_taken_0x307d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D38u;
        // 0x307d3c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d38) {
            ctx->pc = 0x307D48u;
            goto label_307d48;
        }
    }
    ctx->pc = 0x307D40u;
label_307d40:
    // 0x307d40: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307d44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307d48:
    // 0x307d48: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307d4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307d50:
    // 0x307d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d54: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307D54u;
    SET_GPR_U32(ctx, 31, 0x307D5Cu);
    ctx->pc = 0x307D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D54u;
    // 0x307d58: 0x24a52858  addiu       $a1, $a1, 0x2858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307D54u, 0x307D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D5Cu;
label_307d5c:
    // 0x307d5c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307D5Cu;
    {
        const bool branch_taken_0x307d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d5c) {
            ctx->pc = 0x307D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D5Cu;
            // 0x307d60: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D90u;
            goto label_307d90;
        }
    }
    ctx->pc = 0x307D64u;
    // 0x307d64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307d68: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307D68u;
    {
        const bool branch_taken_0x307d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d68) {
            ctx->pc = 0x307D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D68u;
            // 0x307d6c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307D90u;
            goto label_307d90;
        }
    }
    ctx->pc = 0x307D70u;
    // 0x307d70: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307D70u;
    {
        const bool branch_taken_0x307d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D70u;
        // 0x307d74: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d70) {
            ctx->pc = 0x307D80u;
            goto label_307d80;
        }
    }
    ctx->pc = 0x307D78u;
    // 0x307d78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307D78u;
    {
        const bool branch_taken_0x307d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D78u;
        // 0x307d7c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d78) {
            ctx->pc = 0x307D88u;
            goto label_307d88;
        }
    }
    ctx->pc = 0x307D80u;
label_307d80:
    // 0x307d80: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307d84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307d88:
    // 0x307d88: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307d8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307d90:
    // 0x307d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307d94: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307D94u;
    SET_GPR_U32(ctx, 31, 0x307D9Cu);
    ctx->pc = 0x307D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D94u;
    // 0x307d98: 0x24a52868  addiu       $a1, $a1, 0x2868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307D94u, 0x307D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D9Cu;
label_307d9c:
    // 0x307d9c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307D9Cu;
    {
        const bool branch_taken_0x307d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d9c) {
            ctx->pc = 0x307DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307D9Cu;
            // 0x307da0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307DD0u;
            goto label_307dd0;
        }
    }
    ctx->pc = 0x307DA4u;
    // 0x307da4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307da8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307DA8u;
    {
        const bool branch_taken_0x307da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307da8) {
            ctx->pc = 0x307DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307DA8u;
            // 0x307dac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307DD0u;
            goto label_307dd0;
        }
    }
    ctx->pc = 0x307DB0u;
    // 0x307db0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307DB0u;
    {
        const bool branch_taken_0x307db0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DB0u;
        // 0x307db4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307db0) {
            ctx->pc = 0x307DC0u;
            goto label_307dc0;
        }
    }
    ctx->pc = 0x307DB8u;
    // 0x307db8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307DB8u;
    {
        const bool branch_taken_0x307db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DB8u;
        // 0x307dbc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307db8) {
            ctx->pc = 0x307DC8u;
            goto label_307dc8;
        }
    }
    ctx->pc = 0x307DC0u;
label_307dc0:
    // 0x307dc0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307dc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307dc8:
    // 0x307dc8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307dcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307dd0:
    // 0x307dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307dd4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307DD4u;
    SET_GPR_U32(ctx, 31, 0x307DDCu);
    ctx->pc = 0x307DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DD4u;
    // 0x307dd8: 0x24a52878  addiu       $a1, $a1, 0x2878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307DD4u, 0x307DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DDCu;
label_307ddc:
    // 0x307ddc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307DDCu;
    {
        const bool branch_taken_0x307ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ddc) {
            ctx->pc = 0x307DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307DDCu;
            // 0x307de0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E10u;
            goto label_307e10;
        }
    }
    ctx->pc = 0x307DE4u;
    // 0x307de4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307de8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307DE8u;
    {
        const bool branch_taken_0x307de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307de8) {
            ctx->pc = 0x307DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307DE8u;
            // 0x307dec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E10u;
            goto label_307e10;
        }
    }
    ctx->pc = 0x307DF0u;
    // 0x307df0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307DF0u;
    {
        const bool branch_taken_0x307df0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DF0u;
        // 0x307df4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307df0) {
            ctx->pc = 0x307E00u;
            goto label_307e00;
        }
    }
    ctx->pc = 0x307DF8u;
    // 0x307df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307DF8u;
    {
        const bool branch_taken_0x307df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DF8u;
        // 0x307dfc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307df8) {
            ctx->pc = 0x307E08u;
            goto label_307e08;
        }
    }
    ctx->pc = 0x307E00u;
label_307e00:
    // 0x307e00: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307e04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307e08:
    // 0x307e08: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307e0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307e10:
    // 0x307e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e14: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307E14u;
    SET_GPR_U32(ctx, 31, 0x307E1Cu);
    ctx->pc = 0x307E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E14u;
    // 0x307e18: 0x24a52888  addiu       $a1, $a1, 0x2888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307E14u, 0x307E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E1Cu;
label_307e1c:
    // 0x307e1c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307E1Cu;
    {
        const bool branch_taken_0x307e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e1c) {
            ctx->pc = 0x307E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E1Cu;
            // 0x307e20: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E50u;
            goto label_307e50;
        }
    }
    ctx->pc = 0x307E24u;
    // 0x307e24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307e28: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307E28u;
    {
        const bool branch_taken_0x307e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e28) {
            ctx->pc = 0x307E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E28u;
            // 0x307e2c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E50u;
            goto label_307e50;
        }
    }
    ctx->pc = 0x307E30u;
    // 0x307e30: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307E30u;
    {
        const bool branch_taken_0x307e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E30u;
        // 0x307e34: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e30) {
            ctx->pc = 0x307E40u;
            goto label_307e40;
        }
    }
    ctx->pc = 0x307E38u;
    // 0x307e38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307E38u;
    {
        const bool branch_taken_0x307e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E38u;
        // 0x307e3c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e38) {
            ctx->pc = 0x307E48u;
            goto label_307e48;
        }
    }
    ctx->pc = 0x307E40u;
label_307e40:
    // 0x307e40: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307e44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307e48:
    // 0x307e48: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307e4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307e50:
    // 0x307e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e54: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307E54u;
    SET_GPR_U32(ctx, 31, 0x307E5Cu);
    ctx->pc = 0x307E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E54u;
    // 0x307e58: 0x24a52898  addiu       $a1, $a1, 0x2898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307E54u, 0x307E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E5Cu;
label_307e5c:
    // 0x307e5c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307E5Cu;
    {
        const bool branch_taken_0x307e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e5c) {
            ctx->pc = 0x307E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E5Cu;
            // 0x307e60: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E90u;
            goto label_307e90;
        }
    }
    ctx->pc = 0x307E64u;
    // 0x307e64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307e68: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307E68u;
    {
        const bool branch_taken_0x307e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e68) {
            ctx->pc = 0x307E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E68u;
            // 0x307e6c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307E90u;
            goto label_307e90;
        }
    }
    ctx->pc = 0x307E70u;
    // 0x307e70: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307E70u;
    {
        const bool branch_taken_0x307e70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E70u;
        // 0x307e74: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e70) {
            ctx->pc = 0x307E80u;
            goto label_307e80;
        }
    }
    ctx->pc = 0x307E78u;
    // 0x307e78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307E78u;
    {
        const bool branch_taken_0x307e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E78u;
        // 0x307e7c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e78) {
            ctx->pc = 0x307E88u;
            goto label_307e88;
        }
    }
    ctx->pc = 0x307E80u;
label_307e80:
    // 0x307e80: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307e84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307e88:
    // 0x307e88: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307e8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307e90:
    // 0x307e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e94: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307E94u;
    SET_GPR_U32(ctx, 31, 0x307E9Cu);
    ctx->pc = 0x307E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E94u;
    // 0x307e98: 0x24a528a8  addiu       $a1, $a1, 0x28A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307E94u, 0x307E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E9Cu;
label_307e9c:
    // 0x307e9c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307E9Cu;
    {
        const bool branch_taken_0x307e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307e9c) {
            ctx->pc = 0x307EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307E9Cu;
            // 0x307ea0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307ED0u;
            goto label_307ed0;
        }
    }
    ctx->pc = 0x307EA4u;
    // 0x307ea4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307ea8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307EA8u;
    {
        const bool branch_taken_0x307ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ea8) {
            ctx->pc = 0x307EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307EA8u;
            // 0x307eac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307ED0u;
            goto label_307ed0;
        }
    }
    ctx->pc = 0x307EB0u;
    // 0x307eb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307EB0u;
    {
        const bool branch_taken_0x307eb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EB0u;
        // 0x307eb4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307eb0) {
            ctx->pc = 0x307EC0u;
            goto label_307ec0;
        }
    }
    ctx->pc = 0x307EB8u;
    // 0x307eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307EB8u;
    {
        const bool branch_taken_0x307eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EB8u;
        // 0x307ebc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307eb8) {
            ctx->pc = 0x307EC8u;
            goto label_307ec8;
        }
    }
    ctx->pc = 0x307EC0u;
label_307ec0:
    // 0x307ec0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307ec4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307ec8:
    // 0x307ec8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307ecc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307ed0:
    // 0x307ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ed4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307ED4u;
    SET_GPR_U32(ctx, 31, 0x307EDCu);
    ctx->pc = 0x307ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307ED4u;
    // 0x307ed8: 0x24a528b8  addiu       $a1, $a1, 0x28B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307ED4u, 0x307EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EDCu;
label_307edc:
    // 0x307edc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307EDCu;
    {
        const bool branch_taken_0x307edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307edc) {
            ctx->pc = 0x307EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307EDCu;
            // 0x307ee0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F10u;
            goto label_307f10;
        }
    }
    ctx->pc = 0x307EE4u;
    // 0x307ee4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307ee8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307EE8u;
    {
        const bool branch_taken_0x307ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ee8) {
            ctx->pc = 0x307EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307EE8u;
            // 0x307eec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F10u;
            goto label_307f10;
        }
    }
    ctx->pc = 0x307EF0u;
    // 0x307ef0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307EF0u;
    {
        const bool branch_taken_0x307ef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EF0u;
        // 0x307ef4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ef0) {
            ctx->pc = 0x307F00u;
            goto label_307f00;
        }
    }
    ctx->pc = 0x307EF8u;
    // 0x307ef8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307EF8u;
    {
        const bool branch_taken_0x307ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EF8u;
        // 0x307efc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ef8) {
            ctx->pc = 0x307F08u;
            goto label_307f08;
        }
    }
    ctx->pc = 0x307F00u;
label_307f00:
    // 0x307f00: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307f04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307f08:
    // 0x307f08: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307f0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307f10:
    // 0x307f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f14: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307F14u;
    SET_GPR_U32(ctx, 31, 0x307F1Cu);
    ctx->pc = 0x307F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F14u;
    // 0x307f18: 0x24a528c8  addiu       $a1, $a1, 0x28C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307F14u, 0x307F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F1Cu;
label_307f1c:
    // 0x307f1c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307F1Cu;
    {
        const bool branch_taken_0x307f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f1c) {
            ctx->pc = 0x307F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F1Cu;
            // 0x307f20: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F50u;
            goto label_307f50;
        }
    }
    ctx->pc = 0x307F24u;
    // 0x307f24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307f28: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307F28u;
    {
        const bool branch_taken_0x307f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f28) {
            ctx->pc = 0x307F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F28u;
            // 0x307f2c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F50u;
            goto label_307f50;
        }
    }
    ctx->pc = 0x307F30u;
    // 0x307f30: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307F30u;
    {
        const bool branch_taken_0x307f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F30u;
        // 0x307f34: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f30) {
            ctx->pc = 0x307F40u;
            goto label_307f40;
        }
    }
    ctx->pc = 0x307F38u;
    // 0x307f38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307F38u;
    {
        const bool branch_taken_0x307f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F38u;
        // 0x307f3c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f38) {
            ctx->pc = 0x307F48u;
            goto label_307f48;
        }
    }
    ctx->pc = 0x307F40u;
label_307f40:
    // 0x307f40: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307f44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307f48:
    // 0x307f48: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307f4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307f50:
    // 0x307f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f54: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307F54u;
    SET_GPR_U32(ctx, 31, 0x307F5Cu);
    ctx->pc = 0x307F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F54u;
    // 0x307f58: 0x24a528d8  addiu       $a1, $a1, 0x28D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307F54u, 0x307F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F5Cu;
label_307f5c:
    // 0x307f5c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307F5Cu;
    {
        const bool branch_taken_0x307f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f5c) {
            ctx->pc = 0x307F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F5Cu;
            // 0x307f60: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F90u;
            goto label_307f90;
        }
    }
    ctx->pc = 0x307F64u;
    // 0x307f64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307f68: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307F68u;
    {
        const bool branch_taken_0x307f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f68) {
            ctx->pc = 0x307F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F68u;
            // 0x307f6c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307F90u;
            goto label_307f90;
        }
    }
    ctx->pc = 0x307F70u;
    // 0x307f70: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307F70u;
    {
        const bool branch_taken_0x307f70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F70u;
        // 0x307f74: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f70) {
            ctx->pc = 0x307F80u;
            goto label_307f80;
        }
    }
    ctx->pc = 0x307F78u;
    // 0x307f78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307F78u;
    {
        const bool branch_taken_0x307f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F78u;
        // 0x307f7c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f78) {
            ctx->pc = 0x307F88u;
            goto label_307f88;
        }
    }
    ctx->pc = 0x307F80u;
label_307f80:
    // 0x307f80: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307f88:
    // 0x307f88: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307f8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307f90:
    // 0x307f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307f94: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307F94u;
    SET_GPR_U32(ctx, 31, 0x307F9Cu);
    ctx->pc = 0x307F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F94u;
    // 0x307f98: 0x24a528e8  addiu       $a1, $a1, 0x28E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307F94u, 0x307F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F9Cu;
label_307f9c:
    // 0x307f9c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307F9Cu;
    {
        const bool branch_taken_0x307f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f9c) {
            ctx->pc = 0x307FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F9Cu;
            // 0x307fa0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307FD0u;
            goto label_307fd0;
        }
    }
    ctx->pc = 0x307FA4u;
    // 0x307fa4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307fa8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307FA8u;
    {
        const bool branch_taken_0x307fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307fa8) {
            ctx->pc = 0x307FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307FA8u;
            // 0x307fac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307FD0u;
            goto label_307fd0;
        }
    }
    ctx->pc = 0x307FB0u;
    // 0x307fb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307FB0u;
    {
        const bool branch_taken_0x307fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FB0u;
        // 0x307fb4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fb0) {
            ctx->pc = 0x307FC0u;
            goto label_307fc0;
        }
    }
    ctx->pc = 0x307FB8u;
    // 0x307fb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307FB8u;
    {
        const bool branch_taken_0x307fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FB8u;
        // 0x307fbc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fb8) {
            ctx->pc = 0x307FC8u;
            goto label_307fc8;
        }
    }
    ctx->pc = 0x307FC0u;
label_307fc0:
    // 0x307fc0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x307fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x307fc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x307fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_307fc8:
    // 0x307fc8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x307fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x307fcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x307fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_307fd0:
    // 0x307fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307fd4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x307FD4u;
    SET_GPR_U32(ctx, 31, 0x307FDCu);
    ctx->pc = 0x307FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FD4u;
    // 0x307fd8: 0x24a528f8  addiu       $a1, $a1, 0x28F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x307FD4u, 0x307FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FDCu;
label_307fdc:
    // 0x307fdc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307FDCu;
    {
        const bool branch_taken_0x307fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307fdc) {
            ctx->pc = 0x307FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307FDCu;
            // 0x307fe0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308010u;
            goto label_308010;
        }
    }
    ctx->pc = 0x307FE4u;
    // 0x307fe4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x307fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x307fe8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307FE8u;
    {
        const bool branch_taken_0x307fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307fe8) {
            ctx->pc = 0x307FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307FE8u;
            // 0x307fec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308010u;
            goto label_308010;
        }
    }
    ctx->pc = 0x307FF0u;
    // 0x307ff0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307FF0u;
    {
        const bool branch_taken_0x307ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FF0u;
        // 0x307ff4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ff0) {
            ctx->pc = 0x308000u;
            goto label_308000;
        }
    }
    ctx->pc = 0x307FF8u;
    // 0x307ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307FF8u;
    {
        const bool branch_taken_0x307ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FF8u;
        // 0x307ffc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ff8) {
            ctx->pc = 0x308008u;
            goto label_308008;
        }
    }
    ctx->pc = 0x308000u;
label_308000:
    // 0x308000: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x308000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x308004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_308008:
    // 0x308008: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x308008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x30800c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30800cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_308010:
    // 0x308010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308014: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308014u;
    SET_GPR_U32(ctx, 31, 0x30801Cu);
    ctx->pc = 0x308018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308014u;
    // 0x308018: 0x24a52908  addiu       $a1, $a1, 0x2908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308014u, 0x30801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30801Cu;
label_30801c:
    // 0x30801c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30801Cu;
    {
        const bool branch_taken_0x30801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30801Cu;
        // 0x308020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30801c) {
            ctx->pc = 0x308050u;
            goto label_308050;
        }
    }
    ctx->pc = 0x308024u;
    // 0x308024: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308028: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x308028u;
    {
        const bool branch_taken_0x308028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308028) {
            ctx->pc = 0x30802Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308028u;
            // 0x30802c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308054u;
            goto label_308054;
        }
    }
    ctx->pc = 0x308030u;
    // 0x308030: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308030u;
    {
        const bool branch_taken_0x308030 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308030u;
        // 0x308034: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308030) {
            ctx->pc = 0x308040u;
            goto label_308040;
        }
    }
    ctx->pc = 0x308038u;
    // 0x308038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x308038u;
    {
        const bool branch_taken_0x308038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308038u;
        // 0x30803c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308038) {
            ctx->pc = 0x308048u;
            goto label_308048;
        }
    }
    ctx->pc = 0x308040u;
label_308040:
    // 0x308040: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x308040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x308044: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_308048:
    // 0x308048: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x308048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x30804c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30804cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308050:
    // 0x308050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308054:
    // 0x308054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308058: 0x3e00008  jr          $ra
    ctx->pc = 0x308058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308058u;
        // 0x30805c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308060u;
}
