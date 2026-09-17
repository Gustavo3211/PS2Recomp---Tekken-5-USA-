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

// Function: sub_0021F4F0
// Address: 0x21f4f0 - 0x21f570
void sub_0021F4F0_0x21f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F4F0_0x21f4f0");
#endif

    switch (ctx->pc) {
        case 0x21f50cu: goto label_21f50c;
        case 0x21f524u: goto label_21f524;
        case 0x21f528u: goto label_21f528;
        case 0x21f534u: goto label_21f534;
        case 0x21f548u: goto label_21f548;
        case 0x21f55cu: goto label_21f55c;
        default: break;
    }

    ctx->pc = 0x21f4f0u;

    // 0x21f4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f4f4: 0xaf84c960  sw          $a0, -0x36A0($gp)
    ctx->pc = 0x21f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953312), GPR_U32(ctx, 4));
    // 0x21f4f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f4fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21f500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21f504: 0xc087da0  jal         func_21F680
    ctx->pc = 0x21F504u;
    SET_GPR_U32(ctx, 31, 0x21F50Cu);
    ctx->pc = 0x21F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F504u;
    // 0x21f508: 0x90840008  lbu         $a0, 0x8($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F680u, 0x21F504u, 0x21F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F50Cu;
label_21f50c:
    // 0x21f50c: 0x8f82c960  lw          $v0, -0x36A0($gp)
    ctx->pc = 0x21f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953312)));
    // 0x21f510: 0x8f84a47c  lw          $a0, -0x5B84($gp)
    ctx->pc = 0x21f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943868)));
    // 0x21f514: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x21f514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f518: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x21f518u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21f51c: 0xc0c4dd2  jal         func_313748
    ctx->pc = 0x21F51Cu;
    SET_GPR_U32(ctx, 31, 0x21F524u);
    ctx->pc = 0x21F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F51Cu;
    // 0x21f520: 0x94460006  lhu         $a2, 0x6($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313748u, 0x21F51Cu, 0x21F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F524u;
label_21f524:
    // 0x21f524: 0x8f82c960  lw          $v0, -0x36A0($gp)
    ctx->pc = 0x21f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953312)));
label_21f528:
    // 0x21f528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f52c: 0xc0c4de2  jal         func_313788
    ctx->pc = 0x21F52Cu;
    SET_GPR_U32(ctx, 31, 0x21F534u);
    ctx->pc = 0x21F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F52Cu;
    // 0x21f530: 0x9045000a  lbu         $a1, 0xA($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313788u, 0x21F52Cu, 0x21F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F534u;
label_21f534:
    // 0x21f534: 0x8f82c960  lw          $v0, -0x36A0($gp)
    ctx->pc = 0x21f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953312)));
    // 0x21f538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f53c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21f53cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21f540: 0xc0c4dee  jal         func_3137B8
    ctx->pc = 0x21F540u;
    SET_GPR_U32(ctx, 31, 0x21F548u);
    ctx->pc = 0x21F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F540u;
    // 0x21f544: 0x90450009  lbu         $a1, 0x9($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3137B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3137B8u, 0x21F540u, 0x21F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F548u;
label_21f548:
    // 0x21f548: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x21f548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x21f54c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x21F54Cu;
    {
        const bool branch_taken_0x21f54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f54c) {
            ctx->pc = 0x21F550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F54Cu;
            // 0x21f550: 0x8f82c960  lw          $v0, -0x36A0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f528;
        }
    }
    ctx->pc = 0x21F554u;
    // 0x21f554: 0xc0c4dfa  jal         func_3137E8
    ctx->pc = 0x21F554u;
    SET_GPR_U32(ctx, 31, 0x21F55Cu);
    ctx->pc = 0x21F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F554u;
    // 0x21f558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3137E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3137E8u, 0x21F554u, 0x21F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F55Cu;
label_21f55c:
    // 0x21f55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f564: 0x3e00008  jr          $ra
    ctx->pc = 0x21F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F564u;
        // 0x21f568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F56Cu;
    // 0x21f56c: 0x0  nop
    ctx->pc = 0x21f56cu;
    // NOP
    ctx->pc = 0x21f570u;
}
