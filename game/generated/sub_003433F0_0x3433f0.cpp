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

// Function: sub_003433F0
// Address: 0x3433f0 - 0x343650
void sub_003433F0_0x3433f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003433F0_0x3433f0");
#endif

    switch (ctx->pc) {
        case 0x343440u: goto label_343440;
        case 0x343454u: goto label_343454;
        case 0x3434a4u: goto label_3434a4;
        case 0x3434e0u: goto label_3434e0;
        case 0x34350cu: goto label_34350c;
        case 0x343544u: goto label_343544;
        case 0x34357cu: goto label_34357c;
        case 0x3435d0u: goto label_3435d0;
        default: break;
    }

    ctx->pc = 0x3433f0u;

    // 0x3433f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3433f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3433f4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3433f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3433f8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3433f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x3433fc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3433fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x343400: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x343400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343404: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x343404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x343408: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x343408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34340c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x34340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x343410: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x343410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343414: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x343414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x343418: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x343418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34341c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x34341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x343420: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x343420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343424: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x343424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x343428: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x343428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x34342c: 0x82880000  lb          $t0, 0x0($s4)
    ctx->pc = 0x34342cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x343430: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x343430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x343434: 0x1100007a  beqz        $t0, . + 4 + (0x7A << 2)
    ctx->pc = 0x343434u;
    {
        const bool branch_taken_0x343434 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x343438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343434u;
        // 0x343438: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343434) {
            ctx->pc = 0x343620u;
            goto label_343620;
        }
    }
    ctx->pc = 0x34343Cu;
    // 0x34343c: 0x0  nop
    ctx->pc = 0x34343cu;
    // NOP
label_343440:
    // 0x343440: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x343440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x343444: 0x5502006b  bnel        $t0, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x343444u;
    {
        const bool branch_taken_0x343444 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x343444) {
            ctx->pc = 0x343448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343444u;
            // 0x343448: 0xa2280000  sb          $t0, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3435F4u;
            goto label_3435f4;
        }
    }
    ctx->pc = 0x34344Cu;
    // 0x34344c: 0x27b00001  addiu       $s0, $sp, 0x1
    ctx->pc = 0x34344cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x343450: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x343450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343454:
    // 0x343454: 0x82880000  lb          $t0, 0x0($s4)
    ctx->pc = 0x343454u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x343458: 0x2503ffe0  addiu       $v1, $t0, -0x20
    ctx->pc = 0x343458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x34345c: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x34345cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x343460: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x343460u;
    {
        const bool branch_taken_0x343460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343460u;
        // 0x343464: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343460) {
            ctx->pc = 0x3435F0u;
            goto label_3435f0;
        }
    }
    ctx->pc = 0x343468u;
    // 0x343468: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x343468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34346c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x343470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x343470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x343474: 0x8c6348f0  lw          $v1, 0x48F0($v1)
    ctx->pc = 0x343474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18672)));
    // 0x343478: 0x600008  jr          $v1
    ctx->pc = 0x343478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x343480u: goto label_343480;
            case 0x3434B8u: goto label_3434b8;
            case 0x343520u: goto label_343520;
            case 0x343558u: goto label_343558;
            case 0x343590u: goto label_343590;
            case 0x3435A0u: goto label_3435a0;
            case 0x3435B0u: goto label_3435b0;
            case 0x3435D8u: goto label_3435d8;
            case 0x3435F0u: goto label_3435f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343478u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x343480u;
label_343480:
    // 0x343480: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x343480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343484: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x343484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x343488: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x343488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34348c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343494: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x343494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343498: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x343498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x34349c: 0xc0d0cb2  jal         func_3432C8
    ctx->pc = 0x34349Cu;
    SET_GPR_U32(ctx, 31, 0x3434A4u);
    ctx->pc = 0x3434A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34349Cu;
    // 0x3434a0: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3432C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3432C8u, 0x34349Cu, 0x3434A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434A4u;
label_3434a4:
    // 0x3434a4: 0x4410037  bgez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3434A4u;
    {
        const bool branch_taken_0x3434a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3434A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434A4u;
        // 0x3434a8: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434a4) {
            ctx->pc = 0x343584u;
            goto label_343584;
        }
    }
    ctx->pc = 0x3434ACu;
    // 0x3434ac: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3434ACu;
    {
        const bool branch_taken_0x3434ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434ACu;
        // 0x3434b0: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434ac) {
            ctx->pc = 0x34360Cu;
            goto label_34360c;
        }
    }
    ctx->pc = 0x3434B4u;
    // 0x3434b4: 0x0  nop
    ctx->pc = 0x3434b4u;
    // NOP
label_3434b8:
    // 0x3434b8: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x3434b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3434bc: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x3434BCu;
    {
        const bool branch_taken_0x3434bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434BCu;
        // 0x3434c0: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434bc) {
            ctx->pc = 0x3434F0u;
            goto label_3434f0;
        }
    }
    ctx->pc = 0x3434C4u;
    // 0x3434c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3434c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434c8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3434c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3434cc: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x3434ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3434d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3434d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3434d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434d8: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x3434D8u;
    SET_GPR_U32(ctx, 31, 0x3434E0u);
    ctx->pc = 0x3434DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434D8u;
    // 0x3434dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x3434D8u, 0x3434E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434E0u;
label_3434e0:
    // 0x3434e0: 0x4410028  bgez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3434E0u;
    {
        const bool branch_taken_0x3434e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3434E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434E0u;
        // 0x3434e4: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434e0) {
            ctx->pc = 0x343584u;
            goto label_343584;
        }
    }
    ctx->pc = 0x3434E8u;
    // 0x3434e8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3434E8u;
    {
        const bool branch_taken_0x3434e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434E8u;
        // 0x3434ec: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434e8) {
            ctx->pc = 0x34360Cu;
            goto label_34360c;
        }
    }
    ctx->pc = 0x3434F0u;
label_3434f0:
    // 0x3434f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3434f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434f4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3434f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3434f8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3434f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3434fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3434fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343504: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x343504u;
    SET_GPR_U32(ctx, 31, 0x34350Cu);
    ctx->pc = 0x343508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343504u;
    // 0x343508: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x343504u, 0x34350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34350Cu;
label_34350c:
    // 0x34350c: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34350Cu;
    {
        const bool branch_taken_0x34350c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x343510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34350Cu;
        // 0x343510: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34350c) {
            ctx->pc = 0x343584u;
            goto label_343584;
        }
    }
    ctx->pc = 0x343514u;
    // 0x343514: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x343514u;
    {
        const bool branch_taken_0x343514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343514u;
        // 0x343518: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343514) {
            ctx->pc = 0x34360Cu;
            goto label_34360c;
        }
    }
    ctx->pc = 0x34351Cu;
    // 0x34351c: 0x0  nop
    ctx->pc = 0x34351cu;
    // NOP
label_343520:
    // 0x343520: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x343520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343524: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x343524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x343528: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x343528u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34352c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343530: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343534: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x343534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343538: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x343538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x34353c: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x34353Cu;
    SET_GPR_U32(ctx, 31, 0x343544u);
    ctx->pc = 0x343540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34353Cu;
    // 0x343540: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x34353Cu, 0x343544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343544u;
label_343544:
    // 0x343544: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x343544u;
    {
        const bool branch_taken_0x343544 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x343548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343544u;
        // 0x343548: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343544) {
            ctx->pc = 0x343584u;
            goto label_343584;
        }
    }
    ctx->pc = 0x34354Cu;
    // 0x34354c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x34354Cu;
    {
        const bool branch_taken_0x34354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34354Cu;
        // 0x343550: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34354c) {
            ctx->pc = 0x34360Cu;
            goto label_34360c;
        }
    }
    ctx->pc = 0x343554u;
    // 0x343554: 0x0  nop
    ctx->pc = 0x343554u;
    // NOP
label_343558:
    // 0x343558: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x343558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34355c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x34355cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x343560: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x343560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x343564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343568: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x343568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34356c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34356cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343570: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x343570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x343574: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x343574u;
    SET_GPR_U32(ctx, 31, 0x34357Cu);
    ctx->pc = 0x343578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343574u;
    // 0x343578: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x343574u, 0x34357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34357Cu;
label_34357c:
    // 0x34357c: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x34357Cu;
    {
        const bool branch_taken_0x34357c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x343580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34357Cu;
        // 0x343580: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34357c) {
            ctx->pc = 0x343608u;
            goto label_343608;
        }
    }
    ctx->pc = 0x343584u;
label_343584:
    // 0x343584: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x343584u;
    {
        const bool branch_taken_0x343584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343584u;
        // 0x343588: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343584) {
            ctx->pc = 0x3435FCu;
            goto label_3435fc;
        }
    }
    ctx->pc = 0x34358Cu;
    // 0x34358c: 0x0  nop
    ctx->pc = 0x34358cu;
    // NOP
label_343590:
    // 0x343590: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x343590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x343594: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x343594u;
    {
        const bool branch_taken_0x343594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343594u;
        // 0x343598: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343594) {
            ctx->pc = 0x343454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343454;
        }
    }
    ctx->pc = 0x34359Cu;
    // 0x34359c: 0x0  nop
    ctx->pc = 0x34359cu;
    // NOP
label_3435a0:
    // 0x3435a0: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x3435a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3435a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3435a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3435a8: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x3435A8u;
    {
        const bool branch_taken_0x3435a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435A8u;
        // 0x3435ac: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435a8) {
            ctx->pc = 0x343454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343454;
        }
    }
    ctx->pc = 0x3435B0u;
label_3435b0:
    // 0x3435b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3435b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3435b4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3435b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3435b8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3435b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3435bc: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x3435bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x3435c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3435c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3435c4: 0x24c64f58  addiu       $a2, $a2, 0x4F58
    ctx->pc = 0x3435c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20312));
    // 0x3435c8: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x3435C8u;
    SET_GPR_U32(ctx, 31, 0x3435D0u);
    ctx->pc = 0x3435CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435C8u;
    // 0x3435cc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128C78u, 0x3435C8u, 0x3435D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435D0u;
label_3435d0:
    // 0x3435d0: 0x1000ffa0  b           . + 4 + (-0x60 << 2)
    ctx->pc = 0x3435D0u;
    {
        const bool branch_taken_0x3435d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435D0u;
        // 0x3435d4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435d0) {
            ctx->pc = 0x343454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343454;
        }
    }
    ctx->pc = 0x3435D8u;
label_3435d8:
    // 0x3435d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3435d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3435dc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3435dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3435e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3435e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3435e4: 0x2361823  subu        $v1, $s1, $s6
    ctx->pc = 0x3435e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x3435e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3435E8u;
    {
        const bool branch_taken_0x3435e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435E8u;
        // 0x3435ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435e8) {
            ctx->pc = 0x3435FCu;
            goto label_3435fc;
        }
    }
    ctx->pc = 0x3435F0u;
label_3435f0:
    // 0x3435f0: 0xa2280000  sb          $t0, 0x0($s1)
    ctx->pc = 0x3435f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 8));
label_3435f4:
    // 0x3435f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3435f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3435f8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3435f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3435fc:
    // 0x3435fc: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x3435fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x343600: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x343600u;
    {
        const bool branch_taken_0x343600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343600) {
            ctx->pc = 0x343604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343600u;
            // 0x343604: 0x82880000  lb          $t0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343618u;
            goto label_343618;
        }
    }
    ctx->pc = 0x343608u;
label_343608:
    // 0x343608: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x343608u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_34360c:
    // 0x34360c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34360Cu;
    {
        const bool branch_taken_0x34360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34360Cu;
        // 0x343610: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34360c) {
            ctx->pc = 0x343628u;
            goto label_343628;
        }
    }
    ctx->pc = 0x343614u;
    // 0x343614: 0x0  nop
    ctx->pc = 0x343614u;
    // NOP
label_343618:
    // 0x343618: 0x1500ff89  bnez        $t0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x343618u;
    {
        const bool branch_taken_0x343618 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x34361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343618u;
        // 0x34361c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343618) {
            ctx->pc = 0x343440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343440;
        }
    }
    ctx->pc = 0x343620u;
label_343620:
    // 0x343620: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x343620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x343624: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x343624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_343628:
    // 0x343628: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x343628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34362c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x34362cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x343630: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x343630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x343634: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x343634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x343638: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x343638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34363c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x34363cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x343640: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x343640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x343644: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x343644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x343648: 0x3e00008  jr          $ra
    ctx->pc = 0x343648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343648u;
        // 0x34364c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343650u;
}
