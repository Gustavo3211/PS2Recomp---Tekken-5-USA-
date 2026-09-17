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

// Function: sub_002D12C0
// Address: 0x2d12c0 - 0x2d1398
void sub_002D12C0_0x2d12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D12C0_0x2d12c0");
#endif

    switch (ctx->pc) {
        case 0x2d12d4u: goto label_2d12d4;
        case 0x2d12e8u: goto label_2d12e8;
        case 0x2d12f0u: goto label_2d12f0;
        case 0x2d1354u: goto label_2d1354;
        default: break;
    }

    ctx->pc = 0x2d12c0u;

    // 0x2d12c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d12c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d12c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d12cc: 0xc0a793e  jal         func_29E4F8
    ctx->pc = 0x2D12CCu;
    SET_GPR_U32(ctx, 31, 0x2D12D4u);
    ctx->pc = 0x2D12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12CCu;
    // 0x2d12d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4F8u, 0x2D12CCu, 0x2D12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12D4u;
label_2d12d4:
    // 0x2d12d4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D12D4u;
    {
        const bool branch_taken_0x2d12d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12D4u;
        // 0x2d12d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12d4) {
            ctx->pc = 0x2D1354u;
            goto label_2d1354;
        }
    }
    ctx->pc = 0x2D12DCu;
    // 0x2d12dc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2d12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2d12e0: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x2D12E0u;
    SET_GPR_U32(ctx, 31, 0x2D12E8u);
    ctx->pc = 0x2D12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12E0u;
    // 0x2d12e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x2D12E0u, 0x2D12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12E8u;
label_2d12e8:
    // 0x2d12e8: 0xc0a796a  jal         func_29E5A8
    ctx->pc = 0x2D12E8u;
    SET_GPR_U32(ctx, 31, 0x2D12F0u);
    ctx->pc = 0x29E5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E5A8u, 0x2D12E8u, 0x2D12F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12F0u;
label_2d12f0:
    // 0x2d12f0: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x2d12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2d12f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d12f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12f8: 0x24061770  addiu       $a2, $zero, 0x1770
    ctx->pc = 0x2d12f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x2d12fc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2d12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2d1300: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x2d1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2d1304: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2d1304u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2d1308: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d1308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d130c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d1310: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2d1310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d1314: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2d1314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d1318: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2d1318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d131c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d1320: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d1320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d1324: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d1328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d1328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d132c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1330: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d1330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d1334: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2d1334u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2d1338: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x2d1338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2d133c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2d133cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d1340: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1340u;
    {
        const bool branch_taken_0x2d1340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1340u;
        // 0x2d1344: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1340) {
            ctx->pc = 0x2D134Cu;
            goto label_2d134c;
        }
    }
    ctx->pc = 0x2D1348u;
    // 0x2d1348: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x2d1348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_2d134c:
    // 0x2d134c: 0xc0a7956  jal         func_29E558
    ctx->pc = 0x2D134Cu;
    SET_GPR_U32(ctx, 31, 0x2D1354u);
    ctx->pc = 0x29E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E558u, 0x2D134Cu, 0x2D1354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1354u;
label_2d1354:
    // 0x2d1354: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d1354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2d1358: 0x904483ed  lbu         $a0, -0x7C13($v0)
    ctx->pc = 0x2d1358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3A83EDu));
    // 0x2d135c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D135Cu;
    {
        const bool branch_taken_0x2d135c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D135Cu;
        // 0x2d1360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d135c) {
            ctx->pc = 0x2D1370u;
            goto label_2d1370;
        }
    }
    ctx->pc = 0x2D1364u;
    // 0x2d1364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1364u;
    {
        const bool branch_taken_0x2d1364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1364u;
        // 0x2d1368: 0x8f85a850  lw          $a1, -0x57B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1364) {
            ctx->pc = 0x2D1380u;
            goto label_2d1380;
        }
    }
    ctx->pc = 0x2D136Cu;
    // 0x2d136c: 0x0  nop
    ctx->pc = 0x2d136cu;
    // NOP
label_2d1370:
    // 0x2d1370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1374: 0x8f83a854  lw          $v1, -0x57AC($gp)
    ctx->pc = 0x2d1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x2d1378: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x2d1378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2d137c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2d137cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2d1380:
    // 0x2d1380: 0x512c3  sra         $v0, $a1, 11
    ctx->pc = 0x2d1380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 11));
    // 0x2d1384: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d1384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1388: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d1388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d138c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d1390: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1390u;
        // 0x2d1394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1398u;
}
