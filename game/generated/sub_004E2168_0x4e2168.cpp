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

// Function: sub_004E2168
// Address: 0x4e2168 - 0x4e2298
void sub_004E2168_0x4e2168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2168_0x4e2168");
#endif

    switch (ctx->pc) {
        case 0x4e2168u: goto label_4e2168;
        case 0x4e216cu: goto label_4e216c;
        case 0x4e2170u: goto label_4e2170;
        case 0x4e2174u: goto label_4e2174;
        case 0x4e2178u: goto label_4e2178;
        case 0x4e217cu: goto label_4e217c;
        case 0x4e2180u: goto label_4e2180;
        case 0x4e2184u: goto label_4e2184;
        case 0x4e2188u: goto label_4e2188;
        case 0x4e218cu: goto label_4e218c;
        case 0x4e2190u: goto label_4e2190;
        case 0x4e2194u: goto label_4e2194;
        case 0x4e2198u: goto label_4e2198;
        case 0x4e219cu: goto label_4e219c;
        case 0x4e21a0u: goto label_4e21a0;
        case 0x4e21a4u: goto label_4e21a4;
        case 0x4e21a8u: goto label_4e21a8;
        case 0x4e21acu: goto label_4e21ac;
        case 0x4e21b0u: goto label_4e21b0;
        case 0x4e21b4u: goto label_4e21b4;
        case 0x4e21b8u: goto label_4e21b8;
        case 0x4e21bcu: goto label_4e21bc;
        case 0x4e21c0u: goto label_4e21c0;
        case 0x4e21c4u: goto label_4e21c4;
        case 0x4e21c8u: goto label_4e21c8;
        case 0x4e21ccu: goto label_4e21cc;
        case 0x4e21d0u: goto label_4e21d0;
        case 0x4e21d4u: goto label_4e21d4;
        case 0x4e21d8u: goto label_4e21d8;
        case 0x4e21dcu: goto label_4e21dc;
        case 0x4e21e0u: goto label_4e21e0;
        case 0x4e21e4u: goto label_4e21e4;
        case 0x4e21e8u: goto label_4e21e8;
        case 0x4e21ecu: goto label_4e21ec;
        case 0x4e21f0u: goto label_4e21f0;
        case 0x4e21f4u: goto label_4e21f4;
        case 0x4e21f8u: goto label_4e21f8;
        case 0x4e21fcu: goto label_4e21fc;
        case 0x4e2200u: goto label_4e2200;
        case 0x4e2204u: goto label_4e2204;
        case 0x4e2208u: goto label_4e2208;
        case 0x4e220cu: goto label_4e220c;
        case 0x4e2210u: goto label_4e2210;
        case 0x4e2214u: goto label_4e2214;
        case 0x4e2218u: goto label_4e2218;
        case 0x4e221cu: goto label_4e221c;
        case 0x4e2220u: goto label_4e2220;
        case 0x4e2224u: goto label_4e2224;
        case 0x4e2228u: goto label_4e2228;
        case 0x4e222cu: goto label_4e222c;
        case 0x4e2230u: goto label_4e2230;
        case 0x4e2234u: goto label_4e2234;
        case 0x4e2238u: goto label_4e2238;
        case 0x4e223cu: goto label_4e223c;
        case 0x4e2240u: goto label_4e2240;
        case 0x4e2244u: goto label_4e2244;
        case 0x4e2248u: goto label_4e2248;
        case 0x4e224cu: goto label_4e224c;
        case 0x4e2250u: goto label_4e2250;
        case 0x4e2254u: goto label_4e2254;
        case 0x4e2258u: goto label_4e2258;
        case 0x4e225cu: goto label_4e225c;
        case 0x4e2260u: goto label_4e2260;
        case 0x4e2264u: goto label_4e2264;
        case 0x4e2268u: goto label_4e2268;
        case 0x4e226cu: goto label_4e226c;
        case 0x4e2270u: goto label_4e2270;
        case 0x4e2274u: goto label_4e2274;
        case 0x4e2278u: goto label_4e2278;
        case 0x4e227cu: goto label_4e227c;
        case 0x4e2280u: goto label_4e2280;
        case 0x4e2284u: goto label_4e2284;
        case 0x4e2288u: goto label_4e2288;
        case 0x4e228cu: goto label_4e228c;
        case 0x4e2290u: goto label_4e2290;
        case 0x4e2294u: goto label_4e2294;
        default: break;
    }

    ctx->pc = 0x4e2168u;

label_4e2168:
    // 0x4e2168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e2168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e216c:
    // 0x4e216c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4e2170:
    // 0x4e2170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e2170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2174:
    // 0x4e2174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e2174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4e2178:
    // 0x4e2178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e2178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4e217c:
    // 0x4e217c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4e2180:
    // 0x4e2180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e2180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e2184:
    // 0x4e2184: 0xc1232f2  jal         func_48CBC8
label_4e2188:
    if (ctx->pc == 0x4E2188u) {
        ctx->pc = 0x4E2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2184u;
        // 0x4e2188: 0x263201b4  addiu       $s2, $s1, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E218Cu;
        goto label_4e218c;
    }
    ctx->pc = 0x4E2184u;
    SET_GPR_U32(ctx, 31, 0x4E218Cu);
    ctx->pc = 0x4E2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2184u;
    // 0x4e2188: 0x263201b4  addiu       $s2, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E2184u, 0x4E218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E218Cu;
label_4e218c:
    // 0x4e218c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e218cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4e2190:
    // 0x4e2190: 0xac621198  sw          $v0, 0x1198($v1)
    ctx->pc = 0x4e2190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4504), GPR_U32(ctx, 2));
label_4e2194:
    // 0x4e2194: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e2194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4e2198:
    // 0x4e2198: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_4e219c:
    if (ctx->pc == 0x4E219Cu) {
        ctx->pc = 0x4E219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2198u;
        // 0x4e219c: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E21A0u;
        goto label_4e21a0;
    }
    ctx->pc = 0x4E2198u;
    {
        const bool branch_taken_0x4e2198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2198u;
        // 0x4e219c: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2198) {
            ctx->pc = 0x4E21E8u;
            goto label_4e21e8;
        }
    }
    ctx->pc = 0x4E21A0u;
label_4e21a0:
    // 0x4e21a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e21a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e21a4:
    // 0x4e21a4: 0xc12b642  jal         func_4AD908
label_4e21a8:
    if (ctx->pc == 0x4E21A8u) {
        ctx->pc = 0x4E21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21A4u;
        // 0x4e21a8: 0x26701180  addiu       $s0, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E21ACu;
        goto label_4e21ac;
    }
    ctx->pc = 0x4E21A4u;
    SET_GPR_U32(ctx, 31, 0x4E21ACu);
    ctx->pc = 0x4E21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E21A4u;
    // 0x4e21a8: 0x26701180  addiu       $s0, $s3, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E21A4u, 0x4E21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E21ACu;
label_4e21ac:
    // 0x4e21ac: 0xc12b5b0  jal         func_4AD6C0
label_4e21b0:
    if (ctx->pc == 0x4E21B0u) {
        ctx->pc = 0x4E21B4u;
        goto label_4e21b4;
    }
    ctx->pc = 0x4E21ACu;
    SET_GPR_U32(ctx, 31, 0x4E21B4u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E21ACu, 0x4E21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E21B4u;
label_4e21b4:
    // 0x4e21b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e21b8:
    // 0x4e21b8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4e21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4e21bc:
    // 0x4e21bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e21bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4e21c0:
    // 0x4e21c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e21c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e21c4:
    // 0x4e21c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e21c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e21c8:
    // 0x4e21c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e21cc:
    // 0x4e21cc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e21ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4e21d0:
    // 0x4e21d0: 0xa620015e  sh          $zero, 0x15E($s1)
    ctx->pc = 0x4e21d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 0));
label_4e21d4:
    // 0x4e21d4: 0xa622014a  sh          $v0, 0x14A($s1)
    ctx->pc = 0x4e21d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 330), (uint16_t)GPR_U32(ctx, 2));
label_4e21d8:
    // 0x4e21d8: 0xa6200162  sh          $zero, 0x162($s1)
    ctx->pc = 0x4e21d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 0));
label_4e21dc:
    // 0x4e21dc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e21dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4e21e0:
    // 0x4e21e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e21e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4e21e4:
    // 0x4e21e4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4e21e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e21e8:
    // 0x4e21e8: 0x26651180  addiu       $a1, $s3, 0x1180
    ctx->pc = 0x4e21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
label_4e21ec:
    // 0x4e21ec: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x4e21ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_4e21f0:
    // 0x4e21f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e21f4:
    // 0x4e21f4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e21f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4e21f8:
    // 0x4e21f8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e21f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4e21fc:
    // 0x4e21fc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4e21fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4e2200:
    // 0x4e2200: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e2204:
    // 0x4e2204: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e2204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e2208:
    // 0x4e2208: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e2208u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e220c:
    // 0x4e220c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e220cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e2210:
    // 0x4e2210: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e2210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2214:
    // 0x4e2214: 0x2442ff87  addiu       $v0, $v0, -0x79
    ctx->pc = 0x4e2214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967175));
label_4e2218:
    // 0x4e2218: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e2218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4e221c:
    // 0x4e221c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e221cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e2220:
    // 0x4e2220: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e2220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e2224:
    // 0x4e2224: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e2224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e2228:
    // 0x4e2228: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4e2228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e222c:
    // 0x4e222c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x4e222cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4e2230:
    // 0x4e2230: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e2230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4e2234:
    // 0x4e2234: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e2234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e2238:
    // 0x4e2238: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e2238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4e223c:
    // 0x4e223c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e223cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e2240:
    // 0x4e2240: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e2240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4e2244:
    // 0x4e2244: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e2244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2248:
    // 0x4e2248: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e2248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e224c:
    // 0x4e224c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e224cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e2250:
    // 0x4e2250: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e2250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e2254:
    // 0x4e2254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e2254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4e2258:
    // 0x4e2258: 0x24217d08  addiu       $at, $at, 0x7D08
    ctx->pc = 0x4e2258u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32008));
label_4e225c:
    // 0x4e225c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4e2260:
    // 0x4e2260: 0xace2119c  sw          $v0, 0x119C($a3)
    ctx->pc = 0x4e2260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4508), GPR_U32(ctx, 2));
label_4e2264:
    // 0x4e2264: 0x962301bc  lhu         $v1, 0x1BC($s1)
    ctx->pc = 0x4e2264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_4e2268:
    // 0x4e2268: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4e2268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4e226c:
    // 0x4e226c: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4e226cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_4e2270:
    // 0x4e2270: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x4e2270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4e2274:
    // 0x4e2274: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_4e2278:
    if (ctx->pc == 0x4E2278u) {
        ctx->pc = 0x4E2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2274u;
        // 0x4e2278: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E227Cu;
        goto label_4e227c;
    }
    ctx->pc = 0x4E2274u;
    {
        const bool branch_taken_0x4e2274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2274u;
        // 0x4e2278: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2274) {
            ctx->pc = 0x4E2338u;
            return;
        }
    }
    ctx->pc = 0x4E227Cu;
label_4e227c:
    // 0x4e227c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4e227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e2280:
    // 0x4e2280: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e2280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4e2284:
    // 0x4e2284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e2284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e2288:
    // 0x4e2288: 0x8c63b9a0  lw          $v1, -0x4660($v1)
    ctx->pc = 0x4e2288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949280)));
label_4e228c:
    // 0x4e228c: 0x600008  jr          $v1
label_4e2290:
    if (ctx->pc == 0x4E2290u) {
        ctx->pc = 0x4E2294u;
        goto label_4e2294;
    }
    ctx->pc = 0x4E228Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E228Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E2294u;
label_4e2294:
    // 0x4e2294: 0x0  nop
    ctx->pc = 0x4e2294u;
    // NOP
    ctx->pc = 0x4e2298u;
}
