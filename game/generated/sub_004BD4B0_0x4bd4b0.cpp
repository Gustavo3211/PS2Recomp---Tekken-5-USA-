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

// Function: sub_004BD4B0
// Address: 0x4bd4b0 - 0x4bd5d8
void sub_004BD4B0_0x4bd4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD4B0_0x4bd4b0");
#endif

    switch (ctx->pc) {
        case 0x4bd4dcu: goto label_4bd4dc;
        default: break;
    }

    ctx->pc = 0x4bd4b0u;

    // 0x4bd4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bd4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bd4b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bd4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bd4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bd4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd4bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bd4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bd4c0: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4bd4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4bd4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bd4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bd4c8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bd4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bd4cc: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BD4CCu;
    {
        const bool branch_taken_0x4bd4cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4bd4cc) {
            ctx->pc = 0x4BD4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD4CCu;
            // 0x4bd4d0: 0x8e090140  lw          $t1, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD500u;
            goto label_4bd500;
        }
    }
    ctx->pc = 0x4BD4D4u;
    // 0x4bd4d4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4BD4D4u;
    SET_GPR_U32(ctx, 31, 0x4BD4DCu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BD4D4u, 0x4BD4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD4DCu;
label_4bd4dc:
    // 0x4bd4dc: 0x2402047a  addiu       $v0, $zero, 0x47A
    ctx->pc = 0x4bd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1146));
    // 0x4bd4e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bd4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4bd4e4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4bd4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd4e8: 0xa60301b6  sh          $v1, 0x1B6($s0)
    ctx->pc = 0x4bd4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bd4ec: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x4bd4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bd4f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bd4f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bd4f4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4bd4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4bd4f8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4bd4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd4fc: 0x8e090140  lw          $t1, 0x140($s0)
    ctx->pc = 0x4bd4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4bd500:
    // 0x4bd500: 0x852201b4  lh          $v0, 0x1B4($t1)
    ctx->pc = 0x4bd500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 436)));
    // 0x4bd504: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BD504u;
    {
        const bool branch_taken_0x4bd504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD504u;
        // 0x4bd508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd504) {
            ctx->pc = 0x4BD520u;
            goto label_4bd520;
        }
    }
    ctx->pc = 0x4BD50Cu;
    // 0x4bd50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd518: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BD518u;
    ctx->pc = 0x4BD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD518u;
    // 0x4bd51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BD520u;
label_4bd520:
    // 0x4bd520: 0x85220148  lh          $v0, 0x148($t1)
    ctx->pc = 0x4bd520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 328)));
    // 0x4bd524: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BD524u;
    {
        const bool branch_taken_0x4bd524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bd524) {
            ctx->pc = 0x4BD528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD524u;
            // 0x4bd528: 0x8d230010  lw          $v1, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD548u;
            goto label_4bd548;
        }
    }
    ctx->pc = 0x4BD52Cu;
    // 0x4bd52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd53c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BD53Cu;
    ctx->pc = 0x4BD540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD53Cu;
    // 0x4bd540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BD544u;
    // 0x4bd544: 0x0  nop
    ctx->pc = 0x4bd544u;
    // NOP
label_4bd548:
    // 0x4bd548: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4bd548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4bd54c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4bd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bd550: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4bd550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd554: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4bd554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4bd558: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x4bd558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4bd55c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd560: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4bd560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4bd564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bd564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bd568: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x4bd568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4bd56c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4bd56cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4bd570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd578: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x4bd578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4bd57c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4bd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4bd580: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4bd580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4bd584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd588: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4bd588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4bd58c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd590: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bd590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bd594: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4bd594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4bd598: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x4bd598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4bd59c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4bd59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4bd5a0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4bd5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4bd5a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4bd5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4bd5a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd5ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bd5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bd5b0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4bd5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4bd5b4: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4bd5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bd5b8: 0x9522011c  lhu         $v0, 0x11C($t1)
    ctx->pc = 0x4bd5b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 284)));
    // 0x4bd5bc: 0xa602011c  sh          $v0, 0x11C($s0)
    ctx->pc = 0x4bd5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd5c0: 0x95230120  lhu         $v1, 0x120($t1)
    ctx->pc = 0x4bd5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 288)));
    // 0x4bd5c4: 0xa6030120  sh          $v1, 0x120($s0)
    ctx->pc = 0x4bd5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bd5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd5cc: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4BD5CCu;
    ctx->pc = 0x4BD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD5CCu;
    // 0x4bd5d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4BD5D4u;
    // 0x4bd5d4: 0x0  nop
    ctx->pc = 0x4bd5d4u;
    // NOP
    ctx->pc = 0x4bd5d8u;
}
