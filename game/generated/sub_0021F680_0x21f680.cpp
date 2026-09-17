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

// Function: sub_0021F680
// Address: 0x21f680 - 0x21f850
void sub_0021F680_0x21f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F680_0x21f680");
#endif

    switch (ctx->pc) {
        case 0x21f6b4u: goto label_21f6b4;
        case 0x21f6c0u: goto label_21f6c0;
        case 0x21f6c8u: goto label_21f6c8;
        case 0x21f720u: goto label_21f720;
        case 0x21f778u: goto label_21f778;
        case 0x21f7b0u: goto label_21f7b0;
        case 0x21f7d8u: goto label_21f7d8;
        case 0x21f7e4u: goto label_21f7e4;
        case 0x21f7f4u: goto label_21f7f4;
        case 0x21f7fcu: goto label_21f7fc;
        case 0x21f808u: goto label_21f808;
        case 0x21f810u: goto label_21f810;
        case 0x21f820u: goto label_21f820;
        default: break;
    }

    ctx->pc = 0x21f680u;

    // 0x21f680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f688: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21f688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f68c: 0x3c049933  lui         $a0, 0x9933
    ctx->pc = 0x21f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39219 << 16));
    // 0x21f690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f694: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x21f694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x21f698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f69c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21f6a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21f6a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21f6ac: 0xc087d98  jal         func_21F660
    ctx->pc = 0x21F6ACu;
    SET_GPR_U32(ctx, 31, 0x21F6B4u);
    ctx->pc = 0x21F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6ACu;
    // 0x21f6b0: 0x3c140015  lui         $s4, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F660u, 0x21F6ACu, 0x21F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6B4u;
label_21f6b4:
    // 0x21f6b4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x21f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x21f6b8: 0x26935c90  addiu       $s3, $s4, 0x5C90
    ctx->pc = 0x21f6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 23696));
    // 0x21f6bc: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x21f6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21f6c0:
    // 0x21f6c0: 0xc087d9a  jal         func_21F668
    ctx->pc = 0x21F6C0u;
    SET_GPR_U32(ctx, 31, 0x21F6C8u);
    ctx->pc = 0x21F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F668u, 0x21F6C0u, 0x21F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6C8u;
label_21f6c8:
    // 0x21f6c8: 0x8f83a480  lw          $v1, -0x5B80($gp)
    ctx->pc = 0x21f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943872)));
    // 0x21f6cc: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x21f6ccu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x21f6d0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x21f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21f6d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21f6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21f6d8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x21f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x21f6dc: 0x2a060100  slti        $a2, $s0, 0x100
    ctx->pc = 0x21f6dcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x21f6e0: 0x2810  mfhi        $a1
    ctx->pc = 0x21f6e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x21f6e4: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x21f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x21f6e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21f6ec: 0xaf83a480  sw          $v1, -0x5B80($gp)
    ctx->pc = 0x21f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943872), GPR_U32(ctx, 3));
    // 0x21f6f0: 0x9782a480  lhu         $v0, -0x5B80($gp)
    ctx->pc = 0x21f6f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943872)));
    // 0x21f6f4: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x21F6F4u;
    {
        const bool branch_taken_0x21f6f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6F4u;
        // 0x21f6f8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6f4) {
            ctx->pc = 0x21F6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f6c0;
        }
    }
    ctx->pc = 0x21F6FCu;
    // 0x21f6fc: 0x26825c90  addiu       $v0, $s4, 0x5C90
    ctx->pc = 0x21f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 23696));
    // 0x21f700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21f700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f704: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x21f704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x21f708: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21f708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f70c: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x21f70cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x21f710: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x21f710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21f714: 0xaf84a480  sw          $a0, -0x5B80($gp)
    ctx->pc = 0x21f714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943872), GPR_U32(ctx, 4));
    // 0x21f718: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x21f718u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21f71c: 0x9787a480  lhu         $a3, -0x5B80($gp)
    ctx->pc = 0x21f71cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943872)));
label_21f720:
    // 0x21f720: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x21f720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21f724: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x21f724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21f728: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21f728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21f72c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x21f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21f730: 0x28a40028  slti        $a0, $a1, 0x28
    ctx->pc = 0x21f730u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x21f734: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x21f734u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f738: 0x1012  mflo        $v0
    ctx->pc = 0x21f738u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x21f73c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21f740: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21F740u;
    {
        const bool branch_taken_0x21f740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F740u;
        // 0x21f744: 0xa46201b0  sh          $v0, 0x1B0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 432), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f740) {
            ctx->pc = 0x21F720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f720;
        }
    }
    ctx->pc = 0x21F748u;
    // 0x21f748: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x21f748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x21f74c: 0x9784a480  lhu         $a0, -0x5B80($gp)
    ctx->pc = 0x21f74cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294943872)));
    // 0x21f750: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21f754: 0x26835c90  addiu       $v1, $s4, 0x5C90
    ctx->pc = 0x21f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 23696));
    // 0x21f758: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x21f758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x21f75c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x21f75cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f760: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21f764: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x21f764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f768: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x21f768u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f76c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f770: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x21f770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x21f774: 0x0  nop
    ctx->pc = 0x21f774u;
    // NOP
label_21f778:
    // 0x21f778: 0x24a20028  addiu       $v0, $a1, 0x28
    ctx->pc = 0x21f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x21f77c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x21f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21f780: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x21f780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21f784: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21f784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21f788: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x21f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21f78c: 0x28a40028  slti        $a0, $a1, 0x28
    ctx->pc = 0x21f78cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x21f790: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x21f790u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f794: 0x1012  mflo        $v0
    ctx->pc = 0x21f794u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x21f798: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21f79c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21F79Cu;
    {
        const bool branch_taken_0x21f79c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F79Cu;
        // 0x21f7a0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f79c) {
            ctx->pc = 0x21F778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f778;
        }
    }
    ctx->pc = 0x21F7A4u;
    // 0x21f7a4: 0xaf80a480  sw          $zero, -0x5B80($gp)
    ctx->pc = 0x21f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943872), GPR_U32(ctx, 0));
    // 0x21f7a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7ac: 0x2783c968  addiu       $v1, $gp, -0x3698
    ctx->pc = 0x21f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953320));
label_21f7b0:
    // 0x21f7b0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x21f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21f7b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21f7b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f7bc: 0x0  nop
    ctx->pc = 0x21f7bcu;
    // NOP
    // 0x21f7c0: 0x0  nop
    ctx->pc = 0x21f7c0u;
    // NOP
    // 0x21f7c4: 0x1a00fffa  blez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21F7C4u;
    {
        const bool branch_taken_0x21f7c4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x21F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7C4u;
        // 0x21f7c8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7c4) {
            ctx->pc = 0x21F7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f7b0;
        }
    }
    ctx->pc = 0x21F7CCu;
    // 0x21f7cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21f7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7d4: 0x0  nop
    ctx->pc = 0x21f7d4u;
    // NOP
label_21f7d8:
    // 0x21f7d8: 0x26855c90  addiu       $a1, $s4, 0x5C90
    ctx->pc = 0x21f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 23696));
    // 0x21f7dc: 0xc0c4dfe  jal         func_3137F8
    ctx->pc = 0x21F7DCu;
    SET_GPR_U32(ctx, 31, 0x21F7E4u);
    ctx->pc = 0x21F7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7DCu;
    // 0x21f7e0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3137F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3137F8u, 0x21F7DCu, 0x21F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7E4u;
label_21f7e4:
    // 0x21f7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7e8: 0x2785c968  addiu       $a1, $gp, -0x3698
    ctx->pc = 0x21f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953320));
    // 0x21f7ec: 0xc0c4e12  jal         func_313848
    ctx->pc = 0x21F7ECu;
    SET_GPR_U32(ctx, 31, 0x21F7F4u);
    ctx->pc = 0x21F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7ECu;
    // 0x21f7f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313848u, 0x21F7ECu, 0x21F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7F4u;
label_21f7f4:
    // 0x21f7f4: 0xc087d9a  jal         func_21F668
    ctx->pc = 0x21F7F4u;
    SET_GPR_U32(ctx, 31, 0x21F7FCu);
    ctx->pc = 0x21F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F668u, 0x21F7F4u, 0x21F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7FCu;
label_21f7fc:
    // 0x21f7fc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x21f7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f800: 0xc0c4e26  jal         func_313898
    ctx->pc = 0x21F800u;
    SET_GPR_U32(ctx, 31, 0x21F808u);
    ctx->pc = 0x21F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F800u;
    // 0x21f804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313898u, 0x21F800u, 0x21F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F808u;
label_21f808:
    // 0x21f808: 0xc087d9a  jal         func_21F668
    ctx->pc = 0x21F808u;
    SET_GPR_U32(ctx, 31, 0x21F810u);
    ctx->pc = 0x21F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F668u, 0x21F808u, 0x21F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F810u;
label_21f810:
    // 0x21f810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21f814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21f818: 0xc0c4e34  jal         func_3138D0
    ctx->pc = 0x21F818u;
    SET_GPR_U32(ctx, 31, 0x21F820u);
    ctx->pc = 0x21F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F818u;
    // 0x21f81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3138D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3138D0u, 0x21F818u, 0x21F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F820u;
label_21f820:
    // 0x21f820: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x21f820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x21f824: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21F824u;
    {
        const bool branch_taken_0x21f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F824u;
        // 0x21f828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f824) {
            ctx->pc = 0x21F7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f7d8;
        }
    }
    ctx->pc = 0x21F82Cu;
    // 0x21f82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f834: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f838: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21f838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f83c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21f83cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f840: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21f840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f844: 0x3e00008  jr          $ra
    ctx->pc = 0x21F844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F844u;
        // 0x21f848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F84Cu;
    // 0x21f84c: 0x0  nop
    ctx->pc = 0x21f84cu;
    // NOP
    ctx->pc = 0x21f850u;
}
