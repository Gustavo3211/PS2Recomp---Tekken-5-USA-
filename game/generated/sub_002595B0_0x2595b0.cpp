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

// Function: sub_002595B0
// Address: 0x2595b0 - 0x259758
void sub_002595B0_0x2595b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002595B0_0x2595b0");
#endif

    switch (ctx->pc) {
        case 0x259630u: goto label_259630;
        case 0x259670u: goto label_259670;
        case 0x259688u: goto label_259688;
        case 0x2596a8u: goto label_2596a8;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596d0u: goto label_2596d0;
        case 0x259710u: goto label_259710;
        default: break;
    }

    ctx->pc = 0x2595b0u;

    // 0x2595b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2595b4: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2595b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2595b8: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x2595b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x2595bc: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2595bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2595c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2595c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2595c4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2595c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2595c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2595c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2595cc: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2595ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2595d0: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2595d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x2595d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2595D4u;
    {
        const bool branch_taken_0x2595d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595D4u;
        // 0x2595d8: 0xffbf00c0  sd          $ra, 0xC0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595d4) {
            ctx->pc = 0x2595ECu;
            goto label_2595ec;
        }
    }
    ctx->pc = 0x2595DCu;
    // 0x2595dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2595dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2595e0: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x2595e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2595e4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2595e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2595e8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2595e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2595ec:
    // 0x2595ec: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2595ECu;
    {
        const bool branch_taken_0x2595ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2595ec) {
            ctx->pc = 0x2595F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2595ECu;
            // 0x2595f0: 0x8e2305a0  lw          $v1, 0x5A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259604u;
            goto label_259604;
        }
    }
    ctx->pc = 0x2595F4u;
    // 0x2595f4: 0x8e2205c0  lw          $v0, 0x5C0($s1)
    ctx->pc = 0x2595f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x2595f8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2595F8u;
    {
        const bool branch_taken_0x2595f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2595FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595F8u;
        // 0x2595fc: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595f8) {
            ctx->pc = 0x25973Cu;
            goto label_25973c;
        }
    }
    ctx->pc = 0x259600u;
    // 0x259600: 0x8e2305a0  lw          $v1, 0x5A0($s1)
    ctx->pc = 0x259600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_259604:
    // 0x259604: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x259604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x259608: 0x26250590  addiu       $a1, $s1, 0x590
    ctx->pc = 0x259608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x25960c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25960cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259610: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x259610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x259614: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x259614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x259618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25961c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x25961cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x259620: 0x8e2305a4  lw          $v1, 0x5A4($s1)
    ctx->pc = 0x259620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
    // 0x259624: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x259624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x259628: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x259628u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x25962c: 0x0  nop
    ctx->pc = 0x25962cu;
    // NOP
label_259630:
    // 0x259630: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x259630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x259634: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x259634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x259638: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x259638u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25963c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x25963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x259640: 0x28c50003  slti        $a1, $a2, 0x3
    ctx->pc = 0x259640u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x259644: 0x7c830520  sq          $v1, 0x520($a0)
    ctx->pc = 0x259644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1312), GPR_VEC(ctx, 3));
    // 0x259648: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x259648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25964c: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25964Cu;
    {
        const bool branch_taken_0x25964c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x259650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25964Cu;
        // 0x259650: 0x7c820560  sq          $v0, 0x560($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 1376), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25964c) {
            ctx->pc = 0x259630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259630;
        }
    }
    ctx->pc = 0x259654u;
    // 0x259654: 0x8f82cc6c  lw          $v0, -0x3394($gp)
    ctx->pc = 0x259654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954092)));
    // 0x259658: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x259658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25965c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x25965cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x259660: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x259660u;
    {
        const bool branch_taken_0x259660 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x259664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259660u;
        // 0x259664: 0x26320520  addiu       $s2, $s1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259660) {
            ctx->pc = 0x259698u;
            goto label_259698;
        }
    }
    ctx->pc = 0x259668u;
    // 0x259668: 0x8f86cc68  lw          $a2, -0x3398($gp)
    ctx->pc = 0x259668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
    // 0x25966c: 0x0  nop
    ctx->pc = 0x25966cu;
    // NOP
label_259670:
    // 0x259670: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x259670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x259674: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x259674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x259678: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25967c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25967cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x259680: 0xc08491e  jal         func_212478
    ctx->pc = 0x259680u;
    SET_GPR_U32(ctx, 31, 0x259688u);
    ctx->pc = 0x259684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259680u;
    // 0x259684: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x259680u, 0x259688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259688u;
label_259688:
    // 0x259688: 0x603fff9  bgezl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x259688u;
    {
        const bool branch_taken_0x259688 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x259688) {
            ctx->pc = 0x25968Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259688u;
            // 0x25968c: 0x8f86cc68  lw          $a2, -0x3398($gp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259670;
        }
    }
    ctx->pc = 0x259690u;
    // 0x259690: 0x8f82cc6c  lw          $v0, -0x3394($gp)
    ctx->pc = 0x259690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954092)));
    // 0x259694: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x259694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_259698:
    // 0x259698: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x259698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25969c: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x25969Cu;
    {
        const bool branch_taken_0x25969c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2596A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25969Cu;
        // 0x2596a0: 0x26320560  addiu       $s2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25969c) {
            ctx->pc = 0x2596C8u;
            goto label_2596c8;
        }
    }
    ctx->pc = 0x2596A4u;
    // 0x2596a4: 0x8f86cc68  lw          $a2, -0x3398($gp)
    ctx->pc = 0x2596a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
label_2596a8:
    // 0x2596a8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2596a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2596ac: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x2596acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2596b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2596b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596b4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2596b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2596b8: 0xc08491e  jal         func_212478
    ctx->pc = 0x2596B8u;
    SET_GPR_U32(ctx, 31, 0x2596C0u);
    ctx->pc = 0x2596BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596B8u;
    // 0x2596bc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2596B8u, 0x2596C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596C0u;
label_2596c0:
    // 0x2596c0: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2596C0u;
    {
        const bool branch_taken_0x2596c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2596C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596C0u;
        // 0x2596c4: 0x8f86cc68  lw          $a2, -0x3398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596c0) {
            ctx->pc = 0x2596A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2596a8;
        }
    }
    ctx->pc = 0x2596C8u;
label_2596c8:
    // 0x2596c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2596c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596cc: 0x0  nop
    ctx->pc = 0x2596ccu;
    // NOP
label_2596d0:
    // 0x2596d0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2596d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2596d4: 0x24c30023  addiu       $v1, $a2, 0x23
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 35));
    // 0x2596d8: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2596d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2596dc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2596dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2596e0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2596e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2596e4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2596e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2596e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2596e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2596ec: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x2596ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x2596f0: 0x28c40005  slti        $a0, $a2, 0x5
    ctx->pc = 0x2596f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2596f4: 0x78a20050  lq          $v0, 0x50($a1)
    ctx->pc = 0x2596f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2596f8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2596F8u;
    {
        const bool branch_taken_0x2596f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2596FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596F8u;
        // 0x2596fc: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596f8) {
            ctx->pc = 0x2596D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2596d0;
        }
    }
    ctx->pc = 0x259700u;
    // 0x259700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x259700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259704: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x259704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259708: 0x26280480  addiu       $t0, $s1, 0x480
    ctx->pc = 0x259708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x25970c: 0x26270490  addiu       $a3, $s1, 0x490
    ctx->pc = 0x25970cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_259710:
    // 0x259710: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x259710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x259714: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x259714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x259718: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x259718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25971c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25971cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x259720: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x259720u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x259724: 0x28a40028  slti        $a0, $a1, 0x28
    ctx->pc = 0x259724u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x259728: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x259728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25972c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x25972cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x259730: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x259730u;
    {
        const bool branch_taken_0x259730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x259734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259730u;
        // 0x259734: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259730) {
            ctx->pc = 0x259710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259710;
        }
    }
    ctx->pc = 0x259738u;
    // 0x259738: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x259738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25973c:
    // 0x25973c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x25973cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x259740: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x259740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259744: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x259744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x259748: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x259748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25974c: 0x3e00008  jr          $ra
    ctx->pc = 0x25974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25974Cu;
        // 0x259750: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25974Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259754u;
    // 0x259754: 0x0  nop
    ctx->pc = 0x259754u;
    // NOP
    ctx->pc = 0x259758u;
}
