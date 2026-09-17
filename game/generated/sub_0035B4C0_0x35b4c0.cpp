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

// Function: sub_0035B4C0
// Address: 0x35b4c0 - 0x35b598
void sub_0035B4C0_0x35b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B4C0_0x35b4c0");
#endif

    switch (ctx->pc) {
        case 0x35b510u: goto label_35b510;
        case 0x35b530u: goto label_35b530;
        case 0x35b544u: goto label_35b544;
        default: break;
    }

    ctx->pc = 0x35b4c0u;

    // 0x35b4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35b4c4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b4c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35b4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35b4cc: 0x24521320  addiu       $s2, $v0, 0x1320
    ctx->pc = 0x35b4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35b4d0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x35b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D1334u));
    // 0x35b4d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35b4d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35b4d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4dc: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x35b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x35b4e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35b4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35b4e4: 0x2c421001  sltiu       $v0, $v0, 0x1001
    ctx->pc = 0x35b4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x35b4e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35b4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b4f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35b4f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35b4f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35b4f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B4FCu;
    {
        const bool branch_taken_0x35b4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4FCu;
        // 0x35b500: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b4fc) {
            ctx->pc = 0x35B518u;
            goto label_35b518;
        }
    }
    ctx->pc = 0x35B504u;
    // 0x35b504: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b508: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B508u;
    SET_GPR_U32(ctx, 31, 0x35B510u);
    ctx->pc = 0x35B50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B508u;
    // 0x35b50c: 0x24845360  addiu       $a0, $a0, 0x5360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B508u, 0x35B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B510u;
label_35b510:
    // 0x35b510: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x35B510u;
    {
        const bool branch_taken_0x35b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B510u;
        // 0x35b514: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b510) {
            ctx->pc = 0x35B570u;
            goto label_35b570;
        }
    }
    ctx->pc = 0x35B518u;
label_35b518:
    // 0x35b518: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x35b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x35b51c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35b520: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35b524: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x35b524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b528: 0xc0d6db6  jal         func_35B6D8
    ctx->pc = 0x35B528u;
    SET_GPR_U32(ctx, 31, 0x35B530u);
    ctx->pc = 0x35B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B528u;
    // 0x35b52c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6D8u, 0x35B528u, 0x35B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B530u;
label_35b530:
    // 0x35b530: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35b530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35b534: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x35b534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b538: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35b538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x35b53c: 0xc0d6db2  jal         func_35B6C8
    ctx->pc = 0x35B53Cu;
    SET_GPR_U32(ctx, 31, 0x35B544u);
    ctx->pc = 0x35B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B53Cu;
    // 0x35b540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6C8u, 0x35B53Cu, 0x35B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B544u;
label_35b544:
    // 0x35b544: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x35b544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x35b548: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x35b548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x35b54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b550: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x35b550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x35b554: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x35b554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x35b558: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35b55c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x35b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x35b560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b564: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x35b564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x35b568: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35b568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35b56c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x35b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_35b570:
    // 0x35b570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b574: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35b574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b57c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35b57cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35b580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b584: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35b584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b588: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35b588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35b58c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35b58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b590: 0x3e00008  jr          $ra
    ctx->pc = 0x35B590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B590u;
        // 0x35b594: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B598u;
}
