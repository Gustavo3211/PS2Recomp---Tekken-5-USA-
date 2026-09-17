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

// Function: sub_005073D8
// Address: 0x5073d8 - 0x5075d8
void sub_005073D8_0x5073d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005073D8_0x5073d8");
#endif

    switch (ctx->pc) {
        case 0x507468u: goto label_507468;
        case 0x5074a4u: goto label_5074a4;
        case 0x5075a8u: goto label_5075a8;
        default: break;
    }

    ctx->pc = 0x5073d8u;

    // 0x5073d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5073d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5073dc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x5073dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x5073e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x5073e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x5073e4: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x5073e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x5073e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5073e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5073ec: 0x24637740  addiu       $v1, $v1, 0x7740
    ctx->pc = 0x5073ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30528));
    // 0x5073f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5073f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5073f4: 0x26c7c55c  addiu       $a3, $s6, -0x3AA4
    ctx->pc = 0x5073f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952284));
    // 0x5073f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5073f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5073fc: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5073fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x507400: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x507400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x507404: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x507404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x507408: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x507408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50740c: 0x24a8c574  addiu       $t0, $a1, -0x3A8C
    ctx->pc = 0x50740cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952308));
    // 0x507410: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x507410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x507414: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x507414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x507418: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x507418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x50741c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50741cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x507420: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x507420u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x577740u));
    // 0x507424: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x507424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x507428: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x507428u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC55Cu));
    // 0x50742c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50742cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC574u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC574u, _value); } while (0);
    // 0x507430: 0x86202b  sltu        $a0, $a0, $a2
    ctx->pc = 0x507430u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x507434: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x507434u;
    {
        const bool branch_taken_0x507434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x507438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507434u;
        // 0x507438: 0xaca2c570  sw          $v0, -0x3A90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294952304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507434) {
            ctx->pc = 0x507448u;
            goto label_507448;
        }
    }
    ctx->pc = 0x50743Cu;
    // 0x50743c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x50743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x507440: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x507440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x507444: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x507444u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_507448:
    // 0x507448: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x507448u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50744c: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x50744cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
    // 0x507450: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x507450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507454: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x507454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507458: 0x26b1c560  addiu       $s1, $s5, -0x3AA0
    ctx->pc = 0x507458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952288));
    // 0x50745c: 0x2692c564  addiu       $s2, $s4, -0x3A9C
    ctx->pc = 0x50745cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952292));
    // 0x507460: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x507460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507464: 0x0  nop
    ctx->pc = 0x507464u;
    // NOP
label_507468:
    // 0x507468: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x507468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50746c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x50746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x507470: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x507470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x507474: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x507474u;
    {
        const bool branch_taken_0x507474 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x507478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507474u;
        // 0x507478: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507474) {
            ctx->pc = 0x5074B0u;
            goto label_5074b0;
        }
    }
    ctx->pc = 0x50747Cu;
    // 0x50747c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50747cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507480: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x507480u;
    {
        const bool branch_taken_0x507480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x507480) {
            ctx->pc = 0x507484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x507480u;
            // 0x507484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5075B0u;
            goto label_5075b0;
        }
    }
    ctx->pc = 0x507488u;
    // 0x507488: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x507488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50748c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x507490: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x507490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x507494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507498: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50749c: 0xc141c4e  jal         func_507138
    ctx->pc = 0x50749Cu;
    SET_GPR_U32(ctx, 31, 0x5074A4u);
    ctx->pc = 0x5074A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50749Cu;
    // 0x5074a0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507138u, 0x50749Cu, 0x5074A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5074A4u;
label_5074a4:
    // 0x5074a4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x5074A4u;
    {
        const bool branch_taken_0x5074a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5074A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5074A4u;
        // 0x5074a8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5074a4) {
            ctx->pc = 0x507468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_507468;
        }
    }
    ctx->pc = 0x5074ACu;
    // 0x5074ac: 0x0  nop
    ctx->pc = 0x5074acu;
    // NOP
label_5074b0:
    // 0x5074b0: 0x2688c564  addiu       $t0, $s4, -0x3A9C
    ctx->pc = 0x5074b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952292));
    // 0x5074b4: 0x26c9c55c  addiu       $t1, $s6, -0x3AA4
    ctx->pc = 0x5074b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952284));
    // 0x5074b8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x5074b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5074bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x5074bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x5074c0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x5074c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5074c4: 0x6a3824  and         $a3, $v1, $t2
    ctx->pc = 0x5074c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x5074c8: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x5074c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x5074cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x5074CCu;
    {
        const bool branch_taken_0x5074cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5074D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5074CCu;
        // 0x5074d0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5074cc) {
            ctx->pc = 0x5074E8u;
            goto label_5074e8;
        }
    }
    ctx->pc = 0x5074D4u;
    // 0x5074d4: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x5074d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x5074d8: 0x34e20005  ori         $v0, $a3, 0x5
    ctx->pc = 0x5074d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5);
    // 0x5074dc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x5074dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x5074e0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x5074e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5074e4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x5074e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_5074e8:
    // 0x5074e8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x5074e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5074ec: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x5074ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x5074f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5074f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5074f4: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x5074f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x5074f8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x5074f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x5074fc: 0x4600025  bltz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x5074FCu;
    {
        const bool branch_taken_0x5074fc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x507500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5074FCu;
        // 0x507500: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5074fc) {
            ctx->pc = 0x507594u;
            goto label_507594;
        }
    }
    ctx->pc = 0x507504u;
    // 0x507504: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x507504u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x507508: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x507508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x50750c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x507510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x507510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x507514: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x507514u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x507518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50751c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x50751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x507520: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507524: 0x4a0001b  bltz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x507524u;
    {
        const bool branch_taken_0x507524 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x507528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507524u;
        // 0x507528: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507524) {
            ctx->pc = 0x507594u;
            goto label_507594;
        }
    }
    ctx->pc = 0x50752Cu;
    // 0x50752c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50752cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x507530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507534: 0xa72023  subu        $a0, $a1, $a3
    ctx->pc = 0x507534u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x507538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x507538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50753c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x50753cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x507540: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x507540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x507544: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507548: 0x4800012  bltz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x507548u;
    {
        const bool branch_taken_0x507548 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x50754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507548u;
        // 0x50754c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507548) {
            ctx->pc = 0x507594u;
            goto label_507594;
        }
    }
    ctx->pc = 0x507550u;
    // 0x507550: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x507550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x507554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x507558: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x507558u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x50755c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x507560: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x507560u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x507564: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x507564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x507568: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x507568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50756c: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x50756Cu;
    {
        const bool branch_taken_0x50756c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x507570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50756Cu;
        // 0x507570: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50756c) {
            ctx->pc = 0x507594u;
            goto label_507594;
        }
    }
    ctx->pc = 0x507574u;
    // 0x507574: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x507574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x507578: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x507578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50757c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x50757cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x507580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x507580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x507584: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x507584u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x507588: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x507588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x50758c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x507590: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x507590u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_507594:
    // 0x507594: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x507594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x507598: 0x8ea3c560  lw          $v1, -0x3AA0($s5)
    ctx->pc = 0x507598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952288)));
    // 0x50759c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5075a0: 0xc141c4e  jal         func_507138
    ctx->pc = 0x5075A0u;
    SET_GPR_U32(ctx, 31, 0x5075A8u);
    ctx->pc = 0x5075A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5075A0u;
    // 0x5075a4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507138u, 0x5075A0u, 0x5075A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5075A8u;
label_5075a8:
    // 0x5075a8: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x5075A8u;
    {
        const bool branch_taken_0x5075a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5075ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5075A8u;
        // 0x5075ac: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5075a8) {
            ctx->pc = 0x507468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_507468;
        }
    }
    ctx->pc = 0x5075B0u;
label_5075b0:
    // 0x5075b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5075b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5075b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5075b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5075b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5075b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5075bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5075bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5075c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5075c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5075c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5075c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5075c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x5075c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5075cc: 0x3e00008  jr          $ra
    ctx->pc = 0x5075CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5075D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5075CCu;
        // 0x5075d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5075CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5075D4u;
    // 0x5075d4: 0x0  nop
    ctx->pc = 0x5075d4u;
    // NOP
    ctx->pc = 0x5075d8u;
}
