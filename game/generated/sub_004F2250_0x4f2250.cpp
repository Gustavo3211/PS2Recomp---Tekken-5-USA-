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

// Function: sub_004F2250
// Address: 0x4f2250 - 0x4f2328
void sub_004F2250_0x4f2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2250_0x4f2250");
#endif

    ctx->pc = 0x4f2250u;

    // 0x4f2250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f2254: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4f2254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f225c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4f225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4f2260: 0x24461210  addiu       $a2, $v0, 0x1210
    ctx->pc = 0x4f2260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4f2264: 0x24e80014  addiu       $t0, $a3, 0x14
    ctx->pc = 0x4f2264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4f2268: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f2268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4f226c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4f226cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2270: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x4f2270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x4f2274: 0x24ea0166  addiu       $t2, $a3, 0x166
    ctx->pc = 0x4f2274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 358));
    // 0x4f2278: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f227c: 0x24eb01bc  addiu       $t3, $a3, 0x1BC
    ctx->pc = 0x4f227cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
    // 0x4f2280: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f2280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f2284: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2288: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f2288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f228c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f228cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2290: 0x85450000  lh          $a1, 0x0($t2)
    ctx->pc = 0x4f2290u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f2294: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f2294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2298: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f2298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4f229c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f22a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f22a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f22a4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f22a8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f22a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f22ac: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x4f22acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x4f22b0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F22B0u;
    {
        const bool branch_taken_0x4f22b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F22B0u;
        // 0x4f22b4: 0x3465ffff  ori         $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f22b0) {
            ctx->pc = 0x4F22C8u;
            goto label_4f22c8;
        }
    }
    ctx->pc = 0x4F22B8u;
    // 0x4f22b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f22b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f22bc: 0x813c8ca  j           func_4F2328
    ctx->pc = 0x4F22BCu;
    ctx->pc = 0x4F22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F22BCu;
    // 0x4f22c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2328u;
    sub_004F2328_0x4f2328(rdram, ctx, runtime); return;
    ctx->pc = 0x4F22C4u;
    // 0x4f22c4: 0x0  nop
    ctx->pc = 0x4f22c4u;
    // NOP
label_4f22c8:
    // 0x4f22c8: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4f22c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f22cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f22ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f22d0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4f22d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4f22d4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4f22d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f22d8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f22dc: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x4f22dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f22e0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f22e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f22e4: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x4f22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x4f22e8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4f22e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4f22ec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f22ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f22f0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4f22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4f22f4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f22f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f22f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f22f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f22fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f2300: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4f2300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4f2304: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f2304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f2308: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f230c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f230cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f2310: 0xace00128  sw          $zero, 0x128($a3)
    ctx->pc = 0x4f2310u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 296), GPR_U32(ctx, 0));
    // 0x4f2314: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4f2314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f2318: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f2318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f231c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4f231cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2320: 0x813c8ca  j           func_4F2328
    ctx->pc = 0x4F2320u;
    ctx->pc = 0x4F2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2320u;
    // 0x4f2324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2328u;
    sub_004F2328_0x4f2328(rdram, ctx, runtime); return;
    ctx->pc = 0x4F2328u;
}
