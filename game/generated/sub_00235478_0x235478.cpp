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

// Function: sub_00235478
// Address: 0x235478 - 0x235790
void sub_00235478_0x235478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235478_0x235478");
#endif

    switch (ctx->pc) {
        case 0x235554u: goto label_235554;
        case 0x235590u: goto label_235590;
        case 0x23559cu: goto label_23559c;
        case 0x2355b0u: goto label_2355b0;
        case 0x2355b8u: goto label_2355b8;
        case 0x235690u: goto label_235690;
        case 0x2356dcu: goto label_2356dc;
        case 0x235730u: goto label_235730;
        case 0x235750u: goto label_235750;
        default: break;
    }

    ctx->pc = 0x235478u;

    // 0x235478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23547c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23548c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235490: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x235494: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x235494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x235498: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x235498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23549c: 0x94a70166  lhu         $a3, 0x166($a1)
    ctx->pc = 0x23549cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 358)));
    // 0x2354a0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2354a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2354a4: 0x54e30004  bnel        $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2354A4u;
    {
        const bool branch_taken_0x2354a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2354a4) {
            ctx->pc = 0x2354A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2354A4u;
            // 0x2354a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2354B8u;
            goto label_2354b8;
        }
    }
    ctx->pc = 0x2354ACu;
    // 0x2354ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2354acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2354B0u;
    {
        const bool branch_taken_0x2354b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354B0u;
        // 0x2354b4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354b0) {
            ctx->pc = 0x2354BCu;
            goto label_2354bc;
        }
    }
    ctx->pc = 0x2354B8u;
label_2354b8:
    // 0x2354b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2354b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2354bc:
    // 0x2354bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2354bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2354c0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2354c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2354c4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2354c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2354c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2354C8u;
    {
        const bool branch_taken_0x2354c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354C8u;
        // 0x2354cc: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354c8) {
            ctx->pc = 0x2354E8u;
            goto label_2354e8;
        }
    }
    ctx->pc = 0x2354D0u;
    // 0x2354d0: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2354D0u;
    {
        const bool branch_taken_0x2354d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2354d0) {
            ctx->pc = 0x2354E8u;
            goto label_2354e8;
        }
    }
    ctx->pc = 0x2354D8u;
    // 0x2354d8: 0x94c20166  lhu         $v0, 0x166($a2)
    ctx->pc = 0x2354d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 358)));
    // 0x2354dc: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2354DCu;
    {
        const bool branch_taken_0x2354dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2354dc) {
            ctx->pc = 0x2354E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2354DCu;
            // 0x2354e0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2354E4u;
            goto label_2354e4;
        }
    }
    ctx->pc = 0x2354E4u;
label_2354e4:
    // 0x2354e4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2354e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2354e8:
    // 0x2354e8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2354E8u;
    {
        const bool branch_taken_0x2354e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354E8u;
        // 0x2354ec: 0x85102a  slt         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354e8) {
            ctx->pc = 0x235560u;
            goto label_235560;
        }
    }
    ctx->pc = 0x2354F0u;
    // 0x2354f0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2354f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2354f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2354F4u;
    {
        const bool branch_taken_0x2354f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354F4u;
        // 0x2354f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354f4) {
            ctx->pc = 0x235538u;
            goto label_235538;
        }
    }
    ctx->pc = 0x2354FCu;
    // 0x2354fc: 0x9222018a  lbu         $v0, 0x18A($s1)
    ctx->pc = 0x2354fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 394)));
    // 0x235500: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x235500u;
    {
        const bool branch_taken_0x235500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235500) {
            ctx->pc = 0x235504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235500u;
            // 0x235504: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235534u;
            goto label_235534;
        }
    }
    ctx->pc = 0x235508u;
    // 0x235508: 0x92220187  lbu         $v0, 0x187($s1)
    ctx->pc = 0x235508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
    // 0x23550c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23550Cu;
    {
        const bool branch_taken_0x23550c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23550c) {
            ctx->pc = 0x235510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23550Cu;
            // 0x235510: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235534u;
            goto label_235534;
        }
    }
    ctx->pc = 0x235514u;
    // 0x235514: 0x92420187  lbu         $v0, 0x187($s2)
    ctx->pc = 0x235514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 391)));
    // 0x235518: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x235518u;
    {
        const bool branch_taken_0x235518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235518) {
            ctx->pc = 0x23551Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235518u;
            // 0x23551c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235534u;
            goto label_235534;
        }
    }
    ctx->pc = 0x235520u;
    // 0x235520: 0x92420189  lbu         $v0, 0x189($s2)
    ctx->pc = 0x235520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 393)));
    // 0x235524: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x235524u;
    {
        const bool branch_taken_0x235524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235524) {
            ctx->pc = 0x235528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235524u;
            // 0x235528: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235534u;
            goto label_235534;
        }
    }
    ctx->pc = 0x23552Cu;
    // 0x23552c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235530: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x235530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_235534:
    // 0x235534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_235538:
    // 0x235538: 0x14820089  bne         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x235538u;
    {
        const bool branch_taken_0x235538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235538u;
        // 0x23553c: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235538) {
            ctx->pc = 0x235760u;
            goto label_235760;
        }
    }
    ctx->pc = 0x235540u;
    // 0x235540: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x235544: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x235544u;
    {
        const bool branch_taken_0x235544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235544) {
            ctx->pc = 0x235548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235544u;
            // 0x235548: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235764u;
            goto label_235764;
        }
    }
    ctx->pc = 0x23554Cu;
    // 0x23554c: 0xc08c686  jal         func_231A18
    ctx->pc = 0x23554Cu;
    SET_GPR_U32(ctx, 31, 0x235554u);
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x23554Cu, 0x235554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235554u;
label_235554:
    // 0x235554: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x235554u;
    {
        const bool branch_taken_0x235554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235554u;
        // 0x235558: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235554) {
            ctx->pc = 0x235760u;
            goto label_235760;
        }
    }
    ctx->pc = 0x23555Cu;
    // 0x23555c: 0x0  nop
    ctx->pc = 0x23555cu;
    // NOP
label_235560:
    // 0x235560: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x235560u;
    {
        const bool branch_taken_0x235560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235560u;
        // 0x235564: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235560) {
            ctx->pc = 0x235760u;
            goto label_235760;
        }
    }
    ctx->pc = 0x235568u;
    // 0x235568: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x235568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23556c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x23556Cu;
    {
        const bool branch_taken_0x23556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23556Cu;
        // 0x235570: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23556c) {
            ctx->pc = 0x235760u;
            goto label_235760;
        }
    }
    ctx->pc = 0x235574u;
    // 0x235574: 0x5482006a  bnel        $a0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x235574u;
    {
        const bool branch_taken_0x235574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x235574) {
            ctx->pc = 0x235578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235574u;
            // 0x235578: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235720u;
            goto label_235720;
        }
    }
    ctx->pc = 0x23557Cu;
    // 0x23557c: 0x26140060  addiu       $s4, $s0, 0x60
    ctx->pc = 0x23557cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x235580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x235584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235588: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x235588u;
    SET_GPR_U32(ctx, 31, 0x235590u);
    ctx->pc = 0x23558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235588u;
    // 0x23558c: 0x26130070  addiu       $s3, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x235588u, 0x235590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235590u;
label_235590:
    // 0x235590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235594: 0xc08c208  jal         func_230820
    ctx->pc = 0x235594u;
    SET_GPR_U32(ctx, 31, 0x23559Cu);
    ctx->pc = 0x235598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235594u;
    // 0x235598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x235594u, 0x23559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23559Cu;
label_23559c:
    // 0x23559c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x23559cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2355a0: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x2355a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2355a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355a8: 0xc08dcf2  jal         func_2373C8
    ctx->pc = 0x2355A8u;
    SET_GPR_U32(ctx, 31, 0x2355B0u);
    ctx->pc = 0x2355ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355A8u;
    // 0x2355ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2373C8u, 0x2355A8u, 0x2355B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355B0u;
label_2355b0:
    // 0x2355b0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2355B0u;
    SET_GPR_U32(ctx, 31, 0x2355B8u);
    ctx->pc = 0x2355B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355B0u;
    // 0x2355b4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2355B0u, 0x2355B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355B8u;
label_2355b8:
    // 0x2355b8: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x2355b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x2355bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2355bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2355c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2355c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2355c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2355c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2355c8: 0x922201bf  lbu         $v0, 0x1BF($s1)
    ctx->pc = 0x2355c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 447)));
    // 0x2355cc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2355ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2355d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2355d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2355d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2355d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2355d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2355d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2355dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2355dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2355e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2355e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2355e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2355E4u;
    {
        const bool branch_taken_0x2355e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2355e4) {
            ctx->pc = 0x235618u;
            goto label_235618;
        }
    }
    ctx->pc = 0x2355ECu;
    // 0x2355ec: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2355ECu;
    {
        const bool branch_taken_0x2355ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2355ec) {
            ctx->pc = 0x2355F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2355ECu;
            // 0x2355f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235600u;
            goto label_235600;
        }
    }
    ctx->pc = 0x2355F4u;
    // 0x2355f4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2355f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2355F8u;
    {
        const bool branch_taken_0x2355f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2355FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355F8u;
        // 0x2355fc: 0x24422aaa  addiu       $v0, $v0, 0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10922));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355f8) {
            ctx->pc = 0x235650u;
            goto label_235650;
        }
    }
    ctx->pc = 0x235600u;
label_235600:
    // 0x235600: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x235600u;
    {
        const bool branch_taken_0x235600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x235600) {
            ctx->pc = 0x235604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235600u;
            // 0x235604: 0x96030050  lhu         $v1, 0x50($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235658u;
            goto label_235658;
        }
    }
    ctx->pc = 0x235608u;
    // 0x235608: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x235608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x23560c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23560Cu;
    {
        const bool branch_taken_0x23560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23560Cu;
        // 0x235610: 0x2442d556  addiu       $v0, $v0, -0x2AAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23560c) {
            ctx->pc = 0x235650u;
            goto label_235650;
        }
    }
    ctx->pc = 0x235614u;
    // 0x235614: 0x0  nop
    ctx->pc = 0x235614u;
    // NOP
label_235618:
    // 0x235618: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x235618u;
    {
        const bool branch_taken_0x235618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235618u;
        // 0x23561c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235618) {
            ctx->pc = 0x235638u;
            goto label_235638;
        }
    }
    ctx->pc = 0x235620u;
    // 0x235620: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x235620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x235624: 0x3401aaaa  ori         $at, $zero, 0xAAAA
    ctx->pc = 0x235624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43690);
    // 0x235628: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x235628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x23562c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23562Cu;
    {
        const bool branch_taken_0x23562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23562Cu;
        // 0x235630: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23562c) {
            ctx->pc = 0x235654u;
            goto label_235654;
        }
    }
    ctx->pc = 0x235634u;
    // 0x235634: 0x0  nop
    ctx->pc = 0x235634u;
    // NOP
label_235638:
    // 0x235638: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235638u;
    {
        const bool branch_taken_0x235638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235638u;
        // 0x23563c: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235638) {
            ctx->pc = 0x235648u;
            goto label_235648;
        }
    }
    ctx->pc = 0x235640u;
    // 0x235640: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235640u;
    {
        const bool branch_taken_0x235640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235640u;
        // 0x235644: 0x24425555  addiu       $v0, $v0, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235640) {
            ctx->pc = 0x235650u;
            goto label_235650;
        }
    }
    ctx->pc = 0x235648u;
label_235648:
    // 0x235648: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x235648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23564c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x23564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_235650:
    // 0x235650: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x235650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_235654:
    // 0x235654: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x235654u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_235658:
    // 0x235658: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x235658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x23565c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23565cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x235660: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235660u;
    {
        const bool branch_taken_0x235660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235660u;
        // 0x235664: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235660) {
            ctx->pc = 0x235678u;
            goto label_235678;
        }
    }
    ctx->pc = 0x235668u;
    // 0x235668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x235668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23566c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23566cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x235670: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x235670u;
    {
        const bool branch_taken_0x235670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235670u;
        // 0x235674: 0xc7808634  lwc1        $f0, -0x79CC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235670) {
            ctx->pc = 0x235688u;
            goto label_235688;
        }
    }
    ctx->pc = 0x235678u;
label_235678:
    // 0x235678: 0xc7818638  lwc1        $f1, -0x79C8($gp)
    ctx->pc = 0x235678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23567c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_235688:
    // 0x235688: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x235688u;
    SET_GPR_U32(ctx, 31, 0x235690u);
    ctx->pc = 0x23568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235688u;
    // 0x23568c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x235688u, 0x235690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235690u;
label_235690:
    // 0x235690: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x235690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x235694: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235698: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x235698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x23569c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x23569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2356a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2356a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2356a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2356A4u;
    {
        const bool branch_taken_0x2356a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2356A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A4u;
        // 0x2356a8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a4) {
            ctx->pc = 0x2356C0u;
            goto label_2356c0;
        }
    }
    ctx->pc = 0x2356ACu;
    // 0x2356ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2356acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2356b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2356b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2356b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2356B4u;
    {
        const bool branch_taken_0x2356b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356B4u;
        // 0x2356b8: 0xc780863c  lwc1        $f0, -0x79C4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356b4) {
            ctx->pc = 0x2356D4u;
            goto label_2356d4;
        }
    }
    ctx->pc = 0x2356BCu;
    // 0x2356bc: 0x0  nop
    ctx->pc = 0x2356bcu;
    // NOP
label_2356c0:
    // 0x2356c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2356c4: 0xc7818640  lwc1        $f1, -0x79C0($gp)
    ctx->pc = 0x2356c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2356c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2356cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2356ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2356d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2356d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2356d4:
    // 0x2356d4: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2356D4u;
    SET_GPR_U32(ctx, 31, 0x2356DCu);
    ctx->pc = 0x2356D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356D4u;
    // 0x2356d8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2356D4u, 0x2356DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356DCu;
label_2356dc:
    // 0x2356dc: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x2356dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x2356e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2356e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2356e4: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x2356e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2356e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2356e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2356ec: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x2356ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x2356f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2356f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2356f4: 0xc6030078  lwc1        $f3, 0x78($s0)
    ctx->pc = 0x2356f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2356f8: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x2356f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x2356fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2356fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235700: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x235700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x235704: 0xe6010080  swc1        $f1, 0x80($s0)
    ctx->pc = 0x235704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x235708: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x235708u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x23570c: 0xe6040088  swc1        $f4, 0x88($s0)
    ctx->pc = 0x23570cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x235710: 0xe6020060  swc1        $f2, 0x60($s0)
    ctx->pc = 0x235710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x235714: 0xe604006c  swc1        $f4, 0x6C($s0)
    ctx->pc = 0x235714u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x235718: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x235718u;
    {
        const bool branch_taken_0x235718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235718u;
        // 0x23571c: 0xe6030068  swc1        $f3, 0x68($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235718) {
            ctx->pc = 0x235734u;
            goto label_235734;
        }
    }
    ctx->pc = 0x235720u;
label_235720:
    // 0x235720: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235720u;
    {
        const bool branch_taken_0x235720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x235724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235720u;
        // 0x235724: 0x26140060  addiu       $s4, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235720) {
            ctx->pc = 0x235730u;
            goto label_235730;
        }
    }
    ctx->pc = 0x235728u;
    // 0x235728: 0xc08c686  jal         func_231A18
    ctx->pc = 0x235728u;
    SET_GPR_U32(ctx, 31, 0x235730u);
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x235728u, 0x235730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235730u;
label_235730:
    // 0x235730: 0x26130070  addiu       $s3, $s0, 0x70
    ctx->pc = 0x235730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_235734:
    // 0x235734: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x235734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x235738: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x235738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23573c: 0xc60d0088  lwc1        $f13, 0x88($s0)
    ctx->pc = 0x23573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x235740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x235740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235748: 0xc08cc4e  jal         func_233138
    ctx->pc = 0x235748u;
    SET_GPR_U32(ctx, 31, 0x235750u);
    ctx->pc = 0x23574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235748u;
    // 0x23574c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233138u, 0x235748u, 0x235750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235750u;
label_235750:
    // 0x235750: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x235750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x235754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x235754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235758: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x235758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23575c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23575cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_235760:
    // 0x235760: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x235760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_235764:
    // 0x235764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23576c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x235770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235774: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235778: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23577c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235780: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x235780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x235784: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x235784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x235788: 0x3e00008  jr          $ra
    ctx->pc = 0x235788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235788u;
        // 0x23578c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235790u;
}
