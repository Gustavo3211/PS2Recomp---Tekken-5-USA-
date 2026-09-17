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

// Function: sub_004FACA8
// Address: 0x4faca8 - 0x4faf20
void sub_004FACA8_0x4faca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FACA8_0x4faca8");
#endif

    switch (ctx->pc) {
        case 0x4facc8u: goto label_4facc8;
        case 0x4facdcu: goto label_4facdc;
        case 0x4facf0u: goto label_4facf0;
        case 0x4facf8u: goto label_4facf8;
        case 0x4fad08u: goto label_4fad08;
        case 0x4fad10u: goto label_4fad10;
        case 0x4fad30u: goto label_4fad30;
        case 0x4fad6cu: goto label_4fad6c;
        case 0x4fad8cu: goto label_4fad8c;
        case 0x4fae18u: goto label_4fae18;
        case 0x4fae38u: goto label_4fae38;
        default: break;
    }

    ctx->pc = 0x4faca8u;

    // 0x4faca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4faca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4facac: 0x24062260  addiu       $a2, $zero, 0x2260
    ctx->pc = 0x4facacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8800));
    // 0x4facb0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4facb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4facb4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4facb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4facb8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4facb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4facbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4facbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4facc0: 0xc04a151  jal         func_128544
    ctx->pc = 0x4FACC0u;
    SET_GPR_U32(ctx, 31, 0x4FACC8u);
    ctx->pc = 0x4FACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FACC0u;
    // 0x4facc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x4FACC0u, 0x4FACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FACC8u;
label_4facc8:
    // 0x4facc8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4facc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4faccc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x4facccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x4facd0: 0x34840238  ori         $a0, $a0, 0x238
    ctx->pc = 0x4facd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)568);
    // 0x4facd4: 0xc042d06  jal         func_10B418
    ctx->pc = 0x4FACD4u;
    SET_GPR_U32(ctx, 31, 0x4FACDCu);
    ctx->pc = 0x4FACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FACD4u;
    // 0x4facd8: 0x34a50260  ori         $a1, $a1, 0x260 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)608);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0x4FACD4u, 0x4FACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FACDCu;
label_4facdc:
    // 0x4facdc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4facdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4face0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x4face0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x4face4: 0x34840248  ori         $a0, $a0, 0x248
    ctx->pc = 0x4face4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)584);
    // 0x4face8: 0xc042d06  jal         func_10B418
    ctx->pc = 0x4FACE8u;
    SET_GPR_U32(ctx, 31, 0x4FACF0u);
    ctx->pc = 0x4FACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FACE8u;
    // 0x4facec: 0x34a51260  ori         $a1, $a1, 0x1260 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0x4FACE8u, 0x4FACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FACF0u;
label_4facf0:
    // 0x4facf0: 0xc040718  jal         func_101C60
    ctx->pc = 0x4FACF0u;
    SET_GPR_U32(ctx, 31, 0x4FACF8u);
    ctx->pc = 0x4FACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FACF0u;
    // 0x4facf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C60u, 0x4FACF0u, 0x4FACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FACF8u;
label_4facf8:
    // 0x4facf8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4facf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4facfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4facfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fad00: 0xc0406a2  jal         func_101A88
    ctx->pc = 0x4FAD00u;
    SET_GPR_U32(ctx, 31, 0x4FAD08u);
    ctx->pc = 0x4FAD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAD00u;
    // 0x4fad04: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A88u, 0x4FAD00u, 0x4FAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAD08u;
label_4fad08:
    // 0x4fad08: 0xc040660  jal         func_101980
    ctx->pc = 0x4FAD08u;
    SET_GPR_U32(ctx, 31, 0x4FAD10u);
    ctx->pc = 0x4FAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAD08u;
    // 0x4fad0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101980u, 0x4FAD08u, 0x4FAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAD10u;
label_4fad10:
    // 0x4fad10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4fad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fad14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4fad14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4fad18: 0xac220230  sw          $v0, 0x230($at)
    ctx->pc = 0x4fad18u;
    runtime->Store32(rdram, ctx, 0x70000230u, GPR_U32(ctx, 2)); // MMIO: 0x70000230
    // 0x4fad1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4fad1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fad20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fad24: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x4fad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x4fad28: 0xc04098c  jal         func_102630
    ctx->pc = 0x4FAD28u;
    SET_GPR_U32(ctx, 31, 0x4FAD30u);
    ctx->pc = 0x4FAD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAD28u;
    // 0x4fad2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x4FAD28u, 0x4FAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAD30u;
label_4fad30:
    // 0x4fad30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4fad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4fad34: 0x8c625b00  lw          $v0, 0x5B00($v1)
    ctx->pc = 0x4fad34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x515B00u));
    // 0x4fad38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FAD38u;
    {
        const bool branch_taken_0x4fad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAD38u;
        // 0x4fad3c: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fad38) {
            ctx->pc = 0x4FAD48u;
            goto label_4fad48;
        }
    }
    ctx->pc = 0x4FAD40u;
    // 0x4fad40: 0x240202d0  addiu       $v0, $zero, 0x2D0
    ctx->pc = 0x4fad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x4fad44: 0xae22ce90  sw          $v0, -0x3170($s1)
    ctx->pc = 0x4fad44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954640), GPR_U32(ctx, 2));
label_4fad48:
    // 0x4fad48: 0x2630ce90  addiu       $s0, $s1, -0x3170
    ctx->pc = 0x4fad48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954640));
    // 0x4fad4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4fad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fad50: 0x28420281  slti        $v0, $v0, 0x281
    ctx->pc = 0x4fad50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x4fad54: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4FAD54u;
    {
        const bool branch_taken_0x4fad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAD54u;
        // 0x4fad58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fad54) {
            ctx->pc = 0x4FAE08u;
            goto label_4fae08;
        }
    }
    ctx->pc = 0x4FAD5Cu;
    // 0x4fad5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fad60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4fad60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fad64: 0xc04081c  jal         func_102070
    ctx->pc = 0x4FAD64u;
    SET_GPR_U32(ctx, 31, 0x4FAD6Cu);
    ctx->pc = 0x4FAD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAD64u;
    // 0x4fad68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102070u, 0x4FAD64u, 0x4FAD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAD6Cu;
label_4fad6c:
    // 0x4fad6c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4fad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4fad70: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4fad70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fad74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fad74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fad78: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4fad78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x4fad7c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4fad7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fad80: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x4fad80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x4fad84: 0xc0408ce  jal         func_102338
    ctx->pc = 0x4FAD84u;
    SET_GPR_U32(ctx, 31, 0x4FAD8Cu);
    ctx->pc = 0x4FAD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAD84u;
    // 0x4fad88: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102338u, 0x4FAD84u, 0x4FAD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAD8Cu;
label_4fad8c:
    // 0x4fad8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x4fad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x4fad90: 0x34420060  ori         $v0, $v0, 0x60
    ctx->pc = 0x4fad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x4fad94: 0x2408fe00  addiu       $t0, $zero, -0x200
    ctx->pc = 0x4fad94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x4fad98: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x4fad98u;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x70000060u));
    // 0x4fad9c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x4fad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x4fada0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x4fada0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x4fada4: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x4fada4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x4fada8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4fada8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4fadac: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x4fadacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
    // 0x4fadb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fadb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4fadb4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x4fadb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x4fadb8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x4fadb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x4fadbc: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x4fadbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x4fadc0: 0x34c60150  ori         $a2, $a2, 0x150
    ctx->pc = 0x4fadc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)336);
    // 0x4fadc4: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x4fadc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x4fadc8: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x4fadc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fadcc: 0x34e70160  ori         $a3, $a3, 0x160
    ctx->pc = 0x4fadccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)352);
    // 0x4fadd0: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4fadd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4fadd4: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4fadd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4fadd8: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x4fadd8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x4faddc: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x4faddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x4fade0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x4fade0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fade4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4fade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4fade8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4fade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4fadec: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4fadecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x4fadf0: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x4fadf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4fadf4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4fadf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4fadf8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fadf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4fadfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4FADFCu;
    {
        const bool branch_taken_0x4fadfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FADFCu;
        // 0x4fae00: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fadfc) {
            ctx->pc = 0x4FAE38u;
            goto label_4fae38;
        }
    }
    ctx->pc = 0x4FAE04u;
    // 0x4fae04: 0x0  nop
    ctx->pc = 0x4fae04u;
    // NOP
label_4fae08:
    // 0x4fae08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fae08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fae0c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x4fae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x4fae10: 0xc04081c  jal         func_102070
    ctx->pc = 0x4FAE10u;
    SET_GPR_U32(ctx, 31, 0x4FAE18u);
    ctx->pc = 0x4FAE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAE10u;
    // 0x4fae14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102070u, 0x4FAE10u, 0x4FAE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAE18u;
label_4fae18:
    // 0x4fae18: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4fae18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4fae1c: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4fae1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fae20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4fae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fae24: 0x240701e0  addiu       $a3, $zero, 0x1E0
    ctx->pc = 0x4fae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x4fae28: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x4fae28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fae2c: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x4fae2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fae30: 0xc0408ce  jal         func_102338
    ctx->pc = 0x4FAE30u;
    SET_GPR_U32(ctx, 31, 0x4FAE38u);
    ctx->pc = 0x4FAE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAE30u;
    // 0x4fae34: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102338u, 0x4FAE30u, 0x4FAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAE38u;
label_4fae38:
    // 0x4fae38: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x4fae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x4fae3c: 0x3c0af800  lui         $t2, 0xF800
    ctx->pc = 0x4fae3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63488 << 16));
    // 0x4fae40: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4fae40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4fae44: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4fae44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4fae48: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4fae48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4fae4c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4fae4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4fae50: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4fae50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4fae54: 0x34630090  ori         $v1, $v1, 0x90
    ctx->pc = 0x4fae54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)144);
    // 0x4fae58: 0x3408ef80  ori         $t0, $zero, 0xEF80
    ctx->pc = 0x4fae58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61312);
    // 0x4fae5c: 0x8427c  dsll32      $t0, $t0, 9
    ctx->pc = 0x4fae5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 9));
    // 0x4fae60: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x4fae60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fae64: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x4fae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4fae68: 0x24067100  addiu       $a2, $zero, 0x7100
    ctx->pc = 0x4fae68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x4fae6c: 0x24098f00  addiu       $t1, $zero, -0x7100
    ctx->pc = 0x4fae6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938368));
    // 0x4fae70: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4fae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4fae74: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x4fae74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x4fae78: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4fae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4fae7c: 0x34a50180  ori         $a1, $a1, 0x180
    ctx->pc = 0x4fae7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)384);
    // 0x4fae80: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x4fae80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x4fae84: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x4fae84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x4fae88: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4fae88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4fae8c: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x4fae8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x4fae90: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4fae90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4fae94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4fae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4fae98: 0xa4260084  sh          $a2, 0x84($at)
    ctx->pc = 0x4fae98u;
    runtime->Store16(rdram, ctx, 0x70000084u, (uint16_t)GPR_U32(ctx, 6));
    // 0x4fae9c: 0x8e22ce90  lw          $v0, -0x3170($s1)
    ctx->pc = 0x4fae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954640)));
    // 0x4faea0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faea4: 0xa4260112  sh          $a2, 0x112($at)
    ctx->pc = 0x4faea4u;
    runtime->Store16(rdram, ctx, 0x70000112u, (uint16_t)GPR_U32(ctx, 6));
    // 0x4faea8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4faea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4faeac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faeb0: 0xa4290122  sh          $t1, 0x122($at)
    ctx->pc = 0x4faeb0u;
    runtime->Store16(rdram, ctx, 0x70000122u, (uint16_t)GPR_U32(ctx, 9));
    // 0x4faeb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4faeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4faeb8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4faeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4faebc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4faebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4faec0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4faec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4faec4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4faec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4faec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4faec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4faecc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4faeccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4faed0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faed4: 0xa4240080  sh          $a0, 0x80($at)
    ctx->pc = 0x4faed4u;
    runtime->Store16(rdram, ctx, 0x70000080u, (uint16_t)GPR_U32(ctx, 4));
    // 0x4faed8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x4faed8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4faedc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4faedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4faee0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4faee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4faee4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x4faee4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x4faee8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faeec: 0xa4240170  sh          $a0, 0x170($at)
    ctx->pc = 0x4faeecu;
    runtime->Store16(rdram, ctx, 0x70000170u, (uint16_t)GPR_U32(ctx, 4));
    // 0x4faef0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faef4: 0xa4260202  sh          $a2, 0x202($at)
    ctx->pc = 0x4faef4u;
    runtime->Store16(rdram, ctx, 0x70000202u, (uint16_t)GPR_U32(ctx, 6));
    // 0x4faef8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faefc: 0xa4290212  sh          $t1, 0x212($at)
    ctx->pc = 0x4faefcu;
    runtime->Store16(rdram, ctx, 0x70000212u, (uint16_t)GPR_U32(ctx, 9));
    // 0x4faf00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faf04: 0xfc2701f0  sd          $a3, 0x1F0($at)
    ctx->pc = 0x4faf04u;
    runtime->Store64(rdram, ctx, 0x700001F0u, GPR_U64(ctx, 7));
    // 0x4faf08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faf0c: 0xa4260174  sh          $a2, 0x174($at)
    ctx->pc = 0x4faf0cu;
    runtime->Store16(rdram, ctx, 0x70000174u, (uint16_t)GPR_U32(ctx, 6));
    // 0x4faf10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4faf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4faf14: 0xfc270100  sd          $a3, 0x100($at)
    ctx->pc = 0x4faf14u;
    runtime->Store64(rdram, ctx, 0x70000100u, GPR_U64(ctx, 7));
    // 0x4faf18: 0x3e00008  jr          $ra
    ctx->pc = 0x4FAF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAF18u;
        // 0x4faf1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FAF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FAF20u;
}
