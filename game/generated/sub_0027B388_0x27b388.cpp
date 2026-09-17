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

// Function: sub_0027B388
// Address: 0x27b388 - 0x27b4e8
void sub_0027B388_0x27b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B388_0x27b388");
#endif

    switch (ctx->pc) {
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b418u: goto label_27b418;
        case 0x27b448u: goto label_27b448;
        case 0x27b478u: goto label_27b478;
        case 0x27b484u: goto label_27b484;
        default: break;
    }

    ctx->pc = 0x27b388u;

    // 0x27b388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b38c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27b390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27b398: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27b398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b3a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27b3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27b3a8: 0xc0990e2  jal         func_264388
    ctx->pc = 0x27B3A8u;
    SET_GPR_U32(ctx, 31, 0x27B3B0u);
    ctx->pc = 0x27B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3A8u;
    // 0x27b3ac: 0xa22001bb  sb          $zero, 0x1BB($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 443), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264388u, 0x27B3A8u, 0x27B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3B0u;
label_27b3b0:
    // 0x27b3b0: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x27B3B0u;
    SET_GPR_U32(ctx, 31, 0x27B3B8u);
    ctx->pc = 0x27B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3B0u;
    // 0x27b3b4: 0xa6220304  sh          $v0, 0x304($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 772), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x27B3B0u, 0x27B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3B8u;
label_27b3b8:
    // 0x27b3b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x27B3B8u;
    {
        const bool branch_taken_0x27b3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b3b8) {
            ctx->pc = 0x27B3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B3B8u;
            // 0x27b3bc: 0x96250304  lhu         $a1, 0x304($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B3ECu;
            goto label_27b3ec;
        }
    }
    ctx->pc = 0x27B3C0u;
    // 0x27b3c0: 0xc07e588  jal         func_1F9620
    ctx->pc = 0x27B3C0u;
    SET_GPR_U32(ctx, 31, 0x27B3C8u);
    ctx->pc = 0x1F9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9620u, 0x27B3C0u, 0x27B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3C8u;
label_27b3c8:
    // 0x27b3c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B3C8u;
    {
        const bool branch_taken_0x27b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b3c8) {
            ctx->pc = 0x27B3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B3C8u;
            // 0x27b3cc: 0x96250304  lhu         $a1, 0x304($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B3ECu;
            goto label_27b3ec;
        }
    }
    ctx->pc = 0x27B3D0u;
    // 0x27b3d0: 0xc07e628  jal         func_1F98A0
    ctx->pc = 0x27B3D0u;
    SET_GPR_U32(ctx, 31, 0x27B3D8u);
    ctx->pc = 0x1F98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98A0u, 0x27B3D0u, 0x27B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3D8u;
label_27b3d8:
    // 0x27b3d8: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B3D8u;
    {
        const bool branch_taken_0x27b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x27b3d8) {
            ctx->pc = 0x27B3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B3D8u;
            // 0x27b3dc: 0x96250304  lhu         $a1, 0x304($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B3ECu;
            goto label_27b3ec;
        }
    }
    ctx->pc = 0x27B3E0u;
    // 0x27b3e0: 0xc07e63e  jal         func_1F98F8
    ctx->pc = 0x27B3E0u;
    SET_GPR_U32(ctx, 31, 0x27B3E8u);
    ctx->pc = 0x27B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3E0u;
    // 0x27b3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98F8u, 0x27B3E0u, 0x27B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3E8u;
label_27b3e8:
    // 0x27b3e8: 0x96250304  lhu         $a1, 0x304($s1)
    ctx->pc = 0x27b3e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 772)));
label_27b3ec:
    // 0x27b3ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b3f0: 0xc09905e  jal         func_264178
    ctx->pc = 0x27B3F0u;
    SET_GPR_U32(ctx, 31, 0x27B3F8u);
    ctx->pc = 0x27B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B3F0u;
    // 0x27b3f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27B3F0u, 0x27B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3F8u;
label_27b3f8:
    // 0x27b3f8: 0xa6300096  sh          $s0, 0x96($s1)
    ctx->pc = 0x27b3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 16));
    // 0x27b3fc: 0xae220310  sw          $v0, 0x310($s1)
    ctx->pc = 0x27b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 2));
    // 0x27b400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b404: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x27b404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x27b408: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x27b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x27b40c: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x27b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x27b410: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27B410u;
    SET_GPR_U32(ctx, 31, 0x27B418u);
    ctx->pc = 0x27B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B410u;
    // 0x27b414: 0xa63002fe  sh          $s0, 0x2FE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 766), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27B410u, 0x27B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B418u;
label_27b418:
    // 0x27b418: 0xa220030d  sb          $zero, 0x30D($s1)
    ctx->pc = 0x27b418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b41c: 0xa6220300  sh          $v0, 0x300($s1)
    ctx->pc = 0x27b41cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b420: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b424: 0xa230030e  sb          $s0, 0x30E($s1)
    ctx->pc = 0x27b424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 782), (uint8_t)GPR_U32(ctx, 16));
    // 0x27b428: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x27b428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x27b42c: 0xa220030c  sb          $zero, 0x30C($s1)
    ctx->pc = 0x27b42cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b430: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x27b430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b434: 0xa220030f  sb          $zero, 0x30F($s1)
    ctx->pc = 0x27b434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b438: 0xa6200306  sh          $zero, 0x306($s1)
    ctx->pc = 0x27b438u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x27b43c: 0xa22001b9  sb          $zero, 0x1B9($s1)
    ctx->pc = 0x27b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 441), (uint8_t)GPR_U32(ctx, 0));
    // 0x27b440: 0xa6200148  sh          $zero, 0x148($s1)
    ctx->pc = 0x27b440u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x27b444: 0x0  nop
    ctx->pc = 0x27b444u;
    // NOP
label_27b448:
    // 0x27b448: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x27b448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x27b44c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27b450: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27b454: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x27b454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27b458: 0x0  nop
    ctx->pc = 0x27b458u;
    // NOP
    // 0x27b45c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27B45Cu;
    {
        const bool branch_taken_0x27b45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B45Cu;
        // 0x27b460: 0xa44601c0  sh          $a2, 0x1C0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 448), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b45c) {
            ctx->pc = 0x27B448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b448;
        }
    }
    ctx->pc = 0x27B464u;
    // 0x27b464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b468: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27b468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b46c: 0xa6220146  sh          $v0, 0x146($s1)
    ctx->pc = 0x27b46cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 326), (uint16_t)GPR_U32(ctx, 2));
    // 0x27b470: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x27B470u;
    SET_GPR_U32(ctx, 31, 0x27B478u);
    ctx->pc = 0x27B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B470u;
    // 0x27b474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x27B470u, 0x27B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B478u;
label_27b478:
    // 0x27b478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b47c: 0xc09ee3a  jal         func_27B8E8
    ctx->pc = 0x27B47Cu;
    SET_GPR_U32(ctx, 31, 0x27B484u);
    ctx->pc = 0x27B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B47Cu;
    // 0x27b480: 0x8e25005c  lw          $a1, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8E8u, 0x27B47Cu, 0x27B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B484u;
label_27b484:
    // 0x27b484: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x27b484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27b488: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B488u;
    {
        const bool branch_taken_0x27b488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B488u;
        // 0x27b48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b488) {
            ctx->pc = 0x27B4ACu;
            goto label_27b4ac;
        }
    }
    ctx->pc = 0x27B490u;
    // 0x27b490: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x27b490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x27b494: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B494u;
    {
        const bool branch_taken_0x27b494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B494u;
        // 0x27b498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b494) {
            ctx->pc = 0x27B4ACu;
            goto label_27b4ac;
        }
    }
    ctx->pc = 0x27B49Cu;
    // 0x27b49c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27b4a0: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B4A0u;
    {
        const bool branch_taken_0x27b4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27b4a0) {
            ctx->pc = 0x27B4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B4A0u;
            // 0x27b4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B4ACu;
            goto label_27b4ac;
        }
    }
    ctx->pc = 0x27B4A8u;
    // 0x27b4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b4ac:
    // 0x27b4ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B4ACu;
    {
        const bool branch_taken_0x27b4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4ACu;
        // 0x27b4b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4ac) {
            ctx->pc = 0x27B4D0u;
            goto label_27b4d0;
        }
    }
    ctx->pc = 0x27B4B4u;
    // 0x27b4b4: 0x922301bc  lbu         $v1, 0x1BC($s1)
    ctx->pc = 0x27b4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x27b4b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27b4bc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B4BCu;
    {
        const bool branch_taken_0x27b4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b4bc) {
            ctx->pc = 0x27B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B4BCu;
            // 0x27b4c0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B4D4u;
            goto label_27b4d4;
        }
    }
    ctx->pc = 0x27B4C4u;
    // 0x27b4c4: 0xae320060  sw          $s2, 0x60($s1)
    ctx->pc = 0x27b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 18));
    // 0x27b4c8: 0xae510060  sw          $s1, 0x60($s2)
    ctx->pc = 0x27b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 17));
    // 0x27b4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27b4d0:
    // 0x27b4d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_27b4d4:
    // 0x27b4d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27b4d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b4d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27b4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27b4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4DCu;
        // 0x27b4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B4E4u;
    // 0x27b4e4: 0x0  nop
    ctx->pc = 0x27b4e4u;
    // NOP
    ctx->pc = 0x27b4e8u;
}
