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

// Function: sub_0025BEC8
// Address: 0x25bec8 - 0x25c198
void sub_0025BEC8_0x25bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BEC8_0x25bec8");
#endif

    switch (ctx->pc) {
        case 0x25bf8cu: goto label_25bf8c;
        case 0x25bf98u: goto label_25bf98;
        case 0x25c008u: goto label_25c008;
        case 0x25c0a4u: goto label_25c0a4;
        case 0x25c0c4u: goto label_25c0c4;
        case 0x25c0d0u: goto label_25c0d0;
        case 0x25c0fcu: goto label_25c0fc;
        case 0x25c108u: goto label_25c108;
        case 0x25c120u: goto label_25c120;
        case 0x25c150u: goto label_25c150;
        default: break;
    }

    ctx->pc = 0x25bec8u;

    // 0x25bec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25becc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25bed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25bed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25bedc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25bee0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x25bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25bee4: 0x8e0a07c8  lw          $t2, 0x7C8($s0)
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x25bee8: 0x1142001f  beq         $t2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25BEE8u;
    {
        const bool branch_taken_0x25bee8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEE8u;
        // 0x25beec: 0x29420003  slti        $v0, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bee8) {
            ctx->pc = 0x25BF68u;
            goto label_25bf68;
        }
    }
    ctx->pc = 0x25BEF0u;
    // 0x25bef0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BEF0u;
    {
        const bool branch_taken_0x25bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEF0u;
        // 0x25bef4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bef0) {
            ctx->pc = 0x25BF10u;
            goto label_25bf10;
        }
    }
    ctx->pc = 0x25BEF8u;
    // 0x25bef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25befc: 0x51420008  beql        $t2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25BEFCu;
    {
        const bool branch_taken_0x25befc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x25befc) {
            ctx->pc = 0x25BF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BEFCu;
            // 0x25bf00: 0x8e0707c0  lw          $a3, 0x7C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BF20u;
            goto label_25bf20;
        }
    }
    ctx->pc = 0x25BF04u;
    // 0x25bf04: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x25BF04u;
    {
        const bool branch_taken_0x25bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF04u;
        // 0x25bf08: 0x8e040898  lw          $a0, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf04) {
            ctx->pc = 0x25C030u;
            goto label_25c030;
        }
    }
    ctx->pc = 0x25BF0Cu;
    // 0x25bf0c: 0x0  nop
    ctx->pc = 0x25bf0cu;
    // NOP
label_25bf10:
    // 0x25bf10: 0x51420035  beql        $t2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25BF10u;
    {
        const bool branch_taken_0x25bf10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x25bf10) {
            ctx->pc = 0x25BF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF10u;
            // 0x25bf14: 0x8e0600c4  lw          $a2, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFE8u;
            goto label_25bfe8;
        }
    }
    ctx->pc = 0x25BF18u;
    // 0x25bf18: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x25BF18u;
    {
        const bool branch_taken_0x25bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF18u;
        // 0x25bf1c: 0x8e040898  lw          $a0, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf18) {
            ctx->pc = 0x25C030u;
            goto label_25c030;
        }
    }
    ctx->pc = 0x25BF20u;
label_25bf20:
    // 0x25bf20: 0x8e0807c4  lw          $t0, 0x7C4($s0)
    ctx->pc = 0x25bf20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1988)));
    // 0x25bf24: 0x86020098  lh          $v0, 0x98($s0)
    ctx->pc = 0x25bf24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x25bf28: 0x24e9ffff  addiu       $t1, $a3, -0x1
    ctx->pc = 0x25bf28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x25bf2c: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x25bf2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x25bf30: 0x2506f000  addiu       $a2, $t0, -0x1000
    ctx->pc = 0x25bf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963200));
    // 0x25bf34: 0x8e0407d4  lw          $a0, 0x7D4($s0)
    ctx->pc = 0x25bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2004)));
    // 0x25bf38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25bf3c: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x25bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x25bf40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25bf44: 0xae040808  sw          $a0, 0x808($s0)
    ctx->pc = 0x25bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 4));
    // 0x25bf48: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x25bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
    // 0x25bf4c: 0xae05080c  sw          $a1, 0x80C($s0)
    ctx->pc = 0x25bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 5));
    // 0x25bf50: 0xae030814  sw          $v1, 0x814($s0)
    ctx->pc = 0x25bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 3));
    // 0x25bf54: 0xae090800  sw          $t1, 0x800($s0)
    ctx->pc = 0x25bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 9));
    // 0x25bf58: 0xae060804  sw          $a2, 0x804($s0)
    ctx->pc = 0x25bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2052), GPR_U32(ctx, 6));
    // 0x25bf5c: 0xae0707f8  sw          $a3, 0x7F8($s0)
    ctx->pc = 0x25bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2040), GPR_U32(ctx, 7));
    // 0x25bf60: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x25BF60u;
    {
        const bool branch_taken_0x25bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF60u;
        // 0x25bf64: 0xae0807fc  sw          $t0, 0x7FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2044), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf60) {
            ctx->pc = 0x25C02Cu;
            goto label_25c02c;
        }
    }
    ctx->pc = 0x25BF68u;
label_25bf68:
    // 0x25bf68: 0x8e0700c8  lw          $a3, 0xC8($s0)
    ctx->pc = 0x25bf68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x25bf6c: 0x54e0000e  bnel        $a3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x25BF6Cu;
    {
        const bool branch_taken_0x25bf6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bf6c) {
            ctx->pc = 0x25BF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF6Cu;
            // 0x25bf70: 0x8e0507c0  lw          $a1, 0x7C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFA8u;
            goto label_25bfa8;
        }
    }
    ctx->pc = 0x25BF74u;
    // 0x25bf74: 0x860302fe  lh          $v1, 0x2FE($s0)
    ctx->pc = 0x25bf74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x25bf78: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x25bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x25bf7c: 0xae030810  sw          $v1, 0x810($s0)
    ctx->pc = 0x25bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 3));
    // 0x25bf80: 0x96050304  lhu         $a1, 0x304($s0)
    ctx->pc = 0x25bf80u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25bf84: 0xc09905e  jal         func_264178
    ctx->pc = 0x25BF84u;
    SET_GPR_U32(ctx, 31, 0x25BF8Cu);
    ctx->pc = 0x25BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF84u;
    // 0x25bf88: 0xae020808  sw          $v0, 0x808($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x25BF84u, 0x25BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF8Cu;
label_25bf8c:
    // 0x25bf8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf90: 0xc09fa66  jal         func_27E998
    ctx->pc = 0x25BF90u;
    SET_GPR_U32(ctx, 31, 0x25BF98u);
    ctx->pc = 0x25BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF90u;
    // 0x25bf94: 0xae02080c  sw          $v0, 0x80C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E998u, 0x25BF90u, 0x25BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF98u;
label_25bf98:
    // 0x25bf98: 0x8e0307c0  lw          $v1, 0x7C0($s0)
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x25bf9c: 0x8e0407c4  lw          $a0, 0x7C4($s0)
    ctx->pc = 0x25bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1988)));
    // 0x25bfa0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25BFA0u;
    {
        const bool branch_taken_0x25bfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFA0u;
        // 0x25bfa4: 0xae020814  sw          $v0, 0x814($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfa0) {
            ctx->pc = 0x25C018u;
            goto label_25c018;
        }
    }
    ctx->pc = 0x25BFA8u;
label_25bfa8:
    // 0x25bfa8: 0x92020195  lbu         $v0, 0x195($s0)
    ctx->pc = 0x25bfa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
    // 0x25bfac: 0x92030193  lbu         $v1, 0x193($s0)
    ctx->pc = 0x25bfacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 403)));
    // 0x25bfb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25bfb4: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x25bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x25bfb8: 0x8e0607c4  lw          $a2, 0x7C4($s0)
    ctx->pc = 0x25bfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1988)));
    // 0x25bfbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25bfc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25bfc4: 0xae040808  sw          $a0, 0x808($s0)
    ctx->pc = 0x25bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 4));
    // 0x25bfc8: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x25bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
    // 0x25bfcc: 0xae07080c  sw          $a3, 0x80C($s0)
    ctx->pc = 0x25bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 7));
    // 0x25bfd0: 0xae030814  sw          $v1, 0x814($s0)
    ctx->pc = 0x25bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 3));
    // 0x25bfd4: 0xae0507f8  sw          $a1, 0x7F8($s0)
    ctx->pc = 0x25bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2040), GPR_U32(ctx, 5));
    // 0x25bfd8: 0xae0607fc  sw          $a2, 0x7FC($s0)
    ctx->pc = 0x25bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2044), GPR_U32(ctx, 6));
    // 0x25bfdc: 0xae000800  sw          $zero, 0x800($s0)
    ctx->pc = 0x25bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 0));
    // 0x25bfe0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25BFE0u;
    {
        const bool branch_taken_0x25bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFE0u;
        // 0x25bfe4: 0xae000804  sw          $zero, 0x804($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfe0) {
            ctx->pc = 0x25C02Cu;
            goto label_25c02c;
        }
    }
    ctx->pc = 0x25BFE8u;
label_25bfe8:
    // 0x25bfe8: 0x86020146  lh          $v0, 0x146($s0)
    ctx->pc = 0x25bfe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x25bfec: 0x94c30024  lhu         $v1, 0x24($a2)
    ctx->pc = 0x25bfecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x25bff0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x25bff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25bff4: 0xae060808  sw          $a2, 0x808($s0)
    ctx->pc = 0x25bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 6));
    // 0x25bff8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x25bff8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x25bffc: 0xae030810  sw          $v1, 0x810($s0)
    ctx->pc = 0x25bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 3));
    // 0x25c000: 0xc09905e  jal         func_264178
    ctx->pc = 0x25C000u;
    SET_GPR_U32(ctx, 31, 0x25C008u);
    ctx->pc = 0x25C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C000u;
    // 0x25c004: 0x94c50018  lhu         $a1, 0x18($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x25C000u, 0x25C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C008u;
label_25c008:
    // 0x25c008: 0xae000814  sw          $zero, 0x814($s0)
    ctx->pc = 0x25c008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 0));
    // 0x25c00c: 0x8e0307c0  lw          $v1, 0x7C0($s0)
    ctx->pc = 0x25c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x25c010: 0x8e0407c4  lw          $a0, 0x7C4($s0)
    ctx->pc = 0x25c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1988)));
    // 0x25c014: 0xae02080c  sw          $v0, 0x80C($s0)
    ctx->pc = 0x25c014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 2));
label_25c018:
    // 0x25c018: 0xae0307f8  sw          $v1, 0x7F8($s0)
    ctx->pc = 0x25c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2040), GPR_U32(ctx, 3));
    // 0x25c01c: 0xae0407fc  sw          $a0, 0x7FC($s0)
    ctx->pc = 0x25c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2044), GPR_U32(ctx, 4));
    // 0x25c020: 0xae000800  sw          $zero, 0x800($s0)
    ctx->pc = 0x25c020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 0));
    // 0x25c024: 0xae000804  sw          $zero, 0x804($s0)
    ctx->pc = 0x25c024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2052), GPR_U32(ctx, 0));
    // 0x25c028: 0x8e0a07c8  lw          $t2, 0x7C8($s0)
    ctx->pc = 0x25c028u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
label_25c02c:
    // 0x25c02c: 0x8e040898  lw          $a0, 0x898($s0)
    ctx->pc = 0x25c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
label_25c030:
    // 0x25c030: 0x9483006c  lhu         $v1, 0x6C($a0)
    ctx->pc = 0x25c030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x25c034: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25c034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x25c038: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25C038u;
    {
        const bool branch_taken_0x25c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C038u;
        // 0x25c03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c038) {
            ctx->pc = 0x25C07Cu;
            goto label_25c07c;
        }
    }
    ctx->pc = 0x25C040u;
    // 0x25c040: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25c044: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25c048: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c04c: 0x8c632590  lw          $v1, 0x2590($v1)
    ctx->pc = 0x25c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9616)));
    // 0x25c050: 0x600008  jr          $v1
    ctx->pc = 0x25C050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C058u: goto label_25c058;
            case 0x25C060u: goto label_25c060;
            case 0x25C068u: goto label_25c068;
            case 0x25C070u: goto label_25c070;
            case 0x25C078u: goto label_25c078;
            case 0x25C07Cu: goto label_25c07c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C050u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25C058u;
label_25c058:
    // 0x25c058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C058u;
    {
        const bool branch_taken_0x25c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C058u;
        // 0x25c05c: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c058) {
            ctx->pc = 0x25C07Cu;
            goto label_25c07c;
        }
    }
    ctx->pc = 0x25C060u;
label_25c060:
    // 0x25c060: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C060u;
    {
        const bool branch_taken_0x25c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C060u;
        // 0x25c064: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c060) {
            ctx->pc = 0x25C07Cu;
            goto label_25c07c;
        }
    }
    ctx->pc = 0x25C068u;
label_25c068:
    // 0x25c068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C068u;
    {
        const bool branch_taken_0x25c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C068u;
        // 0x25c06c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c068) {
            ctx->pc = 0x25C07Cu;
            goto label_25c07c;
        }
    }
    ctx->pc = 0x25C070u;
label_25c070:
    // 0x25c070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25C070u;
    {
        const bool branch_taken_0x25c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C070u;
        // 0x25c074: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c070) {
            ctx->pc = 0x25C07Cu;
            goto label_25c07c;
        }
    }
    ctx->pc = 0x25C078u;
label_25c078:
    // 0x25c078: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25c078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25c07c:
    // 0x25c07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c080: 0x11420023  beq         $t2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x25C080u;
    {
        const bool branch_taken_0x25c080 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C080u;
        // 0x25c084: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c080) {
            ctx->pc = 0x25C110u;
            goto label_25c110;
        }
    }
    ctx->pc = 0x25C088u;
    // 0x25c088: 0x5940003d  blezl       $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x25C088u;
    {
        const bool branch_taken_0x25c088 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x25c088) {
            ctx->pc = 0x25C08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C088u;
            // 0x25c08c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C180u;
            goto label_25c180;
        }
    }
    ctx->pc = 0x25C090u;
    // 0x25c090: 0x29420004  slti        $v0, $t2, 0x4
    ctx->pc = 0x25c090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25c094: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x25C094u;
    {
        const bool branch_taken_0x25c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c094) {
            ctx->pc = 0x25C098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C094u;
            // 0x25c098: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C180u;
            goto label_25c180;
        }
    }
    ctx->pc = 0x25C09Cu;
    // 0x25c09c: 0xc0a04a8  jal         func_2812A0
    ctx->pc = 0x25C09Cu;
    SET_GPR_U32(ctx, 31, 0x25C0A4u);
    ctx->pc = 0x2812A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812A0u, 0x25C09Cu, 0x25C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0A4u;
label_25c0a4:
    // 0x25c0a4: 0xc60c0810  lwc1        $f12, 0x810($s0)
    ctx->pc = 0x25c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c0a8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25c0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25c0ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25c0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0b0: 0x8e020808  lw          $v0, 0x808($s0)
    ctx->pc = 0x25c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2056)));
    // 0x25c0b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25c0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25c0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0bc: 0xc0b1472  jal         func_2C51C8
    ctx->pc = 0x25C0BCu;
    SET_GPR_U32(ctx, 31, 0x25C0C4u);
    ctx->pc = 0x25C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0BCu;
    // 0x25c0c0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C51C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C51C8u, 0x25C0BCu, 0x25C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0C4u;
label_25c0c4:
    // 0x25c0c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0c8: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x25C0C8u;
    SET_GPR_U32(ctx, 31, 0x25C0D0u);
    ctx->pc = 0x25C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0C8u;
    // 0x25c0cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x25C0C8u, 0x25C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0D0u;
label_25c0d0:
    // 0x25c0d0: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x25c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x25c0d4: 0x8e03080c  lw          $v1, 0x80C($s0)
    ctx->pc = 0x25c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x25c0d8: 0xc60c0814  lwc1        $f12, 0x814($s0)
    ctx->pc = 0x25c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25c0dc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25c0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25c0e0: 0x8c510044  lw          $s1, 0x44($v0)
    ctx->pc = 0x25c0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x25c0e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25c0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0e8: 0x8c67003c  lw          $a3, 0x3C($v1)
    ctx->pc = 0x25c0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x25c0ec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x25c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25c0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25c0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0f4: 0xc0b1352  jal         func_2C4D48
    ctx->pc = 0x25C0F4u;
    SET_GPR_U32(ctx, 31, 0x25C0FCu);
    ctx->pc = 0x25C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0F4u;
    // 0x25c0f8: 0x73fc2  srl         $a3, $a3, 31 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D48u, 0x25C0F4u, 0x25C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0FCu;
label_25c0fc:
    // 0x25c0fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25c0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c100: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x25C100u;
    SET_GPR_U32(ctx, 31, 0x25C108u);
    ctx->pc = 0x25C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C100u;
    // 0x25c104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x25C100u, 0x25C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C108u;
label_25c108:
    // 0x25c108: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25C108u;
    {
        const bool branch_taken_0x25c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C108u;
        // 0x25c10c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c108) {
            ctx->pc = 0x25C170u;
            goto label_25c170;
        }
    }
    ctx->pc = 0x25C110u;
label_25c110:
    // 0x25c110: 0x4c2001b  bltzl       $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x25C110u;
    {
        const bool branch_taken_0x25c110 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x25c110) {
            ctx->pc = 0x25C114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C110u;
            // 0x25c114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C180u;
            goto label_25c180;
        }
    }
    ctx->pc = 0x25C118u;
    // 0x25c118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25C118u;
    {
        const bool branch_taken_0x25c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C118u;
        // 0x25c11c: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c118) {
            ctx->pc = 0x25C128u;
            goto label_25c128;
        }
    }
    ctx->pc = 0x25C120u;
label_25c120:
    // 0x25c120: 0x8e040898  lw          $a0, 0x898($s0)
    ctx->pc = 0x25c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x25c124: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x25c124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_25c128:
    // 0x25c128: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x25c128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x25c12c: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x25c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x25c130: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x25c130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x25c134: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25c134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25c138: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x25c138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c13c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25c140: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25C140u;
    {
        const bool branch_taken_0x25c140 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x25C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C140u;
        // 0x25c144: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c140) {
            ctx->pc = 0x25C120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c120;
        }
    }
    ctx->pc = 0x25C148u;
    // 0x25c148: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25C148u;
    {
        const bool branch_taken_0x25c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C148u;
        // 0x25c14c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c148) {
            ctx->pc = 0x25C180u;
            goto label_25c180;
        }
    }
    ctx->pc = 0x25C150u;
label_25c150:
    // 0x25c150: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25c150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25c154: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25c158: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25c15c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x25c15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c160: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25c164: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x25c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c168: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25c168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25c16c: 0xe46107e0  swc1        $f1, 0x7E0($v1)
    ctx->pc = 0x25c16cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2016), bits); }
label_25c170:
    // 0x25c170: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x25c170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25c174: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x25C174u;
    {
        const bool branch_taken_0x25c174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C174u;
        // 0x25c178: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c174) {
            ctx->pc = 0x25C150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c150;
        }
    }
    ctx->pc = 0x25C17Cu;
    // 0x25c17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25c17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c180:
    // 0x25c180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25c180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25c184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25c184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c188: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25c188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c18c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C18Cu;
        // 0x25c190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C194u;
    // 0x25c194: 0x0  nop
    ctx->pc = 0x25c194u;
    // NOP
    ctx->pc = 0x25c198u;
}
