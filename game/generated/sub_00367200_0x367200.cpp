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

// Function: sub_00367200
// Address: 0x367200 - 0x3674b0
void sub_00367200_0x367200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367200_0x367200");
#endif

    switch (ctx->pc) {
        case 0x367230u: goto label_367230;
        case 0x3672c0u: goto label_3672c0;
        case 0x36737cu: goto label_36737c;
        case 0x367420u: goto label_367420;
        case 0x367440u: goto label_367440;
        default: break;
    }

    ctx->pc = 0x367200u;

    // 0x367200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x367204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x367204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x367208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36720c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x367210: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x367210u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x367214: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x367214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x367218: 0x8ce7a810  lw          $a3, -0x57F0($a3)
    ctx->pc = 0x367218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944784)));
    // 0x36721c: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x36721cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x367220: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x367220u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x367224: 0x8d4aa814  lw          $t2, -0x57EC($t2)
    ctx->pc = 0x367224u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294944788)));
    // 0x367228: 0x50ea009d  beql        $a3, $t2, . + 4 + (0x9D << 2)
    ctx->pc = 0x367228u;
    {
        const bool branch_taken_0x367228 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x367228) {
            ctx->pc = 0x36722Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367228u;
            // 0x36722c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3674A0u;
            goto label_3674a0;
        }
    }
    ctx->pc = 0x367230u;
label_367230:
    // 0x367230: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x367230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x367234: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x367234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x367238: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x367238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x36723c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36723cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x367240: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x367240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x367244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x367244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x367248: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x367248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36724c: 0x3408a81c  ori         $t0, $zero, 0xA81C
    ctx->pc = 0x36724cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43036);
    // 0x367250: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x367250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x367254: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x367254u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x367258: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x367258u;
    {
        const bool branch_taken_0x367258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367258u;
        // 0x36725c: 0x28820043  slti        $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x367258) {
            ctx->pc = 0x367400u;
            goto label_367400;
        }
    }
    ctx->pc = 0x367260u;
    // 0x367260: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x367260u;
    {
        const bool branch_taken_0x367260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367260u;
        // 0x367264: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367260) {
            ctx->pc = 0x367280u;
            goto label_367280;
        }
    }
    ctx->pc = 0x367268u;
    // 0x367268: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x367268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36726c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36726Cu;
    {
        const bool branch_taken_0x36726c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x367270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36726Cu;
        // 0x367270: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36726c) {
            ctx->pc = 0x367290u;
            goto label_367290;
        }
    }
    ctx->pc = 0x367274u;
    // 0x367274: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x367274u;
    {
        const bool branch_taken_0x367274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367274u;
        // 0x367278: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367274) {
            ctx->pc = 0x367468u;
            goto label_367468;
        }
    }
    ctx->pc = 0x36727Cu;
    // 0x36727c: 0x0  nop
    ctx->pc = 0x36727cu;
    // NOP
label_367280:
    // 0x367280: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x367280u;
    {
        const bool branch_taken_0x367280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x367284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367280u;
        // 0x367284: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367280) {
            ctx->pc = 0x367428u;
            goto label_367428;
        }
    }
    ctx->pc = 0x367288u;
    // 0x367288: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x367288u;
    {
        const bool branch_taken_0x367288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367288u;
        // 0x36728c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367288) {
            ctx->pc = 0x367468u;
            goto label_367468;
        }
    }
    ctx->pc = 0x367290u;
label_367290:
    // 0x367290: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x367290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x367294: 0x24e3ffc4  addiu       $v1, $a3, -0x3C
    ctx->pc = 0x367294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967236));
    // 0x367298: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x367298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x36729c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x36729cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3672a0: 0x10aa0027  beq         $a1, $t2, . + 4 + (0x27 << 2)
    ctx->pc = 0x3672A0u;
    {
        const bool branch_taken_0x3672a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x3672A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672A0u;
        // 0x3672a4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3672a0) {
            ctx->pc = 0x367340u;
            goto label_367340;
        }
    }
    ctx->pc = 0x3672A8u;
    // 0x3672a8: 0x340fa810  ori         $t7, $zero, 0xA810
    ctx->pc = 0x3672a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43024);
    // 0x3672ac: 0x260c0010  addiu       $t4, $s0, 0x10
    ctx->pc = 0x3672acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3672b0: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x3672b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3672b4: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x3672b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3672b8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3672b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3672bc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3672bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3672c0:
    // 0x3672c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3672c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3672c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3672c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3672c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3672cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3672ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3672d0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x3672d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x3672d4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x3672d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3672d8: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x3672d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3672dc: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3672dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3672e0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3672e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3672e4: 0x2463ffbf  addiu       $v1, $v1, -0x41
    ctx->pc = 0x3672e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x3672e8: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x3672e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3672ec: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3672ECu;
    {
        const bool branch_taken_0x3672ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3672F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672ECu;
        // 0x3672f0: 0x22603  sra         $a0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3672ec) {
            ctx->pc = 0x36732Cu;
            goto label_36732c;
        }
    }
    ctx->pc = 0x3672F4u;
    // 0x3672f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3672f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3672f8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3672f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3672fc: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3672FCu;
    {
        const bool branch_taken_0x3672fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3672fc) {
            ctx->pc = 0x367300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3672FCu;
            // 0x367300: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367340u;
            goto label_367340;
        }
    }
    ctx->pc = 0x367304u;
    // 0x367304: 0x148d000a  bne         $a0, $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x367304u;
    {
        const bool branch_taken_0x367304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 13));
        ctx->pc = 0x367308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367304u;
        // 0x367308: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367304) {
            ctx->pc = 0x367330u;
            goto label_367330;
        }
    }
    ctx->pc = 0x36730Cu;
    // 0x36730c: 0xa91026  xor         $v0, $a1, $t1
    ctx->pc = 0x36730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
    // 0x367310: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x367310u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x367314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x367318: 0xa91026  xor         $v0, $a1, $t1
    ctx->pc = 0x367318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
    // 0x36731c: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x36731cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x367320: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x367324: 0xa91026  xor         $v0, $a1, $t1
    ctx->pc = 0x367324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
    // 0x367328: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x367328u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_36732c:
    // 0x36732c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_367330:
    // 0x367330: 0xa91026  xor         $v0, $a1, $t1
    ctx->pc = 0x367330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
    // 0x367334: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x367334u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x367338: 0x14abffe1  bne         $a1, $t3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x367338u;
    {
        const bool branch_taken_0x367338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 11));
        ctx->pc = 0x36733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367338u;
        // 0x36733c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367338) {
            ctx->pc = 0x3672C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3672c0;
        }
    }
    ctx->pc = 0x367340u;
label_367340:
    // 0x367340: 0x15c00015  bnez        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x367340u;
    {
        const bool branch_taken_0x367340 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x367344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367340u;
        // 0x367344: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367340) {
            ctx->pc = 0x367398u;
            goto label_367398;
        }
    }
    ctx->pc = 0x367348u;
    // 0x367348: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x367348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36734c: 0x25050018  addiu       $a1, $t0, 0x18
    ctx->pc = 0x36734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x367350: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x367350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x367354: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x367354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x367358: 0x8d090014  lw          $t1, 0x14($t0)
    ctx->pc = 0x367358u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x36735c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x36735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x367360: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x367360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x367364: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x367364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x367368: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x367368u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x36736c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x36736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x367370: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x367370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x367374: 0xc0d935e  jal         func_364D78
    ctx->pc = 0x367374u;
    SET_GPR_U32(ctx, 31, 0x36737Cu);
    ctx->pc = 0x367378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367374u;
    // 0x367378: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364D78u, 0x367374u, 0x36737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36737Cu;
label_36737c:
    // 0x36737c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x36737cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x367380: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x367380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x367384: 0x8ce7a810  lw          $a3, -0x57F0($a3)
    ctx->pc = 0x367384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944784)));
    // 0x367388: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x367388u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x36738c: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x36738cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x367390: 0x8d4aa814  lw          $t2, -0x57EC($t2)
    ctx->pc = 0x367390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294944788)));
    // 0x367394: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x367394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_367398:
    // 0x367398: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x367398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36739c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x36739cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3673a0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x3673a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x3673a4: 0xac22a810  sw          $v0, -0x57F0($at)
    ctx->pc = 0x3673a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944784), GPR_U32(ctx, 2));
    // 0x3673a8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3673A8u;
    {
        const bool branch_taken_0x3673a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3673a8) {
            ctx->pc = 0x3673BCu;
            goto label_3673bc;
        }
    }
    ctx->pc = 0x3673B0u;
    // 0x3673b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3673b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3673b4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x3673b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x3673b8: 0xac20a810  sw          $zero, -0x57F0($at)
    ctx->pc = 0x3673b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944784), GPR_U32(ctx, 0));
label_3673bc:
    // 0x3673bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3673bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3673c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3673c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3673c4: 0x8c42a810  lw          $v0, -0x57F0($v0)
    ctx->pc = 0x3673c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944784)));
    // 0x3673c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3673c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3673cc: 0x441826  xor         $v1, $v0, $a0
    ctx->pc = 0x3673ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3673d0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x3673d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3673d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3673d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3673d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3673d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3673dc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x3673dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x3673e0: 0xac22a810  sw          $v0, -0x57F0($at)
    ctx->pc = 0x3673e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944784), GPR_U32(ctx, 2));
    // 0x3673e4: 0x5444001e  bnel        $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3673E4u;
    {
        const bool branch_taken_0x3673e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3673e4) {
            ctx->pc = 0x3673E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3673E4u;
            // 0x3673e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367460u;
            goto label_367460;
        }
    }
    ctx->pc = 0x3673ECu;
    // 0x3673ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3673ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3673f0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x3673f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x3673f4: 0xac20a810  sw          $zero, -0x57F0($at)
    ctx->pc = 0x3673f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944784), GPR_U32(ctx, 0));
    // 0x3673f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3673F8u;
    {
        const bool branch_taken_0x3673f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3673FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673F8u;
        // 0x3673fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673f8) {
            ctx->pc = 0x367460u;
            goto label_367460;
        }
    }
    ctx->pc = 0x367400u;
label_367400:
    // 0x367400: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x367400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x367404: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x367404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x367408: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x367408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36740c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x36740cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x367410: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x367410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x367414: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x367414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x367418: 0xc0d93e6  jal         func_364F98
    ctx->pc = 0x367418u;
    SET_GPR_U32(ctx, 31, 0x367420u);
    ctx->pc = 0x36741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367418u;
    // 0x36741c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364F98u, 0x367418u, 0x367420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367420u;
label_367420:
    // 0x367420: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x367420u;
    {
        const bool branch_taken_0x367420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367420) {
            ctx->pc = 0x367440u;
            goto label_367440;
        }
    }
    ctx->pc = 0x367428u;
label_367428:
    // 0x367428: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x367428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x36742c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x36742cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367430: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x367430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367434: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x367434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x367438: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x367438u;
    SET_GPR_U32(ctx, 31, 0x367440u);
    ctx->pc = 0x36743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367438u;
    // 0x36743c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x367438u, 0x367440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367440u;
label_367440:
    // 0x367440: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x367440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x367444: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x367444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x367448: 0x8ce7a810  lw          $a3, -0x57F0($a3)
    ctx->pc = 0x367448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944784)));
    // 0x36744c: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x36744cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x367450: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x367450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x367454: 0x8d4aa814  lw          $t2, -0x57EC($t2)
    ctx->pc = 0x367454u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294944788)));
    // 0x367458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x367458u;
    {
        const bool branch_taken_0x367458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367458u;
        // 0x36745c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367458) {
            ctx->pc = 0x367464u;
            goto label_367464;
        }
    }
    ctx->pc = 0x367460u;
label_367460:
    // 0x367460: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x367460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_367464:
    // 0x367464: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x367464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_367468:
    // 0x367468: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x367468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x36746c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x36746cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x367470: 0xac22a810  sw          $v0, -0x57F0($at)
    ctx->pc = 0x367470u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944784), GPR_U32(ctx, 2));
    // 0x367474: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x367474u;
    {
        const bool branch_taken_0x367474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x367474) {
            ctx->pc = 0x367488u;
            goto label_367488;
        }
    }
    ctx->pc = 0x36747Cu;
    // 0x36747c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x36747cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x367480: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x367480u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x367484: 0xac20a810  sw          $zero, -0x57F0($at)
    ctx->pc = 0x367484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944784), GPR_U32(ctx, 0));
label_367488:
    // 0x367488: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x367488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x36748c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x367490: 0x8c42a810  lw          $v0, -0x57F0($v0)
    ctx->pc = 0x367490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944784)));
    // 0x367494: 0x144aff66  bne         $v0, $t2, . + 4 + (-0x9A << 2)
    ctx->pc = 0x367494u;
    {
        const bool branch_taken_0x367494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x367498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367494u;
        // 0x367498: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367494) {
            ctx->pc = 0x367230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367230;
        }
    }
    ctx->pc = 0x36749Cu;
    // 0x36749c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36749cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3674a0:
    // 0x3674a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3674a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3674a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3674A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3674A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674A4u;
        // 0x3674a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674ACu;
    // 0x3674ac: 0x0  nop
    ctx->pc = 0x3674acu;
    // NOP
    ctx->pc = 0x3674b0u;
}
