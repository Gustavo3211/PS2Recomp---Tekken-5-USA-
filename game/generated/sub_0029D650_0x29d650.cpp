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

// Function: sub_0029D650
// Address: 0x29d650 - 0x29d780
void sub_0029D650_0x29d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D650_0x29d650");
#endif

    switch (ctx->pc) {
        case 0x29d664u: goto label_29d664;
        case 0x29d678u: goto label_29d678;
        case 0x29d68cu: goto label_29d68c;
        case 0x29d6a8u: goto label_29d6a8;
        case 0x29d6c4u: goto label_29d6c4;
        case 0x29d6e0u: goto label_29d6e0;
        case 0x29d768u: goto label_29d768;
        default: break;
    }

    ctx->pc = 0x29d650u;

    // 0x29d650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d658: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29d65c: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x29D65Cu;
    SET_GPR_U32(ctx, 31, 0x29D664u);
    ctx->pc = 0x29D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D65Cu;
    // 0x29d660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x29D65Cu, 0x29D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D664u;
label_29d664:
    // 0x29d664: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29d664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29d668: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x29d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x29d66c: 0x2463e3c0  addiu       $v1, $v1, -0x1C40
    ctx->pc = 0x29d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960064));
    // 0x29d670: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29D670u;
    SET_GPR_U32(ctx, 31, 0x29D678u);
    ctx->pc = 0x29D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D670u;
    // 0x29d674: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29D670u, 0x29D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D678u;
label_29d678:
    // 0x29d678: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29d678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d67c: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x29d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29d680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d684: 0xc089636  jal         func_2258D8
    ctx->pc = 0x29D684u;
    SET_GPR_U32(ctx, 31, 0x29D68Cu);
    ctx->pc = 0x29D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D684u;
    // 0x29d688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x29D684u, 0x29D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D68Cu;
label_29d68c:
    // 0x29d68c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29d690: 0xaf90cad8  sw          $s0, -0x3528($gp)
    ctx->pc = 0x29d690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953688), GPR_U32(ctx, 16));
    // 0x29d694: 0x2442c390  addiu       $v0, $v0, -0x3C70
    ctx->pc = 0x29d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x29d698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d69c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x29d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x29d6a0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29D6A0u;
    SET_GPR_U32(ctx, 31, 0x29D6A8u);
    ctx->pc = 0x29D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6A0u;
    // 0x29d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29D6A0u, 0x29D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6A8u;
label_29d6a8:
    // 0x29d6a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29d6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6b0: 0x2463e4b0  addiu       $v1, $v1, -0x1B50
    ctx->pc = 0x29d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960304));
    // 0x29d6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6b8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29d6bc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29D6BCu;
    SET_GPR_U32(ctx, 31, 0x29D6C4u);
    ctx->pc = 0x29D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6BCu;
    // 0x29d6c0: 0xaf82cac4  sw          $v0, -0x353C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29D6BCu, 0x29D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6C4u;
label_29d6c4:
    // 0x29d6c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29d6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6cc: 0x2463e480  addiu       $v1, $v1, -0x1B80
    ctx->pc = 0x29d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960256));
    // 0x29d6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6d4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29d6d8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29D6D8u;
    SET_GPR_U32(ctx, 31, 0x29D6E0u);
    ctx->pc = 0x29D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6D8u;
    // 0x29d6dc: 0xaf82cac8  sw          $v0, -0x3538($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29D6D8u, 0x29D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6E0u;
label_29d6e0:
    // 0x29d6e0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x29d6e4: 0x2463e450  addiu       $v1, $v1, -0x1BB0
    ctx->pc = 0x29d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960208));
    // 0x29d6e8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x29d6ec: 0xaf82cacc  sw          $v0, -0x3534($gp)
    ctx->pc = 0x29d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953676), GPR_U32(ctx, 2));
    // 0x29d6f0: 0x8f84cac4  lw          $a0, -0x353C($gp)
    ctx->pc = 0x29d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953668)));
    // 0x29d6f4: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x29d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x29d6f8: 0xae040150  sw          $a0, 0x150($s0)
    ctx->pc = 0x29d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 4));
    // 0x29d6fc: 0x8f82cac8  lw          $v0, -0x3538($gp)
    ctx->pc = 0x29d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953672)));
    // 0x29d700: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29d704: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x29d704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x29d708: 0x8f83cacc  lw          $v1, -0x3534($gp)
    ctx->pc = 0x29d708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953676)));
    // 0x29d70c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x29d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x29d710: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x29d710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x29d714: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29d714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29d718: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d71c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29d720: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d724: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x29d724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x29d728: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d72c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x29d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x29d730: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x29d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d734: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x29d734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x29d738: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x29d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x29d73c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x29d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x29d740: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x29d740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x29d744: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x29d744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x29d748: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29D748u;
    {
        const bool branch_taken_0x29d748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D748u;
        // 0x29d74c: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d748) {
            ctx->pc = 0x29D788u;
            return;
        }
    }
    ctx->pc = 0x29D750u;
    // 0x29d750: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x29d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29d754: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x29d758: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x29d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x29d75c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d760: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x29D760u;
    SET_GPR_U32(ctx, 31, 0x29D768u);
    ctx->pc = 0x29D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D760u;
    // 0x29d764: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x29D760u, 0x29D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D768u;
label_29d768:
    // 0x29d768: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x29d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29d76c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x29d770: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x29d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x29d774: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x29d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x29d778: 0xc048b90  jal         func_122E40
    ctx->pc = 0x29D778u;
    SET_GPR_U32(ctx, 31, 0x29D780u);
    ctx->pc = 0x29D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D778u;
    // 0x29d77c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x29D778u, 0x29D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D780u;
}
